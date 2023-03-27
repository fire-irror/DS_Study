#include<stdio.h>
void HanoiTower(int n, char a, char b, char c) {  //n 원판개수 a출발지 주소 c도착지
    if (n == 1) {
        printf("원판 : %d, %c->%c \n", n, a, c);   //n원판 번호
    }
    else {
        HanoiTower(n - 1, a, c, b);
        printf("원판 %d,%c->%c\n", n, a, c);
        HanoiTower(n - 1, b, a, c);
    }
}

int main() {
    int n = 4;
    HanoiTower(n, 'A', 'B', 'C');
    return 0;
}