#include "include/functions.h"
#include <cstdint>
#include <stdexcept>
#include <limits>

/*
Starting in the top left corner of a 2x2 grid, and only being able to move to the right and down,
there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20x20 grid?
*/

namespace func {
    uint64_t factorial(uint64_t num) {
        if (num > std::numeric_limits<uint64_t>::max() || num < std::numeric_limits<uint64_t>::min() || num < 0) {
            throw std::invalid_argument("Argument 'num' is out of range for 'uint64_t' type or is less than 0.");
        }
        uint64_t factorial = 1;

        for (uint64_t i = 1; i <= num; i++) {
            factorial *= i;
        }

        return factorial;
    }

    uint64_t running_product_in_range(uint64_t N) {
        uint64_t result = 1;

        for (uint64_t i = N + 1; i <= 2 * N; i++) {
            result *= i;
        }

        return result;
    }

    double NxN_possible_grid_routes(int N) {
        if (N > std::numeric_limits<int>::max() || N < std::numeric_limits<int>::min() || N < 0) {
            throw std::invalid_argument("Argument 'N' is out of range for 'int' type or is less than 0.");
        }
        double result = 1;

        for (int64_t i = 1; i <= N; i++) {
            result *= static_cast<double>(N + i) / static_cast<double>(i);
        }
        
        return result;
    }
}