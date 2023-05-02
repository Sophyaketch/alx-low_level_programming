#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - it returns sum of all of its parameters.
 * @n: number of parameters passed to a function.
 * @...: variable number of parameters to calculate sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}