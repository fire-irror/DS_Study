/*학생 5명의 성적을 입력 받은 후, 평균점수와 최고 점수를 출력하는 프로그램을 작성 하시오.*/

#include <stdio.h>

int main() {
	int score[5];
	int i, max = 0, num, sum=0;

	printf("학생 5명의 성적을 입력해 주세요 : ");
	for (i = 0; i < sizeof(score) / sizeof(int); i++) {
		scanf_s("%d", &score[i]);
		sum += score[i];

		

		if (score[i] > max) {
			max = score[i];
		}
	}
	double avg = (double)sum /i;
	printf("최고점 : %d  , 평균점수 : %f", max,avg);
}