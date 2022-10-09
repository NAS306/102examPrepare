#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

#pragma warning(disable:4996)

// >> ���ȭ�� <<
// �г� �Է�: 1
// ����� 1�г� �̱���.
void one() {
	int n;
	printf("�г� �Է�: ");
	scanf("%d", &n);
	printf("\n����� %d�г� �̱���.\n", n);
	return;
}

// >> ���ȭ�� <<
// Ű(cm) �Է�: 165.123
// ������(kg) �Է�: 55.321
void two() {
	double cm, kg;
	printf("Ű(cm) �Է�: "); scanf("%lf", &cm);
	printf("������(kg) �Է�: "); scanf("%lf", &kg);
	printf("����� Ű�� �����Դ� %.1lfcm, %.1lfkg�Դϴ�.",cm,kg);
	return;
}

// >> ���ȭ�� <<
// ���� �Է�: -5
// 1 �̻� �Է� �����մϴ�.
//
// ���� �Է�: 21
// 21�� ������ '3000��' �Դϴ�.
void three() {
	int age;
	while (1) {
		printf("���� �Է�: ");
		scanf("%d", &age);
		if (age > 0) {
			printf("\n%d�� ������ \'%d��\' �Դϴ�.",age,age*100);
			break;
		}
		else {
			printf("\n\n");
			continue;
		}
	}
	return;
}

// >> ���ȭ�� <<
// ���� �Է�: -1
// 0~100�� ���̸� �Է� �����մϴ�.
//
// ���� �Է�: 85
// 85���� 'B���'�Դϴ�.
void four() {
	int score;
	while (1) {
		printf("���� �Է�: ");
		scanf("%d", &score);
		if (score >= 0 && score <= 100) {
			switch (score / 10) {
			case 10:
			case 9:
				printf("%d���� \'A���\'�Դϴ�.",score);
				break;
			case 8:
				printf("%d���� \'B���\'�Դϴ�.", score);
				break;
			case 7:
				printf("%d���� \'C���\'�Դϴ�.", score);
				break;
			case 6:
				printf("%d���� \'D���\'�Դϴ�.", score);
				break;
			default:
				printf("%d���� \'F���\'�Դϴ�.", score);
			}
			break;
		}
		else {
			continue;
		}
	}
	return;
}

// >> ���ȭ�� <<
// �� �Է�: 2340
//
// 500��: 4��
// 100��: 3��
// 50��: 0��
// 10��: 4��
void five() {
	int n;
	printf("�� �Է�: ");
	scanf("%d",&n);
	printf("\n\n500��: %d��\n",n/500);
	printf("100��: %d��\n",n%500/100);
	printf("50��: %d��\n",n%100/50);
	printf("10��: %d��\n",n%50/10);
}

// >> ���ȭ�� <<
// ���� 3�� �Է�: 4 8 2
// �ִ��� 8�̰�, �ּڰ��� 2�Դϴ�.
void six() {
	int n1, n2, n3, max, min;
	printf("���� 3�� �Է�: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2 && n1 > n3) {
		max = n1;
	}
	else if (n2 > n1 && n2 > n3) {
		max = n2;
	}
	else {
		max = n3;
	}
	if (n1 < n2 && n1 < n3) {
		min = n1;
	}
	else if (n2 < n1 && n2 < n3) {
		min = n2;
	}
	else {
		min = n3;
	}
	
	printf("�ִ��� %d�̰�, �ּڰ��� %d�Դϴ�.", max, min);
	return;
}

// >> ���ȭ�� <<
// ����(100~999) �Է�: 9
// 10~99 ���̸� �Է� �����մϴ�.
//
// ����(100~999) �Է�: 25
// Ʋ�Ƚ��ϴ�.
// ������ xx�Դϴ�.
void seven() {
	int n, m;
	srand(time(NULL));
	while (1) {
		printf("����(10 ~ 99)�Է�: ");
		scanf("%d", &n);
		if (n >= 10 && n <= 99) {
			m = rand() % 10 + 90;
			if (n == m) {
				printf("\n�����Դϴ�.");
			}
			else {
				printf("\nƲ�Ƚ��ϴ�.\n������ %d�Դϴ�.", m);
			}
			break;
		}
		else {
			printf("\n10 ~ 99���̸� �Է� �����մϴ�.\n");
			continue;
		}
	}
	return;
}

// >> ���ȭ�� <<
// �ֻ��� ���� ���� ��: 5
// �ֻ��� �� ���� ��: 4
// ���۰��� �������ٴ� ũ�ų� ���� ���� �����ϴ�.
//
// �ֻ��� ���� ���� ��: 5
// �ֻ��� �� ���� ��: 9
// 5(����) + 9(��) + 6(������) = 20
void eight() {
	int start, end, r;
	srand(time(NULL));
	while (1) {
		printf("�ֻ��� ���� ���� ��: "); scanf("%d", &start);
		printf("�ֻ��� �� ���� ��: "); scanf("%d", &end);
		if (start < end) {
			r = rand() % 10 + 1;
			printf("%d(����) + %d(��) + %d(������) = %d",start, end, r ,start + end + r);
			break;
		}
		else {
			printf("���۰��� �������ٴ� ũ�ų� ���� ���� �����ϴ�.");
			continue;
		}
	}
	return;
}

