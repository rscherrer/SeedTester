#ifndef PROGRAM_FUNCTIONS_H
#define PROGRAM_FUNCTIONS_H


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



#endif
