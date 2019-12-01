#include <iostream>
#include <random>
#include <algorithm>
#include "tour.hpp"

int main() {
    tour t;
    t.create_group();
    t.printTour();
    std::cout << t.get_tour_distance() << std::endl;
    std::cout << t.determine_fitness() << std::endl;

    return 0;
}