#include <stdio.h>

int main() {
	printf("╪Ж ют╥б : ");
	
	int arr[101][101] = { 0 };

	int num = 0 ,x = 1;
	scanf_s("%d", &num);

	for (int i = 0; i <= num; i++) {
		for (int j = 0; j <= num; j++) {
			arr[i][j] = x;
			x++;
		}
	}
	for (int i = 0; i <= num; i++) {
		for (int j = 0; j <= num; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}