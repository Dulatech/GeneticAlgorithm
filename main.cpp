#include <iostream>
#include <random>
#include <algorithm>
#include "tour.hpp"
#include "population.hpp"
#include "genetic_algorithm.hpp"

int main() {
//    population p;
//    p.populate();
//    p.printPopulation();
//
//    std::cout << " " << std::endl;
//
//    tour t = p.find_fittest();
//    std::cout <<"Fittest Tour " <<t.determine_fitness() << std::endl;
//
//
//    std::cout << " " << std::endl;
//    std::cout << " " << std::endl;
//    std::cout << "After Selection:" << std::endl;
//    genetic_algorithm g;
//    g.selection(p);
//    p.printPopulation();
//
//    std::cout << " " << std::endl;
//    std::cout << " " << std::endl;
//    std::cout << "After Selection of Parents:" << std::endl;
//    std::vector<tour> tt = g.select_parents(p);
//
//
//    std::cout << "After Crossover:" << std::endl;
//    g.crossover(tt);


    tour t;
    t.create_group();
    t.printTour();
    std::cout << "Mutation:" << std::endl;
    genetic_algorithm ga;
    ga.mutate(t);
    t.printTour();





    return 0;
}