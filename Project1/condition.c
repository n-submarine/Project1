#include <stdio.h>
#include <time.h>

int main_condition(void) {
	
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
		}

	}*/


	//����������
	/*srand(time(NULL));
	int i = rand() % 3;*/
	/*if (i == 0) {
		printf("����\n");
	}

	else if (i == 1) {
		printf("����\n");
	}

	else {
		printf("��\n");
	}*/

	//switch (i)
	//{
	//case 0: printf("����\n"); break;
	//case 1: printf("����\n"); break;
	//case 2: printf("��\n"); break;
	//default: printf("�����\n"); break;
	//	// break������ ���Ǹ��� case ���ķ� ��� ��µ�
	//}

	//int age = 15;
	//switch (age)
	//{
	//case 8:
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13: printf("�ʵ��л��Դϴ�.\n"); break;
	//case 14:
	//case 15:
	//case 16: printf("���л��Դϴ�.\n"); break;
	//case 17:
	//case 18:
	//case 19: printf("����л��Դϴ�.\n"); break;
	//default: printf("�л��� �ƴմϴ�.\n"); break;
	//}

	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0) {
		printf("���� ��ȸ %d�� \n", chance--);
		printf("���ڸ� ���������� (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ��\n\n");
		}
		else if (answer < num) {
			printf("UP ��\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�!\n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�.\n");
		}

	}
	return 0;
}