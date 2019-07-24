#define BOOST_TEST_MAIN

#include <boost/test/included/unit_test.hpp>
#include "functions.h"
#include "random.h"
#include <iostream>

BOOST_AUTO_TEST_CASE(dummyTest)
{
    BOOST_CHECK_EQUAL(1, 1);
}

BOOST_AUTO_TEST_CASE(checkRNG)
{
    rnd::rng.seed(42u);
    std::vector<size_t> numbers = samplePoissonVector(5u, 2.0, rnd::rng);
    std::vector<size_t> expected { 3u, 1u, 2u, 1u, 5u };
    BOOST_CHECK_EQUAL_COLLECTIONS(numbers.begin(), numbers.end(), expected.begin(), expected.end());
}

//samplePoissonVector(5u, 2.0, rng);
