#include <stdio.h>

int main() {
	int n = 5;
	int fac = 1, i;
	for (int i = n; i >= 1; i--) {
		fac *= i;
	 }
	printf("%d! = %d\n", n, fac);
	return 0;
}