/*������ ���� n*n �迭 ������ ����غ���.

�Է��� 3�� ��� ������ ���� ����Ѵ�.
1 4 7
2 5 8
3 6 9

�Է��� 5�� ���� ������ ���� ����Ѵ�.
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25

��ó : https://by-man.tistory.com/362
*/


#include <stdio.h>

int main(void)
{
    int Arr[101][101] = {0};


    int num;
    scanf_s("%d", &num);
    int x = 1;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            Arr[j][i] = x;
            x++;
        }
    }


    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


