//
// Created by david on 11/30/2019.
//

#include <algorithm>
#include <random>
#include <iostream>
#include "genetic_algorithm.hpp"

genetic_algorithm::genetic_algorithm() {

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
        std::cout << "Pool: " <<std::endl;

        for (int j = 0; j < PARENT_POOL_SIZE; ++j) {

            std::random_device seeder;
            std::mt19937 engine(seeder());
            std::uniform_int_distribution<int> dist(0, 31);
            int k = dist(engine);
            parent_pool.push_back(p.getPopulation().at(k));
            std::cout << "Distance: " <<p.getPopulation().at(k).get_tour_distance() << std::endl;
            std::cout << "Fitness: " << p.getPopulation().at(k).determine_fitness() << std::endl;
        }
        std::cout << "Parent: " <<std::endl;
        std::sort(parent_pool.begin(), parent_pool.end());
        parents.push_back(parent_pool.at(0));
        std::cout << "Distance: " << parents.at(i).get_tour_distance() << std::endl;
        std::cout << "Fitness: " << parents.at(i).determine_fitness() << std::endl;
        parent_pool.clear();
    }

    return parents;
}


tour genetic_algorithm::crossover(std::vector<tour> &parents) {
    tour child;
    std::vector<city> p1 = parents.at(0).getTour();
    std::cout << "Parent 1: " <<std::endl;
    for (auto it =  p1.begin() ; it !=  p1.end(); ++it)
    {
        std::cout << *it<<std::endl;
    }

    std::vector<city> p2 =  parents.at(1).getTour();
    std::cout << "Parent 2: " <<std::endl;
    for (auto it =  p2.begin() ; it !=  p2.end(); ++it)
    {
        std::cout << *it<<std::endl;
    }
    std::random_device seeder;
    std::mt19937 engine(seeder());
    std::uniform_int_distribution<int> dist(0, 31);
    int k = dist(engine);

    for (int i = 0; i <= k; ++i) {
        child.getTour().push_back(p1.at(i));
    }
    while(k<32){
        if (!child.contains_city(p2.at(k))) {
            child.getTour().push_back(p2.at(k));
        }
        k++;
    }

    std::cout << "Child: " <<std::endl;
    child.printTour();
    return child;
}

void genetic_algorithm::mutate(tour &t) {

}

void genetic_algorithm::evaluation() {

}

void genetic_algorithm::report() {

}
