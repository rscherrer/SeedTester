#include <iostream>
#include "functions.h"


/// Main function
int main()
{

    std::mt19937_64 rng;

    rng.seed(42u);

    std::cout << "Randomly generated numbers = ";

    std::vector<size_t> numbers = samplePoissonVector(5u, 2.0, rng);

    for (auto number : numbers)
        std::cout << number << ' ';

    std::cout << '\n';

    rng.seed(42u);

    std::cout << "Randomly generated numbers = ";

    numbers = samplePoissonVector(5u, 2.0, rng);

    for (auto number : numbers)
        std::cout << number << ' ';

    std::cout << '\n';

    return 0;
}
