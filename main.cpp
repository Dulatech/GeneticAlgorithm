#include <iostream>
#include <random>
#include <algorithm>
#include "tour.hpp"
#include "population.hpp"

int main() {
    population p;
    p.populate();
    p.printPopulation();

    std::cout << " " << std::endl;

    tour t = p.find_fittest();
    std::cout <<"Fittest Tour " <<t.determine_fitness() << std::endl;


    return 0;
}