#include "functions.h"

float D(float a, float b, float c)
{
	return (b * b) - (4 * a * c);
}

float X(float d, float a, float b, int num)
{
	return (-b + (num * sqrt(d))) / (2 * a);
}