/*배열을 거꾸로 출력시키기 배열 6개를 입력받고 6개의 숫자를 거꾸로 출력시키는 예제를 만들자.*/

#include <stdio.h>

int main() {
	int arr[6];
	int a;

	printf("숫자 6개를 입력하세요 : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int j = (sizeof(arr) / sizeof(int) )- 1; j < sizeof(arr) / sizeof(int); j--) {
		printf("%d", arr[j]);
	}
}