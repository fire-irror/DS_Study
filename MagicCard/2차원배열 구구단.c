#include <stdio.h>

void main()
{
	int i, j;
	int arr[8][9];

	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(int);

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			arr[i][j] = (i + 2) * (j + 1);
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}