//
// Created by david on 11/30/2019.
//

#include <cmath>
#include <iostream>
#include "city.hpp"

/**
 * Default Constructor
 */
city::city(){}

/**
 * Constructor initializing values of city
 *
 * @param name
 * @param x
 * @param y
 */
city::city(std::string name, int x, int y) : name(name), x(x), y(y) {}

/**
 * Finds the distance between two cities
 *
 * @param c
 * @return
 */
double city::get_distance_between_cities(city &c) {
    int xDistance = abs(getX() - c.getX());
    int yDistance = abs(getY() - c.getY());
    return sqrt((xDistance*xDistance) + (yDistance*yDistance));
}

/**
 * gets the cities X value
 *
 * @return
 */
int city::getX() {
    return x;
}

/**
 * gets the cities Y value
 *
 * @return
 */
int city::getY() {
    return y;
}

std::ostream &operator<<(std::ostream &os, const city &c) {
    return os << c.name << ", <" << c.x << ", " << c.y << ">" << std::endl;
}

bool city::operator==(const city &c) const{
    return ((name == c.name) && (x == c.x) && (y == c.y));
}

