#include <stdio.h>
#include <time.h>

int main_condition(void) {
	
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
		}

	}*/


	//가위바위보
	/*srand(time(NULL));
	int i = rand() % 3;*/
	/*if (i == 0) {
		printf("가위\n");
	}

	else if (i == 1) {
		printf("바위\n");
	}

	else {
		printf("보\n");
	}*/

	//switch (i)
	//{
	//case 0: printf("가위\n"); break;
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요\n"); break;
	//	// break없으면 조건만족 case 이후로 모두 출력됨
	//}

	//int age = 15;
	//switch (age)
	//{
	//case 8:
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13: printf("초등학생입니다.\n"); break;
	//case 14:
	//case 15:
	//case 16: printf("중학생입니다.\n"); break;
	//case 17:
	//case 18:
	//case 19: printf("고등학생입니다.\n"); break;
	//default: printf("학생이 아닙니다.\n"); break;
	//}

	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0) {
		printf("남은 기회 %d번 \n", chance--);
		printf("숫자를 맞혀보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ↓\n\n");
		}
		else if (answer < num) {
			printf("UP ↑\n\n");
		}
		else if (answer == num) {
			printf("정답입니다!\n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했습니다.\n");
		}

	}
	return 0;
}