/*�迭�� �Ųٷ� ��½�Ű�� �迭 6���� �Է¹ް� 6���� ���ڸ� �Ųٷ� ��½�Ű�� ������ ������.*/

#include <stdio.h>

int main() {
	int arr[6];
	int a;

	printf("���� 6���� �Է��ϼ��� : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int j = (sizeof(arr) / sizeof(int) )- 1; j < sizeof(arr) / sizeof(int); j--) {
		printf("%d", arr[j]);
	}
}