#include <sort.hpp>
#include <catch.hpp>

SCENARIO("sort") 
{
	int a[3][3];
	a[0][0] = 4; a[0][1] = 3; a[0][2] = 1;
	a[1][0] = 4; a[1][1] = 6; a[1][2] = 5;
	a[2][0] = 6; a[2][1] = 7; a[2][2] = 5;
	for (int i = 0; i < 3; ++i)
	{
		int * first = &a[i][0];
		int * last = &a[i][4];
		for (int j = 0; j < 3; ++j)
			insertion_sort(first, last);
	}
	REQUIRE(a[0][0] == 1); REQUIRE(a[0][1] == 3); REQUIRE(a[0][2] == 4);
	REQUIRE(a[1][0] == 4); REQUIRE(a[1][1] == 5); REQUIRE(a[1][2] == 6);
	REQUIRE(a[2][0] == 5); REQUIRE(a[2][1] == 6); REQUIRE(a[2][2] == 7);
}
