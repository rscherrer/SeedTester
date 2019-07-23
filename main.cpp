#include <iostream>
#include <random>
#include <vector>


/// Function to sample a vector of Poisson distributed numbers
std::vector<size_t> samplePoissonVector(const size_t &n, const double &lambda, std::mt19937_64 &rng)
{
    std::vector<size_t> numbers;
    for (size_t i = 0u; i < n; ++i)
        numbers.push_back(std::poisson_distribution<size_t>(lambda)(rng));
    return(numbers);
}



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
