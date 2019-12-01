//
// Created by david on 11/30/2019.
//

#ifndef GENETICALGORITHM_POPULATION_HPP
#define GENETICALGORITHM_POPULATION_HPP


#include "tour.hpp"

class population {
    constexpr static int POPULATION_SIZE = 32;
private:
    std::vector<tour> tours;

};


#endif //GENETICALGORITHM_POPULATION_HPP
