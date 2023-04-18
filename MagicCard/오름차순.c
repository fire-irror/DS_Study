/* 출처 : https://mangoreview.tistory.com/entry/C%EC%96%B8%EC%96%B4-%EC%A0%95%EC%88%98-%EC%98%A4%EB%A6%84%EC%B0%A8%EC%88%9C%EB%82%B4%EB%A6%BC%EC%B0%A8%EC%88%9C%EC%9D%84-%EA%B5%AC%ED%98%84%ED%95%98%EB%8A%94-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98SORT*/

#include <stdio.h>

int main() {
	int i, j, temp;
	int arr[5] = { 0 };

	printf("값을 5개 입력해주세요 : ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		for (j = 0; j < sizeof(arr) / sizeof(int); j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("결과는 : ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d\t", arr[i]);
	}
}