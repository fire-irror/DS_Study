/*����ڷκ��� 5���� ������ �Է� �޴´�.�� ��, ����ڰ� 1�� �Է��ϸ� ù ��° �Է� ���� ������ ����ϰ�,
2�� �Է��ϸ� �� �� ° �Է� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include <stdio.h>

int main() {
	int arr[5];
	int i;
	int num;

	printf("�� 5���� �Է��ϼ��� : ");

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("���° ���ڸ� ���ǰ��� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	if (num < 1 || num > 5) {
		printf("error");
	}
	printf("%d", arr[num - 1]);
}