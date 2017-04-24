#include <sort.hpp>
#include <catch.hpp>

SCENARIO("sort") 
{
	int a[3][3];
	a[0][0] = 9; a[0][1] = 8; a[0][2] = 7;
	a[1][0] = 6; a[1][1] = 5; a[1][2] = 4;
	a[2][0] = 3; a[2][1] = 2; a[2][2] = 1;
	insertion_sort(&a[0][0], &a[3][2]);
	REQUIRE(a[0][0] == 1); REQUIRE(a[0][1] == 2); REQUIRE(a[0][2] == 3);
	REQUIRE(a[1][0] == 4); REQUIRE(a[1][1] == 5); REQUIRE(a[1][2] == 6);
	REQUIRE(a[2][0] == 7); REQUIRE(a[1][1] == 8); REQUIRE(a[2][2] == 9);
}
