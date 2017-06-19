#include <ctest.h>
#include "functions.h"

CTEST(x_test, D_pol_first)
{
	const float d = 1;
	const float a = 1;
	const float b = 3;
	const int num = 1;

	const float result = X(d, a, b, num);

	const float expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(x_test, d_pol_second)
{
	const float d = 1;
	const float a = 1;
	const float b = 3;
	const int num = -1;

	const float result = X(d, a, b, num);

	const float expected = -2;
	ASSERT_EQUAL(expected, result);
}

CTEST(x_test, d_equal_zero)
{
	const float d = 0;
	const float a = 1;
	const float b = 2;
	const int num = 1;

	const float result = X(d, a, b, num);

	const float expected = -1;
	ASSERT_EQUAL(expected, result);
}