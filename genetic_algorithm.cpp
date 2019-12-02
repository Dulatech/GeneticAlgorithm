//
// Created by david on 11/30/2019.
//

#include <algorithm>
#include <random>
#include <iostream>
#include "genetic_algorithm.hpp"

void genetic_algorithm::natural_selection() {


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
            std::uniform_int_distribution<int> dist(0, 31);
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
    return child;
}

void genetic_algorithm::mutate(tour &t) {
    for(int i=0; i < 32; i++){
        std::random_device seeder;
        std::mt19937 engine(seeder());
        std::uniform_real_distribution<double> dist(0, 1);
        double k = dist(engine);
        std::cout<< k<< std::endl;
        if (k <= MUTATION_RATE) {
            std::random_device seeder2;
            std::mt19937 engine2(seeder2());
            std::uniform_int_distribution<int> dist2(0, 31);
            int j = dist2(engine2);
            std::swap(t.getTour().at(i), t.getTour().at(j));
        }
    }

}

void genetic_algorithm::report() {

}
