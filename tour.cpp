//
// Created by david on 11/30/2019.
//

#include <algorithm>
#include <random>
#include <iostream>
#include "tour.hpp"

tour::tour() : fitnessRating(0), distance(0) { }

void tour::create_group() {
    for (int i = 0; i < CITIES_IN_TOUR; ++i) {
        std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

        std::random_device rd;
        std::mt19937 generator(rd());

        std::shuffle(str.begin(), str.end(), generator);

        std::random_device seeder;
        std::mt19937 engine(seeder());
        std::uniform_int_distribution<int> dist(0, MAP_BOUNDARY);

        std::random_device seeder2;
        std::mt19937 engine2(seeder());
        std::uniform_int_distribution<int> dist2(0, MAP_BOUNDARY);

        city c(str.substr(0, 32), dist(engine),dist2(engine2));
        cities.push_back(c);

    }
    distance = get_tour_distance();
    fitnessRating = determine_fitness();
}

void tour::shuffle_cities() {
        auto rng = std::default_random_engine {};
        std::shuffle(cities.begin(), cities.end(), rng);
}

int tour::get_tour_distance() {
        int tourDistance = 0;
        for (int i = 0; i < CITIES_IN_TOUR; i++) {
            city fromCity = cities.at(i);
            city toCity;
            if (i + 1 < CITIES_IN_TOUR) {
                toCity = cities.at(i + 1);
            }
            else {
                toCity = cities.at(0);
            }
            tourDistance += (int) fromCity.get_distance_between_cities(toCity);
        }
        distance = tourDistance;

        return distance;
}

double tour::determine_fitness() {
        fitnessRating = (1/(double) get_tour_distance())*10000;

    return fitnessRating;
}

bool tour::operator==(const tour &t) const {
    return fitnessRating == t.fitnessRating;
}

bool tour::contains_city(city c) {
    auto it = std::find (cities.begin(), cities.end(), c);
    return it != cities.end();
}

void  tour::printTour(){
    for (auto it = cities.begin() ; it != cities.end(); ++it)
    {
        std::cout << *it<<std::endl;
    }

}

bool tour::operator<(const tour &t) const {
    return (fitnessRating>t.fitnessRating);
}
