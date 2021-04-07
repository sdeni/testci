//
// Created by sd on 07/04/2021.
//

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "graph.h"
using Catch::Matchers::Vector::EqualsMatcher;

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "Factorial edge cases", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
}

TEST_CASE( "Graph breadth first", "[graph]" ) {
    Graph g;

    SECTION( "Simplest graph test" ) {
        g.fromArray({
            {0,1,2},
            {1,2,3},
            {2,1},
            {3,0,1}
        });
        auto nodesList = g.breadthFirstSearch(0);

        REQUIRE( nodesList.size() == 4 );
    }

    SECTION( "Simplest graph test" ) {
        g.fromArray({
            {0,1,2},
            {1,2,3},
            {2,1},
            {3,0,1}
        });
        auto nodesList = g.breadthFirstSearch(0);

        REQUIRE( nodesList.size() == 4 );
    }

    SECTION( "More complex graph test" ) {
        g.fromArray({
            {0,2,4},
            {1,2,3},
            {2,1,4},
            {3,0,1},
            {4,3}
        });
        auto nodesList = g.breadthFirstSearch(0);

        REQUIRE( nodesList.size() == 5 );

        std::vector<int> test = std::vector<int> ({1,2,3});
        // REQUIRE_THAT( nodesList, EqualsMatcher(test));
    }
}

