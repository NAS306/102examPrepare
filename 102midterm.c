#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

#pragma warning(disable:4996)

// >> 결과화면 <<
// 학년 입력: 1
// 당신은 1학년 이군요.
void one() {
	int n;
	printf("학년 입력: ");
	scanf("%d", &n);
	printf("\n당신은 %d학년 이군요.\n", n);
	return;
}

// >> 결과화면 <<
// 키(cm) 입력: 165.123
// 몸무게(kg) 입력: 55.321
void two() {
	double cm, kg;
	printf("키(cm) 입력: "); scanf("%lf", &cm);
	printf("몸무게(kg) 입력: "); scanf("%lf", &kg);
	printf("당신의 키와 몸무게는 %.1lfcm, %.1lfkg입니다.",cm,kg);
	return;
}

// >> 결과화면 <<
// 나이 입력: -5
// 1 이상 입력 가능합니다.
//
// 나이 입력: 21
// 21세 입장료는 '3000원' 입니다.
void three() {
	int age;
	while (1) {
		printf("나이 입력: ");
		scanf("%d", &age);
		if (age > 0) {
			printf("\n%d세 입장료는 \'%d원\' 입니다.",age,age*100);
			break;
		}
		else {
			printf("\n\n");
			continue;
		}
	}
	return;
}

// >> 결과화면 <<
// 점수 입력: -1
// 0~100점 사이만 입력 가능합니다.
//
// 점수 입력: 85
// 85점은 'B등급'입니다.
void four() {
	int score;
	while (1) {
		printf("점수 입력: ");
		scanf("%d", &score);
		if (score >= 0 && score <= 100) {
			switch (score / 10) {
			case 10:
			case 9:
				printf("%d점은 \'A등급\'입니다.",score);
				break;
			case 8:
				printf("%d점은 \'B등급\'입니다.", score);
				break;
			case 7:
				printf("%d점은 \'C등급\'입니다.", score);
				break;
			case 6:
				printf("%d점은 \'D등급\'입니다.", score);
				break;
			default:
				printf("%d점은 \'F등급\'입니다.", score);
			}
			break;
		}
		else {
			continue;
		}
	}
	return;
}

// >> 결과화면 <<
// 돈 입력: 2340
//
// 500원: 4개
// 100원: 3개
// 50원: 0개
// 10원: 4개
void five() {
	int n;
	printf("돈 입력: ");
	scanf("%d",&n);
	printf("\n\n500원: %d개\n",n/500);
	printf("100원: %d개\n",n%500/100);
	printf("50원: %d개\n",n%100/50);
	printf("10원: %d개\n",n%50/10);
}

// >> 결과화면 <<
// 정수 3개 입력: 4 8 2
// 최댓값은 8이고, 최솟값은 2입니다.
void six() {
	int n1, n2, n3, max, min;
	printf("정수 3개 입력: ");
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
	
	printf("최댓값은 %d이고, 최솟값은 %d입니다.", max, min);
	return;
}

// >> 결과화면 <<
// 정수(100~999) 입력: 9
// 10~99 사이만 입력 가능합니다.
//
// 정수(100~999) 입력: 25
// 틀렸습니다.
// 정답은 xx입니다.
void seven() {
	int n, m;
	srand(time(NULL));
	while (1) {
		printf("정수(10 ~ 99)입력: ");
		scanf("%d", &n);
		if (n >= 10 && n <= 99) {
			m = rand() % 10 + 90;
			if (n == m) {
				printf("\n정답입니다.");
			}
			else {
				printf("\n틀렸습니다.\n정답은 %d입니다.", m);
			}
			break;
		}
		else {
			printf("\n10 ~ 99사이만 입력 가능합니다.\n");
			continue;
		}
	}
	return;
}

// >> 결과화면 <<
// 주사위 시작 눈의 수: 5
// 주사위 끝 눈의 수: 4
// 시작값이 끝값보다는 크거나 같을 수는 없습니다.
//
// 주사위 시작 눈의 수: 5
// 주사위 끝 눈의 수: 9
// 5(시작) + 9(끝) + 6(랜덤값) = 20
void eight() {
	int start, end, r;
	srand(time(NULL));
	while (1) {
		printf("주사위 시작 눈의 수: "); scanf("%d", &start);
		printf("주사위 끝 눈의 수: "); scanf("%d", &end);
		if (start < end) {
			r = rand() % 10 + 1;
			printf("%d(시작) + %d(끝) + %d(랜덤값) = %d",start, end, r ,start + end + r);
			break;
		}
		else {
			printf("시작값이 끝값보다는 크거나 같을 수는 없습니다.");
			continue;
		}
	}
	return;
}

