/*����ڷκ��� 5���� ������ �迭�� �Է� ���� �� ���� �ϳ��� �߰��� �Է� �޾� �� ���� �迭�� � �����ϴ� ���� ����ϴ�
    ���α׷��� �ۼ��Ͻÿ�.*/

#include <stdio.h>

int main() {
    int arr[5];
    int a,i;
    int count = 0;

    printf("���� 5���� �Է��ϼ��� : ");
    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        scanf_s("%d", &arr[i]);
    }
    printf("�� ���ڰ� � �����ϴ��� �˰� ���� ���� �Է��ϼ��� :");
    scanf_s("%d", &a);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] == a) {
            count += 1;
        }
    }
    printf("���� : %d ", count);

}