//
// Created by david on 11/30/2019.
//

#ifndef GENETICALGORITHM_TOUR_HPP
#define GENETICALGORITHM_TOUR_HPP


#include <vector>
#include "city.hpp"

class tour {
protected:
    constexpr static int MAP_BOUNDARY =1000;
    constexpr static int CITIES_IN_TOUR = 32;
    std::vector<city> cities;
    double fitnessRating;
    int distance;

public:
    tour();
    void create_group();
    void shuffle_cities();
    int get_tour_distance();
    double determine_fitness();
    bool operator == (const tour& t) const;
    bool contains_city(city c);
    void printTour();




};


#endif //GENETICALGORITHM_TOUR_HPP
