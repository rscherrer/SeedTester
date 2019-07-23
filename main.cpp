#include <iostream>
#include <random>


/// Function to seed RNG and sample a Poisson number
size_t seedAndSample(const size_t &seed, const double &lambda, std::mt19937_64 &rng)
{
    rng.seed(seed);
    return std::poisson_distribution<int>(lambda)(rng);
}


/// Main function
int main()
{

    std::mt19937_64 rng;

    std::cout << "Randomly generated numbers = ";

    for (size_t i = 0u; i < 5u; ++i)
    {
        std::cout << seedAndSample(42u, 2.0, rng) << ' ';
        //std::cout << seedAndSample(i, 2.0, rng) << ' ';
    }

    std::cout << '\n';

    return 0;
}
