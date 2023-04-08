/*사용자로부터 5개의 정수를 배열로 입력 받은 후 숫자 하나를 추가로 입력 받아 그 수가 배열에 몇개 존재하는 지를 출력하는
    프로그램을 작성하시오.*/

#include <stdio.h>

int main() {
    int arr[5];
    int a,i;
    int count = 0;

    printf("숫자 5개를 입력하세요 : ");
    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        scanf_s("%d", &arr[i]);
    }
    printf("그 숫자가 몇개 존재하는지 알고 싶은 수를 입력하세요 :");
    scanf_s("%d", &a);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] == a) {
            count += 1;
        }
    }
    printf("개수 : %d ", count);

}