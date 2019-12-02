//
// Created by david on 11/30/2019.
//

#ifndef GENETICALGORITHM_GENETIC_ALGORITHM_HPP
#define GENETICALGORITHM_GENETIC_ALGORITHM_HPP


#include "population.hpp"

class genetic_algorithm {
private:
    constexpr static int ITERATIONS = 1000;
    constexpr static int PARENT_POOL_SIZE = 5;
    constexpr static double MUTATION_RATE = 0.15;
    constexpr static int NUMBER_OF_PARENTS = 2;
    constexpr static int NUMBER_OF_ELITES = 1;
    constexpr static int POPULATION_SIZE = 32;
    constexpr static int CITIES_IN_TOUR = 32;
    constexpr static double IMPROVEMENT_FACTOR = 0.60;
    int best_distance;
    int base_distance;

public:
    genetic_algorithm();
    void evolution(population &p);
    void selection(population &p);
    std::vector<tour> select_parents(population &p);
    tour crossover(std::vector<tour> &parents);
    void mutate(tour &t);





};


#endif //GENETICALGORITHM_GENETIC_ALGORITHM_HPP
