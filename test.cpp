#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Sign function", "[sign]") {
    REQUIRE( Sign(-3) == -1 );
    REQUIRE( Sign(13) == 1 );
    REQUIRE( Sign(0) == 1 );
}

TEST_CASE ("Factorials are computed", "[factorial]") {
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(15) == 1307674368000);
    REQUIRE( Factorial(0) == 1 );
}