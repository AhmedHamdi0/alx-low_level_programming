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
	
	return (0);
}
