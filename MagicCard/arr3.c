/*사용자로부터 5개의 정수를 입력 받는다.이 후, 사용자가 1을 입력하면 첫 번째 입력 받은 정수를 출력하고,
2를 입력하면 두 번 째 입력 받은 정수를 출력하는 프로그램을 작성하시오.*/

#include <stdio.h>

int main() {
	int arr[5];
	int i;
	int num;

	printf("수 5개를 입력하세요 : ");

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("몇번째 숫자를 보실건지 입력하세요 : ");
	scanf_s("%d", &num);
	if (num < 1 || num > 5) {
		printf("error");
	}
	printf("%d", arr[num - 1]);
}