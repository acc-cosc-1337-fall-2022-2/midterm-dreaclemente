#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_cookie")
{
	vector<float> result = {48.0, 1.5, 1.0, 2.75};
	vector<float> result = {96.0, 3.0, 2.0, 5.5};
	vector<float> result = {24.0, 0.75, 0.5, 1.375};

	REQUIRE(get_cookie(48)) == result;
	REQUIRE(get_cookie(96)) == result;
	REQUIRE(get_cookie(24)) == result;
}