#include <catch2/catch_test_macros.hpp>
#include "add.h"

TEST_CASE("ADDED WORKS", "[Add]") {
	REQUIRE(add(2, 3) == 5);
	REQUIRE(add(0, 0) == 0);
	REQUIRE(add(-1, 1) == 0);
}