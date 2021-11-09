#include <math.h>

double f(const double *x, double *result)					
{
	*result = tan(2 * *x) + (1 / cos(*x));
}