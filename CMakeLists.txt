cmake_minimum_required(VERSION 3.14)
project(GeneticAlgorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(GeneticAlgorithm main.cpp city.cpp city.hpp tour.cpp tour.hpp population.cpp population.hpp genetic_algorithm.cpp genetic_algorithm.hpp)