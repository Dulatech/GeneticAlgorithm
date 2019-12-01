//
// Created by david on 11/30/2019.
//

#include <algorithm>
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

std::vector<tour> genetic_algorithm::select_parents(population &pop) {
    return std::vector<tour>();
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
