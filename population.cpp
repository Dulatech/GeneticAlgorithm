//
// Created by david on 11/30/2019.
//

#include <iostream>
#include "population.hpp"

/**
 * populates the population with randomly shuffles cities
 */
void population::populate() {
    tour t;
    t.create_group();
    for (int i = 0; i < POPULATION_SIZE; ++i) {
        t.shuffle_cities();
        tours.push_back(t);
    }
}

/**
 * finds the tour with the highest fitness
 *
 * @return
 */
tour population::find_fittest() {
    auto fittestTour = tours.at(0);
    for (auto it = tours.begin() + 1; it < tours.end(); ++it) {
        if (fittestTour.determine_fitness() <= it->determine_fitness()) {
            fittestTour = *it;
        }
    }
    return fittestTour;
}

/**
 * returns the tour list for easier modification
 *
 * @return
 */
std::vector<tour> &population::getPopulation() {
    return tours;
}


/**
 * prints the information of each tour
 */
void population::printPopulation() {
    int count = 1;
    for (auto it = tours.begin() ; it != tours.end(); ++it)
    {

//        it->printTour();
        std::cout << " " << std::endl;
        std::cout << "Tour: " << count << std::endl;
        std::cout << "Distance: " <<it->get_tour_distance() << std::endl;
        std::cout << "Fitness: " << it->determine_fitness() << std::endl;
        count++;

    }
}

/**
 * had to implement due to bug where I was creating null populations
 *
 * @param t
 */
void population::set_population(std::vector <tour> &t) {
    tours = t;
}

