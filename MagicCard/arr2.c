//����ڷκ��� 5���� ������ �迭�� �Է� ���� �� , �Է� ���� �������� ����ϴ� ���α׷�

#include <stdio.h>

int main() {
	int arr[5];

	printf("�� 5���� �Է��ϼ��� : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 4; j < sizeof(arr) / sizeof(int); j--) {
		printf("%d",arr[j]);
	}
	printf("\n");
}