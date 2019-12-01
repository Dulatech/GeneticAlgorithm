//
// Created by david on 11/30/2019.
//

#ifndef GENETICALGORITHM_CITY_HPP
#define GENETICALGORITHM_CITY_HPP


#include <string>

class city {
protected:
    std::string name;
    int x;
    int y;

public:
    city();
    city(std::string name, int x, int y);
    double get_distance_between_cities(city &c);
    int getX();
    int getY();
    bool operator==(const city &c) const;
    friend std::ostream &operator << (std::ostream&, const city& c);
};


#endif //GENETICALGORITHM_CITY_HPP
