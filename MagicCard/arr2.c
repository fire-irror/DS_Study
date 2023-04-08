//사용자로부터 5개의 정수를 배열로 입력 받은 후 , 입력 받은 역순으로 출력하는 프로그램

#include <stdio.h>

int main() {
	int arr[5];

	printf("수 5개를 입력하세요 : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 4; j < sizeof(arr) / sizeof(int); j--) {
		printf("%d",arr[j]);
	}
	printf("\n");
}