#include <stdio.h>
#define SIZE 6

int cqueue[SIZE] = { 0, };
int rear = -1, front = 0;
int cnt = 0;

int add(int data) {
	if (cnt == SIZE) {
		printf("Circular Queue is full!\n");
		return -1;
	}
	cnt++;
	cqueue[++rear % SIZE] = data;

	return 0;
}

int delete() {
	if (cnt == 0) {
		printf("Circular Queue is full!\n");
		return -1;
	}
	cnt--;
	return cqueue[front++%SIZE];
}

int main(void) {
	add(10);
	add(20);
	printf(" % d\n", delete());
	printf(" % d\n", delete());
	printf(" % d\n", delete());
	add(30);
	add(40);
	add(50);
	add(60);
	add(70);
	printf(" % d\n", delete());
	printf(" % d\n", delete());
	add(80);
	add(90);
	add(100);

	return 0;
}