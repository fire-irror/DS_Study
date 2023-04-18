/*한 층에 2세대가 사는 4층 아파트가 있다. 각 층의 1, 2호에 사는 인원을 입력 받아 각 층의 합계를 출력하는 프로그램을 작성하라.
(단, 1차원 배열만 쓰는 경우와 2차원 배열을 쓰는 경우 둘 다 각각 프로그램을 작성할 것)*/


#include <stdio.h>

int main(void)
{
	int i, j;
	int arr[4][2];

	int col = sizeof(arr[0]) / sizeof(int);
	int row = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < row; i++)
		printf("%d층 인구수: %d\n", i + 1, arr[i][0] + arr[i][1]);

	return 0;
}