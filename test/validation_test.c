#include <stdio.h>
#include <math.h>
#include "../src/function.h"
#include "../thirdparty/ctest.h"

#define YES 1
#define NO 0

CTEST(x_test, D_pol_first)
{
	const float d = 1;
	const float a = 1;
	const float b = 3;
	const int num = 1;

	const float result = X(d, a, b, num);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(x_test, d_pol_second)
{
	const float d = 1;
	const float a = 1;
	const float b = 3;
	const int num = -1;

	const float result = X(d, a, b, num);

	const float expected = -2;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(x_test, d_equal_zero)
{
	const float d = 0;
	const float a = 1;
	const float b = 2;
	const int num = 1;

	const float result = X(d, a, b, num);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, result);
}
