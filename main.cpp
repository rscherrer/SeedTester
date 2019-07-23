#include <iostream>
#include <random>

int main()
{

    std::mt19937_64 rng;

    rng.seed(42u);

    std::cout << "Hello world!\n";
    return 0;
}
