/*5�� �л��� ������ �Է¹ް� ����ϱ�*/

#include <stdio.h>

int main() {
	int arr[5];

	printf("�л� ������ �Է��ϼ��� : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
		printf("�л�����: %d\n",arr[i]);
	}
	printf("\n");
	return 0;
}