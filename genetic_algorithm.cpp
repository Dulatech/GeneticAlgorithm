//
// Created by david on 11/30/2019.
//

#include <algorithm>
#include <random>
#include <iostream>
#include <iomanip>
#include "genetic_algorithm.hpp"

genetic_algorithm::genetic_algorithm() {
    population basePop;
    basePop.populate();
    tour baseTour = basePop.find_fittest();
    base_distance = baseTour.get_tour_distance();
    double base_fitness = basePop.find_fittest().determine_fitness();
    best_distance = baseTour.get_tour_distance();
    int iterations = 0;
    double improvement = (double) best_distance/ (double) base_distance;

    while ((iterations < ITERATIONS) && (improvement > IMPROVEMENT_FACTOR)) {
        evolution(basePop);
        improvement = (double) basePop.find_fittest().get_tour_distance() / (double) base_distance;

        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "Iteration: " << iterations <<std::endl;
        std::cout << "Iteration Distance: " << basePop.find_fittest().get_tour_distance() <<std::endl;
        std::cout << "Iteration Fitness: " << basePop.find_fittest().determine_fitness() <<std::endl;
//        std::cout << "Improved By: " << basePop.find_fittest().get_tour_distance() <<std::endl;
        std::cout << "Improvement over Base: " << improvement * 100 << "%" <<std::endl;

iterations++;
    }
    std::cout << "*******************RESULTS*******************" << std::endl;
    std::cout << "Total Iteration: " << iterations <<std::endl;
    std::cout << "Base Distance: " << base_distance << " Best Distance: " << basePop.find_fittest().get_tour_distance() <<std::endl;
    std::cout << "Base Fitness: " << base_fitness << " Best Fitness: " << basePop.find_fittest().determine_fitness() <<std::endl;
    if(iterations >= 1000){
        std::cout << "Improvement Not Achieved" <<std::endl;
    } else{
        std::cout << "Improvement Achieved" <<std::endl;
    }
    std::cout << "Improvement Over Base: " << improvement * 100 << "%" <<std::endl;
    std::cout << "----------Base Tour:---------" << std::endl;
    baseTour.printTour();

    std::cout << "----------Best Tour:---------" << std::endl;
    basePop.find_fittest().printTour();




}

void genetic_algorithm::evolution(population &p) {
    population copy;
    tour fittestTour = p.find_fittest();
    std::vector<tour> holder;
    holder.push_back(fittestTour);
    selection(p);
    std::vector<tour> parents = select_parents(p);

    for (int j = NUMBER_OF_ELITES; j < POPULATION_SIZE; ++j) {
        tour child = crossover(parents);
        holder.push_back(child);
    }
    for (int i = NUMBER_OF_ELITES; i < POPULATION_SIZE; i++) {
        mutate(holder.at(i));
    }
    copy.set_population(holder);
    p = copy;



}

void genetic_algorithm::selection(population &p) {
    tour fittest = p.find_fittest();
    for (auto it = p.getPopulation().begin(); it != p.getPopulation().end(); ++it) {
        if (*it == fittest) {
            std::rotate(p.getPopulation().begin(), it, p.getPopulation().end());
            break;
        }
    }

}

std::vector<tour> genetic_algorithm::select_parents(population &p) {

    std::vector<tour> parents;
    for (int i = 0; i < NUMBER_OF_PARENTS; ++i) {
        std::vector<tour> parent_pool;

        for (int j = 0; j < PARENT_POOL_SIZE; ++j) {

            std::random_device seeder;
            std::mt19937 engine(seeder());
            std::uniform_int_distribution<int> dist(0, CITIES_IN_TOUR-1);
            int k = dist(engine);
            parent_pool.push_back(p.getPopulation().at(k));
        }
        std::sort(parent_pool.begin(), parent_pool.end());
        parents.push_back(parent_pool.at(0));
        parent_pool.clear();
    }

    return parents;
}


tour genetic_algorithm::crossover(std::vector<tour> &parents) {
    tour child;
    std::vector<city> p1 = parents.at(0).getTour();


    std::vector<city> p2 =  parents.at(1).getTour();

    std::random_device seeder;
    std::mt19937 engine(seeder());
    std::uniform_int_distribution<int> dist(0, CITIES_IN_TOUR-1);
    int k = dist(engine);

    for (int i = 0; i <= k; ++i) {
        child.getTour().push_back(p1.at(i));
    }
    int newCount = 0;
    while(child.getTour().size()<POPULATION_SIZE){
        if (!child.contains_city(p2.at(newCount))) {
            child.getTour().push_back(p2.at(newCount));

        }
        newCount++;
    }
    child.get_tour_distance();
    child.determine_fitness();
    return child;
}

void genetic_algorithm::mutate(tour &t) {
    for(int i=0; i < CITIES_IN_TOUR; i++){
        std::random_device seeder;
        std::mt19937 engine(seeder());
        std::uniform_real_distribution<double> dist(0, 1);
        double k = dist(engine);

        if (k <= MUTATION_RATE) {
            std::random_device seeder2;
            std::mt19937 engine2(seeder2());
            std::uniform_int_distribution<int> dist2(0, CITIES_IN_TOUR-1);
            int j = dist2(engine2);
            std::swap(t.getTour().at(i), t.getTour().at(j));
        }
    }

}


