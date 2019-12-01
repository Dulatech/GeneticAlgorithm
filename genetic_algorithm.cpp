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


tour genetic_algorithm::crossover(tour t1, tour t2) {
    return tour();
}

void genetic_algorithm::mutate(tour &t) {

}

void genetic_algorithm::evaluation() {

}

void genetic_algorithm::report() {

}
