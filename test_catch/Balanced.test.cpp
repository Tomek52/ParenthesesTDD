#include "catch.hpp"
#include "../inc/Balanced.hpp"

SCENARIO("test")
{
    GIVEN("test")
    {
        WHEN("ex:")
        {
            THEN("testing")
            {
                REQUIRE(true);
            }
        }
    }
}

SCENARIO("Check balance")
{
    Balance b;
    GIVEN("empty string")
    {
        WHEN("Function is called")
        {
            THEN("Result should be false")
            {
                REQUIRE(b.checkBalance("")==false);
            }
        }
    }

    GIVEN("string (")
    {
        WHEN("Function is called")
        {
            THEN("Result should be false")
            {
                REQUIRE(b.checkBalance("(")==false);
            }
        }
    }
}
