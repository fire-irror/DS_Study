/*�� ���� 2���밡 ��� 4�� ����Ʈ�� �ִ�. �� ���� 1, 2ȣ�� ��� �ο��� �Է� �޾� �� ���� �հ踦 ����ϴ� ���α׷��� �ۼ��϶�.
(��, 1���� �迭�� ���� ���� 2���� �迭�� ���� ��� �� �� ���� ���α׷��� �ۼ��� ��)*/


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
			printf("%d�� %dȣ �α���: ", i + 1, j + 1);
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < row; i++)
		printf("%d�� �α���: %d\n", i + 1, arr[i][0] + arr[i][1]);

	return 0;
}