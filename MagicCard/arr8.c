//���� 6���� �Է¹޾� Ȧ���� ¦�� �����ϱ�
#include <stdio.h>

int main() {
	int arr[6];

	printf("6���� ���ڸ� �Է��ϼ��� : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);

		if (arr[i] % 2 == 0) {
			printf("¦�� : %d\n", arr[i]);
		}
		else {
			printf("Ȧ�� : %d\n", arr[i]);
		}
	}

}