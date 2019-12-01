//
// Created by david on 11/30/2019.
//

#ifndef GENETICALGORITHM_POPULATION_HPP
#define GENETICALGORITHM_POPULATION_HPP


#include "tour.hpp"

class population {

private:
    constexpr static int POPULATION_SIZE = 32;
    std::vector<tour> tours;

public:
    void populate();
    tour find_fittest();
    void printPopulation();




};


#endif //GENETICALGORITHM_POPULATION_HPP
