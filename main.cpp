#include <iostream>
#include "functions.h"
#include "random.h"


/// Main function
int main()
{

    rnd::rng.seed(42u);

    std::cout << "Randomly generated numbers = ";

    std::vector<size_t> numbers = samplePoissonVector(5u, 2.0, rnd::rng);

    for (auto number : numbers)
        std::cout << number << ' ';

    std::cout << '\n';

    rnd::rng.seed(42u);

    std::cout << "Randomly generated numbers = ";

    numbers = samplePoissonVector(5u, 2.0, rnd::rng);

    for (auto number : numbers)
        std::cout << number << ' ';

    std::cout << '\n';

    return 0;
}
