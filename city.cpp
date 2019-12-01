//
// Created by david on 11/30/2019.
//

#include <cmath>
#include <iostream>
#include "city.hpp"

city::city(){}

city::city(std::string name, int x, int y) : name(name), x(x), y(y) {}

double city::get_distance_between_cities(city &c) {
    int xDistance = abs(getX() - c.getX());
    int yDistance = abs(getY() - c.getY());
    return sqrt((xDistance*xDistance) + (yDistance*yDistance));
}

int city::getX() {
    return x;
}

int city::getY() {
    return y;
}

std::ostream &operator<<(std::ostream &os, const city &c) {
    return os << c.name << ", <" << c.x << ", " << c.y << ">" << std::endl;
}

bool city::operator==(const city &c) const{
    return ((name == c.name) && (x == c.x) && (y == c.y));
}

