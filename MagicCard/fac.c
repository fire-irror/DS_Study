#include <stdio.h>

int fac(n) {
	if (n == 1) return 1;

	else return n * fac(n - 1);
}
int main() {
	int n = 5;

	printf("%d! = %d\n", n, fac(n));
	return 0;
}