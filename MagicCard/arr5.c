/*�л� 5���� ������ �Է� ���� ��, ��������� �ְ� ������ ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.*/

#include <stdio.h>

int main() {
	int score[5];
	int i, max = 0, num, sum=0;

	printf("�л� 5���� ������ �Է��� �ּ��� : ");
	for (i = 0; i < sizeof(score) / sizeof(int); i++) {
		scanf_s("%d", &score[i]);
		sum += score[i];

		

		if (score[i] > max) {
			max = score[i];
		}
	}
	double avg = (double)sum /i;
	printf("�ְ��� : %d  , ������� : %f", max,avg);
}