// >> ���ȭ�� <<
// 1~10 ������ ������: 55
void nine() {
	int total = 0;
	for (int i = 1; i <= 10; i++) {
		total += i;
	}
	printf("1~10 ������ ������: %d", total);
}

// >> ���ȭ�� <<
// �� �Է�: 2
// ==== 2�� ====
// 2 * 1 =   2
// 2 * 2 =   4
// ...
// 2 * 9 = 18
// ============
void ten() {
	int n;
	printf("�� �Է�: ");
	scanf("%d", &n);
	printf("\n==== %d�� ====\n", n);
	for (int i = 0; i <= 9; i++) {
		printf("%d * %d = %3d\n", n, i, n * i);
	}
	printf("============");
	return;
}

// >> ���ȭ�� <<
// ***** i = 1 �϶�
// **** i = 2 �϶�
// *** i = 3 �϶�
// ** i = 4 �϶�
// * i = 5 �϶�
void eleven() {
	for (int i = 1; i <= 5; i++) {
		switch (i) {
		case 1:
			printf("*");
		case 2:
			printf("*");
		case 3:
			printf("*");
		case 4:
			printf("*");
		case 5:
			printf("* i = %d �϶�\n",i);
		}
	}
	return;
}

// >> ���ȭ�� <<
// �ݺ� Ƚ�� �Է�: 5
// �ֻ��� 2���� 5ȸ �����ϴ�.
// 
// 1ȸ (1, 5)
// 2ȸ (4, 6)
// 3ȸ (2, 1)
// 4ȸ (3, 2)
// 5ȸ (1, 4)
void twelve() {
	int n, n1, n2;
	srand(time(NULL));
	printf("�ݺ� Ƚ�� �Է�: ");
	scanf("%d", &n);
	printf("\n�ֻ��� 2���� %dȸ �����ϴ�.\n", n);
	for (int i = 1; i <= n; i++) {
		n1 = rand() % 6 + 1;
		n2 = rand() % 6 + 1;
		printf("%dȸ (%d, %d)\n", i, n1, n2);
	}
}

// >> ���ȭ�� <<
// ���۰� �Է�: 3
// ���� �Է�: 1
// ���۰��� �������� �۾ƾ� �մϴ�.
//
// ���۰� �Է�: 3
// ���� �Է�: 7
// 3 + 4 + 5 + 6 + 7 = 25
void thirteen() {
	int start, end, total = 0;
	while (1) {
		printf("���۰� �Է�: "); scanf("%d", &start);
		printf("���� �Է�: "); scanf("%d", &end);
		if (start <= end) {
			for (int i = start; i <= end; i++) {
				total += i;
				if (i == end) {
					printf("%d = %d",i, total);
				}
				else {
					printf("%d + ", i);
				}
			}
			break;
		}
		else {
			printf("���۰��� �������� �۾ƾ� �մϴ�.");
			continue;
		}
	}
	return;
}

// >> ���ȭ�� <<
// �ʺ�(width) �Է�: 12.34
// ����(height) �Է�: 5.12
// 
// ����(area) �Լ� ȣ���մϴ�.
// �ʺ�: 12.3, ����: 5.1
// ���̴� xx.x �Դϴ�.
void area(double w,double h) {
	printf("\n�ʺ�: %.1lf, ����: %.1lf", w, h);
	printf("���̴� %.1lf �Դϴ�.", w * h);
	return;
}
void fourteen() {
	double w, h;
	printf("�ʺ�(width) �Է�: "); scanf("%lf", &w);
	printf("����(height) �Է�: "); scanf("%lf", &h);

	area(w,h);
	return;
}

// >> ���ȭ�� <<
// p1(x, y) �Է�: 12.34 3.153
// p2(x, y) �Է�: -20.5 9.21
//
// p1(12.3, 3.2)�� p2(-21, 9) ������ �Ÿ���...
// xx.xx �Դϴ�.
void fifteen() {
	double x1, x2, y1, y2;
	printf("p1(x, y) �Է�: "); scanf("%lf %lf", &x1, &y1);
	printf("p2(x, y) �Է�: "); scanf("%lf %lf", &x2, &y2);
	printf("\np1(%.1lf, %.1lf)�� p2(%.1lf, %.1lf) ������ �Ÿ���...\n", x1, y1, x2, y2);
	printf("%.2lf", sqrt(pow(x2 - x1, 2) + (pow(y2 - y1, 2))));
	return;
}

