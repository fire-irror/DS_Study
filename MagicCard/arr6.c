/*5명 학생의 성적을 입력받고 출력하기*/

#include <stdio.h>

int main() {
	int arr[5];

	printf("학생 성적을 입력하세요 : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
		printf("학생성적: %d\n",arr[i]);
	}
	printf("\n");
	return 0;
}