// >> 결과화면 <<
// 1~10 사이의 누적합: 55
void nine() {
	int total = 0;
	for (int i = 1; i <= 10; i++) {
		total += i;
	}
	printf("1~10 사이의 누적합: %d", total);
}

// >> 결과화면 <<
// 단 입력: 2
// ==== 2단 ====
// 2 * 1 =   2
// 2 * 2 =   4
// ...
// 2 * 9 = 18
// ============
void ten() {
	int n;
	printf("단 입력: ");
	scanf("%d", &n);
	printf("\n==== %d단 ====\n", n);
	for (int i = 0; i <= 9; i++) {
		printf("%d * %d = %3d\n", n, i, n * i);
	}
	printf("============");
	return;
}

// >> 결과화면 <<
// ***** i = 1 일때
// **** i = 2 일때
// *** i = 3 일때
// ** i = 4 일때
// * i = 5 일때
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
			printf("* i = %d 일때\n",i);
		}
	}
	return;
}

// >> 결과화면 <<
// 반복 횟수 입력: 5
// 주사위 2개를 5회 던집니다.
// 
// 1회 (1, 5)
// 2회 (4, 6)
// 3회 (2, 1)
// 4회 (3, 2)
// 5회 (1, 4)
void twelve() {
	int n, n1, n2;
	srand(time(NULL));
	printf("반복 횟수 입력: ");
	scanf("%d", &n);
	printf("\n주사위 2개를 %d회 던집니다.\n", n);
	for (int i = 1; i <= n; i++) {
		n1 = rand() % 6 + 1;
		n2 = rand() % 6 + 1;
		printf("%d회 (%d, %d)\n", i, n1, n2);
	}
}

// >> 결과화면 <<
// 시작값 입력: 3
// 끝값 입력: 1
// 시작값은 끝값보다 작아야 합니다.
//
// 시작값 입력: 3
// 끝값 입력: 7
// 3 + 4 + 5 + 6 + 7 = 25
void thirteen() {
	int start, end, total = 0;
	while (1) {
		printf("시작값 입력: "); scanf("%d", &start);
		printf("끝값 입력: "); scanf("%d", &end);
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
			printf("시작값은 끝값보다 작아야 합니다.");
			continue;
		}
	}
	return;
}

// >> 결과화면 <<
// 너비(width) 입력: 12.34
// 높이(height) 입력: 5.12
// 
// 넓이(area) 함수 호출합니다.
// 너비: 12.3, 높이: 5.1
// 넓이는 xx.x 입니다.
void area(double w,double h) {
	printf("\n너비: %.1lf, 높이: %.1lf", w, h);
	printf("넓이는 %.1lf 입니다.", w * h);
	return;
}
void fourteen() {
	double w, h;
	printf("너비(width) 입력: "); scanf("%lf", &w);
	printf("높이(height) 입력: "); scanf("%lf", &h);

	area(w,h);
	return;
}

// >> 결과화면 <<
// p1(x, y) 입력: 12.34 3.153
// p2(x, y) 입력: -20.5 9.21
//
// p1(12.3, 3.2)와 p2(-21, 9) 사이의 거리는...
// xx.xx 입니다.
void fifteen() {
	double x1, x2, y1, y2;
	printf("p1(x, y) 입력: "); scanf("%lf %lf", &x1, &y1);
	printf("p2(x, y) 입력: "); scanf("%lf %lf", &x2, &y2);
	printf("\np1(%.1lf, %.1lf)와 p2(%.1lf, %.1lf) 사이의 거리는...\n", x1, y1, x2, y2);
	printf("%.2lf", sqrt(pow(x2 - x1, 2) + (pow(y2 - y1, 2))));
	return;
}

