#include <stdio.h>
#include "main.h"

int main() {
	_puts_recursion("Puts with recursion");

	_print_rev_recursion("\nColton Walker");

	printf("%d\n", _strlen_recursion("Corbin Coleman"));

	int r;
	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	
	r = _pow_recursion(1, 10);
	printf("%d\n", r);
	r = _pow_recursion(1024, 0);
	printf("%d\n", r);
	r = _pow_recursion(2, 16);
	printf("%d\n", r);
	r = _pow_recursion(5, 2);
	printf("%d\n", r);
	r = _pow_recursion(5, -2);
	printf("%d\n", r);
	r = _pow_recursion(-5, 3);
	printf("%d\n", r);
	
	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
