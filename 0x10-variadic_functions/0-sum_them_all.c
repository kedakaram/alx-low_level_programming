#include <stdarg.h>

/**
* Computes the sum of all its parameters.
* @param n The number of parameters to sum.
* @param ... A variable number of integer arguments to sum.
* @return The sum of all the integer arguments.
* If n is 0, returns 0.
*/

int sum_them_all(const unsigned int n, ...) {
if (n == 0) {
return 0;
}
int sum = 0;
va_list args;
va_start(args, n);
for (unsigned int i = 0; i < n; i++) {
sum += va_arg(args, int);
}
va_end(args);
return sum;
}
