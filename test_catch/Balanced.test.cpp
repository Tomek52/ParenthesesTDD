#include "catch.hpp"
#include "../inc/Balanced.hpp"

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

    GIVEN("string with single bracket")
    {
        WHEN("Function is called")
        {
            THEN("Result should be false")
            {
                REQUIRE(b.checkBalance("[")==false);
            }
        }
    }

    GIVEN("string with odd number of brackets")
    {
        WHEN("Function is called")
        {
            THEN("Result should be false")
            {
                REQUIRE(b.checkBalance("[]]")==false);
            }
        }
    }

    GIVEN("string with two brackets in correct order")
    {
        WHEN("Function is called")
        {
            THEN("Result should be true")
            {
                REQUIRE(b.checkBalance("[]")==true);
            }
        }
    }
    
    GIVEN("string with two brackets in wrong order")
    {
        WHEN("Function is called")
        {
            THEN("Result should be false")
            {
                REQUIRE(b.checkBalance("[[")==false);
            }
        }
    }
    
    GIVEN("string with non nested balanced brackets")
    {
        WHEN("Function is called")
        {
            THEN("Result should be true")
            {
                REQUIRE(b.checkBalance("[][][]")==true);
            }
        }
    }
    
    GIVEN("string with non nested, non balanced brackets")
    {
        WHEN("Function is called")
        {
            THEN("Result should be false")
            {
                REQUIRE(b.checkBalance("[]][")==false);
            }
        }
    }
    
    GIVEN("string with nested balanced brackets")
    {
        WHEN("Function is called")
        {
            THEN("Result should be true")
            {
                REQUIRE(b.checkBalance("[[]]")==true);
            }
        }
    }
    
    GIVEN("string with nested non balanced brackets")
    {
        WHEN("Function is called")
        {
            THEN("Result should be false")
            {
                REQUIRE(b.checkBalance("][[]]]")==false);
            }
        }
    }
    
    GIVEN("string with pair balanced parentheses")
    {
        WHEN("Function is called")
        {
            THEN("Result should be true")
            {
                REQUIRE(b.checkBalance("()")==true);
            }
        }
    }
    
    GIVEN("string with non nested, balanced parentheses and bracktes")
    {
        WHEN("Function is called")
        {
            THEN("Result should be true")
            {
                REQUIRE(b.checkBalance("[]()()")==true);
            }
        }
    }
}