// >> ���ȭ�� <<
// ==== �޴� ====
// 1. �ﰢ�� ����
// 2. �簢�� ����
// 3. ���� ����
// 4. ����
// ============
// �޴� �Է�: 5
// 1~4 ���̸� �Է� �����մϴ�.
//
// �޴� �Է�: 2
// �ﰢ�� ���̸� ���մϴ�.
// �ʺ� �Է�: 25
// ���� �Է�: 37
// �ﰢ�� ����: xx.x
//
// �޴� �Է�: 3
// ���� ���̸� ���մϴ�.
// ������ �Է�: 23.54
// ���� ����: xx.x
//
// �޴� �Է�: 4
// �����մϴ�.
void triangle(double h, double w) {
	printf("\n�ﰢ�� ����: %.1lf\n", h * w / 2);
}
void square(double h, double w) {
	printf("\n�簢�� ����: %.1lf\n", h * w);
}
void circle(r) {
	printf("\n�� ����: %.1lf\n",3.14 * r * r);
}
void sixteen() {
	int n;
	double h, w, r;
	while (1) {
		printf("==== �޴� ====\n");
		printf("1. �ﰢ�� ����\n");
		printf("2. �簢�� ����\n");
		printf("3. �� ����\n");
		printf("4. ����\n");
		printf("============\n");
		printf("�޴� �Է�: "); scanf("%d", &n);
		if (n <= 4 && n >= 1) {
			if (n == 1) {
				printf("\n\n�ﰢ�� ���̸� ���մϴ�\n");
				printf("���̿� �ʺ� �Է�: "); scanf("%lf %lf", &h, &w);
				triangle(h, w);
			}
			else if (n == 2) {
				printf("\n\n�簢�� ���̸� ���մϴ�\n");
				printf("���̿� �ʺ� �Է�: "); scanf("%lf %lf", &h, &w);
				square(h, w);
			}
			else if (n == 3) {
				printf("\n\n���� ���̸� ���մϴ�\n");
				printf("������ �Է�: "); scanf("%lf", &r);
				circle();
			}
			else if (n == 3) {
				printf("\n\n�����մϴ�.");
				break;
			}
		}
		else {
			printf("1 ~ 4 ���̸� �Է� �����մϴ�.");
			continue;
		}
	}
	return;
}

// >> ���ȭ�� <<
// ====== �޴� ======
// 1. ������ �(�� ���)
// 2. ������ �(�� ǥ��)
// 3. ����
// ==================
// �޴� �Է�: 1
// ������ �(�� ���) �Դϴ�.
// �ڡڡڡڡڡڡ�
// 
// �޴� �Է�: 2
// ������ �(�� ǥ��) �Դϴ�.
// "����" �Դϴ�.
//
// �޴� �Է�: 3
// ���� �մϴ�.
void seventeen() {
	int n = 0,r;
	srand(time(NULL));
	printf("====== �޴� ======\n");
	printf("1. ������ �(�� ���)\n");
	printf("2. ������ �(�� ǥ��)\n");
	printf("3. ����\n");
	printf("==================\n");
	while (n != 3) {
		printf("\n�޴� �Է�: "); scanf("%d", &n);
		r = rand() % 10 + 1;
		if (n == 1) {
			printf("������ �(�� ���) �Դϴ�.\n");
			for (int i = 1; i <= r; i++) {
				printf("��");
			}
		}
		else if (n == 2) {
			printf("������ �(�� ǥ��) �Դϴ�.\n");
			if (r >= 8) {
				printf("\"�ſ�����\"�Դϴ�.\n");
			}
			else if (r >= 6 && r < 8) {
				printf("\"����\"�Դϴ�.\n");
			}
			else if (r >= 3 && r < 6) {
				printf("\"����\"�Դϴ�.\n");
			}
			else if (r >= 1 && r < 3) {
				printf("\"����\"�Դϴ�.\n");
			}
			continue;
		}
	}
	printf("���� �մϴ�.");
	return;
}

int main(void) {
	int n;

	while (1) {
		Sleep(2000);
		system("cls");
		printf("������� ���α׷��� �ش��ϴ� ���ڸ� �Է��ϼ���.\n");
		printf("1 = �г�\n");
		printf("2 = Ű ������\n");
		printf("3 = �����\n");
		printf("4 = ���\n");
		printf("5 = ��\n");
		printf("6 = �ִ� �ּ�\n");
		printf("7 = ���� ���߱�\n");
		printf("8 = �ֻ��� 1\n");
		printf("9 = ������ 1\n");
		printf("10 = ������\n");
		printf("11 = ��\n");
		printf("12 = �ֻ��� 2\n");
		printf("13 = ������ 2\n");
		printf("14 = ���� 1\n");
		printf("15 = �Ÿ�\n");
		printf("16 = ���� 2\n");
		printf("17 = �\n");
		scanf("%d", &n);

		switch (n) {
		case 1:
			one();
			break;
		case 2:
			two();
			break;
		case 3:
			three();
			break;
		case 4:
			four();
			break;
		case 5:
			five();
			break;
		case 6:
			six();
			break;
		case 7:
			seven();
			break;
		case 8:
			eight();
			break;
		case 9:
			nine();
			break;
		case 10:
			ten();
			break;
		case 11:
			eleven();
			break;
		case 12:
			twelve();
			break;
		case 13:
			thirteen();
			break;
		case 14:
			fourteen();
			break;
		case 15:
			fifteen();
			break;
		case 16:
			sixteen();
			break;
		case 17:
			seventeen();
			break;
		}
	}
	return 0;
}