//숫자 6개를 입력받아 홀수와 짝수 구분하기
#include <stdio.h>

int main() {
	int arr[6];

	printf("6개의 숫자를 입력하세요 : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);

		if (arr[i] % 2 == 0) {
			printf("짝수 : %d\n", arr[i]);
		}
		else {
			printf("홀수 : %d\n", arr[i]);
		}
	}

}