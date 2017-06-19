#include <ctest.h>
#include "functions.h"

CTEST(disc_test, D_pol)
{
	const float a = 1;
	const float b = 3;
	const float c = 1;

	const float result = D(a, b, c);

	const float expected = 5;
	ASSERT_EQUAL(expected, result);
}

CTEST(disc_test, d_equal_zero)
{
	const float a = 1;
	const float b = 2;
	const float c = 1;

	const float result = D(a, b, c);

	const float expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(disc_test, d_otr)
{
	const float a = 1;
	const float b = 1;
	const float c = 1;

	const float result = D(a, b, c);

	const float expected = -3;
	ASSERT_EQUAL(expected, result);
}