// >> 결과화면 <<
// ==== 메뉴 ====
// 1. 삼각형 넓이
// 2. 사각형 넓이
// 3. 원의 넓이
// 4. 종료
// ============
// 메뉴 입력: 5
// 1~4 사이만 입력 가능합니다.
//
// 메뉴 입력: 2
// 삼각형 넓이를 구합니다.
// 너비 입력: 25
// 높이 입력: 37
// 삼각형 넓이: xx.x
//
// 메뉴 입력: 3
// 원의 넓이를 구합니다.
// 반지름 입력: 23.54
// 원의 넓이: xx.x
//
// 메뉴 입력: 4
// 종료합니다.
void triangle(double h, double w) {
	printf("\n삼각형 넓이: %.1lf\n", h * w / 2);
}
void square(double h, double w) {
	printf("\n사각형 넓이: %.1lf\n", h * w);
}
void circle(r) {
	printf("\n원 넓이: %.1lf\n",3.14 * r * r);
}
void sixteen() {
	int n;
	double h, w, r;
	while (1) {
		printf("==== 메뉴 ====\n");
		printf("1. 삼각형 넓이\n");
		printf("2. 사각형 넓이\n");
		printf("3. 원 넓이\n");
		printf("4. 종료\n");
		printf("============\n");
		printf("메뉴 입력: "); scanf("%d", &n);
		if (n <= 4 && n >= 1) {
			if (n == 1) {
				printf("\n\n삼각형 넓이를 구합니다\n");
				printf("높이와 너비 입력: "); scanf("%lf %lf", &h, &w);
				triangle(h, w);
			}
			else if (n == 2) {
				printf("\n\n사각형 넓이를 구합니다\n");
				printf("높이와 너비 입력: "); scanf("%lf %lf", &h, &w);
				square(h, w);
			}
			else if (n == 3) {
				printf("\n\n원의 넓이를 구합니다\n");
				printf("반지름 입력: "); scanf("%lf", &r);
				circle();
			}
			else if (n == 3) {
				printf("\n\n종료합니다.");
				break;
			}
		}
		else {
			printf("1 ~ 4 사이만 입력 가능합니다.");
			continue;
		}
	}
	return;
}

// >> 결과화면 <<
// ====== 메뉴 ======
// 1. 오늘의 운세(별 출력)
// 2. 오늘의 운세(말 표현)
// 3. 종료
// ==================
// 메뉴 입력: 1
// 오늘의 운세(별 출력) 입니다.
// ★★★★★★★
// 
// 메뉴 입력: 2
// 오늘의 운세(말 표현) 입니다.
// "좋음" 입니다.
//
// 메뉴 입력: 3
// 종료 합니다.
void seventeen() {
	int n = 0,r;
	srand(time(NULL));
	printf("====== 메뉴 ======\n");
	printf("1. 오늘의 운세(별 출력)\n");
	printf("2. 오늘의 운세(말 표현)\n");
	printf("3. 종료\n");
	printf("==================\n");
	while (n != 3) {
		printf("\n메뉴 입력: "); scanf("%d", &n);
		r = rand() % 10 + 1;
		if (n == 1) {
			printf("오늘의 운세(별 출력) 입니다.\n");
			for (int i = 1; i <= r; i++) {
				printf("★");
			}
		}
		else if (n == 2) {
			printf("오늘의 운세(말 표현) 입니다.\n");
			if (r >= 8) {
				printf("\"매우좋음\"입니다.\n");
			}
			else if (r >= 6 && r < 8) {
				printf("\"좋음\"입니다.\n");
			}
			else if (r >= 3 && r < 6) {
				printf("\"보통\"입니다.\n");
			}
			else if (r >= 1 && r < 3) {
				printf("\"나쁨\"입니다.\n");
			}
			continue;
		}
	}
	printf("종료 합니다.");
	return;
}

int main(void) {
	int n;

	while (1) {
		Sleep(2000);
		system("cls");
		printf("보고싶은 프로그램에 해당하는 숫자를 입력하세요.\n");
		printf("1 = 학년\n");
		printf("2 = 키 몸무게\n");
		printf("3 = 입장료\n");
		printf("4 = 등급\n");
		printf("5 = 돈\n");
		printf("6 = 최대 최소\n");
		printf("7 = 숫자 맞추기\n");
		printf("8 = 주사위 1\n");
		printf("9 = 누적합 1\n");
		printf("10 = 구구단\n");
		printf("11 = 별\n");
		printf("12 = 주사위 2\n");
		printf("13 = 누적합 2\n");
		printf("14 = 넓이 1\n");
		printf("15 = 거리\n");
		printf("16 = 넓이 2\n");
		printf("17 = 운세\n");
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