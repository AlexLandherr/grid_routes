#include "include/functions.h"
#include <iostream>
#include <stdexcept>

/*
Starting in the top left corner of a 2x2 grid, and only being able to move to the right and down,
there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20x20 grid?
*/

int main() {
    /* uint64_t num = 22;
    try {
        std::cout << "Factorial of " << num << " is: " << func::factorial(num) << '\n';
    } catch (const std::invalid_argument& ex) {
        std::cout << ex.what() << '\n';
    } catch (const std::exception& ex) {
        std::cout << ex.what() << '\n';
    } */
    /* int N = 12;
    try {
        std::cout << "There are " << func::NxN_possible_grid_routes(N) << " routes in a " << N << "x" << N << " grid." << '\n';
    } catch (const std::invalid_argument& ex) {
        std::cout << ex.what() << '\n';
    } catch (const std::exception& ex) {
        std::cout << ex.what() << '\n';
    } */
    for (uint64_t i = 1; i <= 20; i++) {
        try {
            std::cout << "There are " << func::NxN_possible_grid_routes(i) << " routes in a " << i << "x" << i << " grid." << '\n';
        } catch (const std::invalid_argument& ex) {
            std::cout << ex.what() << '\n';
        } catch (const std::exception& ex) {
            std::cout << ex.what() << '\n';
        }
    }

    return 0;
}