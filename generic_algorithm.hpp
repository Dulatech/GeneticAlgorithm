//
// Created by david on 11/30/2019.
//

#ifndef GENETICALGORITHM_GENERIC_ALGORITHM_HPP
#define GENETICALGORITHM_GENERIC_ALGORITHM_HPP


#include "population.hpp"

class generic_algorithm {
private:
    constexpr static int ITERATIONS = 1000;
    constexpr static int PARENT_POOL_SIZE = 5;
    constexpr static int MUTATION_RATE = 0.15;
    constexpr static int NUMBER_OF_PARENTS = 2;
    constexpr static int NUMBER_OF_ELITES = 1;
    constexpr static int improvement_factor = 0.50;
    int best_distance;
    int base_distance;

public:
    void selection(population &p);
    tour crossover(tour t1, tour t2);
    void mutate(tour &t);
    void evaluation();
    void report();





};


#endif //GENETICALGORITHM_GENERIC_ALGORITHM_HPP
