// 함수2 문제1
//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//
//int main()
//{
//	printf("사과를 영어로?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//
//	return 0;
//}

// 함수2 문제2
//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//char getT() { return 'T'; }
//
//int main()
//{	
//	printf("왼쪽을 영어로?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//
//	return 0;
//}

// 함수3
//#include <stdio.h>
//
//void makeHamburg(int count)
//{
//	printf("햄버거 %d개 나왔습니다.\n", count);
//}
//
//int main()
//{
//	int ham_count;
//	printf("햄버거 몇 개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburg(ham_count);
//
//	return 0;
//}

//#include <stdio.h>
//
//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_characterX(char x);
//
//int main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_characterX('x');
//
//	return 0;
//}
//
//void print_Number()
//{
//	printf("Number\n");
//}
//
//void print_Number2(int num)
//{
//	printf("Number : %d\n", num);
//}
//
//void print_Number4_charB(int num, char b)
//{
//	printf("Number : %d, character : %c\n", num, b);
//}
//
//void print_characterX(char x)
//{
//	printf("character : %c\n", x);
//}

//#include <stdio.h>
//
//char rightType(char type)
//{
//	if (type != 'A' && type != 'B') {
//		printf("주문할 수 없는 햄버거입니다.\n");
//		return 'C';
//	}
//	return type;
//}
//
//void makeHamburg(char type, int count)
//{
//	if (type == 'A') {
//		printf("A타입 햄버거 ");
//	}
//	else {
//		printf("B타입 햄버거 ");
//	}
//	printf("%d개 나왔습니다.\n", count);
//}
//
//int main()
//{
//	char ham_type;
//	int ham_count;
//
//	printf("어느타입 햄버거를 ");
//	printf("주문하시겠습니까?(AorB)\n");
//	scanf("%c", &ham_type);
//
//	if (rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("햄버거 몇 개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburg(ham_type, ham_count);
//
//	return 0;
//}

//#include <stdio.h>
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("결과 : %d\n", data1);
//	
//	return 0;
//}

// 함수3 문제1
//#include <stdio.h>
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int sub_number(int num1, int num2)
//{
//	int retVal = num1 - num2;
//	return retVal;
//}
//
//int mul_number(int num1, int num2)
//{
//	int retVal = num1 * num2;
//	return retVal;
//}
//
//int divi_number(int num1, int num2)
//{
//	int retVal = num1 / num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = sub_number(a, b);
//	int data3 = mul_number(a, b);
//	int data4 = divi_number(a, b);
//
//	printf("덧셈 결과 : %d\n", data1);
//	printf("뺄셈 결과 : %d\n", data2);
//	printf("곱셈 결과 : %d\n", data3);
//	printf("나눗셈 결과 : %d\n", data4);
//
//	return 0;
//}

//#include <stdio.h>
//
//int minus(int n)
//{
//	if (n <= 1) return -1;
//	return minus(n - 1) - 1;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", minus(n));
//
//	return 0;
//}

//#include <stdio.h>
//
//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printf("%d ", n);
//	printNumber(n - 1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//
//	return 0;
//}

// 재귀호출
//#include <stdio.h>
//
//int fibonacci(int n)
//{
//	printf("%d ", n);
//	if (n <= 2) return 1;
//	printf("(%d)\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//
//	return 0;
//}

// 재귀호출 문제1
//#include <stdio.h>
//
//int add_function(int n)
//{
//	if (n <= 1) return 1;
//	return add_function(n - 1) + n;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("1 ~ %d까지의 합은 %d입니다.", n, add_function(n));
//
//	return 0;
//}

// 구조체
//#include <stdio.h>
//
//struct BYTE {
//	char a;
//	char b;
//};
//
//int main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct student {
//	int id;
//	char* name;
//	float aver;
//};
//
//int main()
//{
//	struct student s = { 1, (char*)"이샘", 90.5 };
//
//	printf("아이디 : %d\n", s.id);
//	printf("이름 : %s\n", s.name);
//	printf("백분율 : %.1f\n", s.aver);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct GUN {
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//
//int main()
//{
//	struct GUN M416 = { "M416", 5.56, true, true, true, true, true, 30 };
//
//	printf("화기명 : %s\n", M416.name);
//	printf("탄 종류 : %.2lf\n", M416.bullet_type);
//	printf("스코프유무 : %s", M416.scope ? "true" : "false");
//
//	return 0;
//}

//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//struct VIP_PERSON {
//	char grade;			// 고객등급 S A B C D
//	char personCode;	// 고객코드
//	char mileage;		// 마일리지
//};
//
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("더미 크기 : %d\n", sizedummy);
//	printf("VIP정보 크기 : %d\n", sizevip);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//struct VIP_PERSON {
//	char grade;			// 고객등급 S A B C D
//	char personCode;	// 고객코드
//	char mileage;		// 마일리지
//};
//
//int main()
//{
//	VIP_PERSON lee_sam;
//	printf("고객 등급을 입력하세요\n");
//	while (true) {
//		scanf("  %c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("고객 코드를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("마일리지를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//
//	return 0;
//}

// 구조체 문제1
//#include <stdio.h>
//
//struct __dummy1__ {
//	float data_0;
//	char data_1;
//};
//
//struct __dummy2__ {
//	char data_0;
//	char data_1;
//	char data_2;
//	char data_3;
//	char data_4;
//	char data_5;
//	char data_6;
//	char data_7;
//};
//
//int main()
//{
//	int sizedummy1 = sizeof(__dummy1__);
//	int sizedummy2 = sizeof(__dummy2__);
//	printf("더미 크기 : dummy1 = %d, dummy2 = %d\n", sizedummy1, sizedummy2);
//
//	return 0;
//}

// 구조체 문제2
//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main()
//{
//	struct __dummy__ dummy;
//
//	printf("정수 문자 실수 순서대로 값을 입력하세요.>> ");
//	scanf("%d %c %f", &dummy.data_0, &dummy.data_1, &dummy.data_2);
//
//	printf("%d %c %f", dummy.data_0, dummy.data_1, dummy.data_2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	short pt;
//	scanf("%hd", &pt);
//	printf("값 : %hd\n", pt);
//
//	return 0;
//}

//#include <stdio.h>
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("값 : %hd\n", pt);
//
//	return 0;
//}

//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}

// 문제 2-1
//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = pt + 5;
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}

// 문제 2-2
//#include <stdio.h>
//
//short getDefaultData();
//short add_5(short pt);
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add_5(pt);
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//short add_5(short pt)
//{
//	pt = pt + 5;
//
//	return pt;
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}

// 문제 2-3 **중요**
//#include <stdio.h>
//
//struct POINT {
//	short x, y;
//};
//
//POINT getDefaultData();
//POINT add_5(POINT pt);
//void printData(POINT pt2);
//
//int main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add_5(pt);
//	printData(pt);
//
//	return 0;
//}
//
//POINT getDefaultData()
//{
//	POINT pt1;
//	scanf("%hd %hd", &pt1.x, &pt1.y);
//
//	return pt1;
//}
//
//POINT add_5(POINT pt2)
//{
//	pt2.x += 5;
//	pt2.y += 5;
//
//	return pt2;
//}
//
//void printData(POINT pt3)
//{
//	printf("x 값 : %hd / y 값 : %hd\n", pt3.x, pt3.y);
//}

// 배열
//#include <stdio.h>
//
//int main()
//{
//	char arr[3];
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char alpah[4] = { 'a', 'b', 'c', 'd' };
//	printf("%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	printf("num의 안에 들어있는 ");
//	printf("1번째 숫자는? %d\n", num[1]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	int k = 0;
//
//	printf("%d번째에 %d 저장\n", k, num[k]);	k++;
//	printf("%d번째에 %d 저장\n", k, num[k]);	k++;
//	printf("%d번째에 %d 저장\n", k, num[k]);	k++;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

// 배열 문제1
//#include <stdio.h>
//
//int main()
//{
//	int num[5];
//
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &num[i]);
//	}
//	printf("\n\n");
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}

// 배열 문제2
//#include <stdio.h>
//
//int main()
//{
//	int num[10];
//	int input;
//
//	printf("숫자 10개를 입력해주세요.\n");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	int flag = 1;
//	while (flag) {
//		printf("숫자 하나를 입력해주세요. 만약 입력한 10개의 숫자 중 하나면 종료합니다.\n");
//		scanf("%d", &input);
//
//		for (int i = 0; i < 10; i++) {
//			if (input == num[i]) {
//				printf("exist\n");
//				flag = 0;
//			}
//		}
//	}
//
//	return 0;
//}

// swap의 잘못된 예시
//#include <stdio.h>
//
//int main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d\n", right);
//
//	return 0;
//}

// swap의 올바른 예시1
//#include <stdio.h>
//
//int main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d, ", left);
//	printf("right = %d\n", right);
//
//	return 0;
//}

// swap의 올바른 예시2
//#include <stdio.h>
//
//int main()
//{
//	int num[2] = { 10, 3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d, ", num[0]);
//	printf("num[1] = %d\n", num[1]);
//
//	return 0;
//}

// 정렬 문제1
//#include <stdio.h>
//
//void swap(int &x, int &y);
//
//int main()
//{
//	int num[4] = { 4, 3, 1, 2 };
//
//	swap(num[0], num[2]);
//	swap(num[1], num[3]);
//	swap(num[2], num[3]);
//
//	printf("오름차순으로 정렬한 결과 : ");
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}
//
//void swap(int &x, int &y)
//{
//	int temp;
//
//	temp = x;
//	x = y;
//	y = temp;
//}

// 정렬 문제2
//#include <stdio.h>
//
//int main()
//{
//	int num[4];
//	int temp;
//
//	printf("임의의 수 네 개를 입력하세요.\n");
//	for (int i = 0; i < 4; i++) {
//		scanf("%d", &num[i]);
//	}
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3 - i; j++) {
//			if (num[j] > num[j + 1]) {
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("오름차순으로 정렬한 결과 : ");
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}

// 1차원 배열, if문
//#include <stdio.h>
// 두 변수 중에 가장 큰 수
//int main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else
//		max = two;
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
// 세 변수 중에 가장 큰 수
//int main()
//{	// 값 바꿔서 실행해보기
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) {
//		if (one > three)
//			max = one;
//		else
//			max = three;
//	}
//	else {
//		if (two > three)
//			max = two;
//		else
//			max = three;
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
//// N개 변수 중에 가장 큰 수
//int main()
//{	// array(=배열)의 약자로 arr이나 a를 사용
//	int arr[3] = { 1, 3, 2 };
//	int max = arr[0];
//
//	for (int i = 1; i < 3; i++) {
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

// 1차원 배열, if문 문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1, 3, 6, 4, 2 };
//	int max = arr[0];
//	int min = arr[0];
//	int sum = arr[0];
//	double avg = 0;
//
//	for (int i = 1; i < 5; i++) {
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//
//		sum += arr[i];
//	}
//
//	avg = (double)sum / 5;
//
//	printf("최대값 : %d\n", max);
//	printf("최소값 : %d\n", min);
//	printf("총합 : %d\n", sum);
//	printf("평균 : %.2lf\n", avg);
//
//	return 0;
//}

// 1차원 배열 문제2
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
//	int num[7] = {};	// 0번째 인덱스는 쓰지 않고, 1-6번째 인덱스만 씀
//
//	// * num의 인덱스를 arr[i]로 함으로써, 주사위 눈이 나온 횟수를 증가시킴 (if문을 쓸 필요 X)
//	for (int i = 0; i < 10; i++) {
//		num[arr[i]] += 1;
//	}
//
//	printf("각 주사위 눈이 나온 횟수\n");
//	for (int i = 1; i <= 6; i++) {
//		printf("%d : %d번\n", i, num[i]);
//	}
//
//	return 0;
//}

// 2차원 배열
//#include <stdio.h>
//
//int main()
//{
//	char arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr2d[5][4] = {
//	   // [0] [1] [2] [3]
//		{ 662, 7, 4, 74 },		// arr2d[0]
//		{ 8, 396, 299, 95 },	// arr2d[1]
//		{ 66, 73, 86, 0 },		// arr2d[2]
//		{ 116, 26, 586, 42 },	// arr2d[3]
//		{ 84, 7, 41, 11 }		// arr2d[4]
//	};
//
//	// 2차원 배열의 요소를 하나씩 출력
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2차원 배열 문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][3] = {
//		{ 2, 4, 6 },
//		{ 8, 10, 12 },
//		{ 14, 16, 18 }
//	};
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%3d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = i + j;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2차원 배열 문제2
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	int num = 1;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2차원 배열 문제3
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	int num = 1;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = m - 1; i >= 0; i--) {
//		for (int j = n - 1; j >= 0; j--) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2차원 배열 문제4
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	long data2[m * n];
//	int num = 1;
//	int str = 0;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data2[str] = data[i][j];
//			str++;
//		}
//	}
//
//	for (int i = 0; i < m * n; i++) {
//		printf("%3d ", data2[i]);
//	}
//
//	return 0;
//}

// 2차원 배열 문제5
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int arr[10] = {};
//	char arr2[10][10] = {};
//
//	printf("10 미만의 숫자 n을 입력하고 n개만큼의 숫자를 입력하세요.>> ");
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < arr[i]; j++) {
//			arr2[j][i] = '*';
//		}
//	}
//
//	// *** 5-4 중요 ***
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (arr2[i][j] == 0)
//				printf(" ");
//			else
//				printf("%c", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 2차원 배열 문제6
// ** 처음부터 다 구현하려하지 말고, 하나씩 차근차근 하면서 출력이 맞은 후엔, 줄일 수 있는 부분 줄이면서 구현하는 것이 중요 **
//#include <stdio.h>
//
//int main()
//{
//	const int n = 5;		// 이제 n을 바꿔도 5x5뿐 아니라 nxn을 출력할 수 있음
//	long arr[n][n] = {};
//	int num = 1;
//	int x = -1, y = 0;
//	int count = n;
//	int index = 1;
//
//	while (true) {
//		// 반복문 변수, 2차원 배열의 인덱스를 서로 다른 변수로 선언하는 것이 중요
//		for (int i = 0; i < count; i++) {
//			x += index;
//			arr[y][x] = num;
//			num++;
//		}
//		if (--count == 0)
//			break;
//
//		for (int i = 0; i < count; i++) {
//			y += index;
//			arr[y][x] = num;
//			num++;
//		}
//		// ** 중요 **
//		index = -index;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 포인터
//#include <stdio.h>
//
//int main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %x\n", pB);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d 입니다.\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//
//	return 0;
//}

// 포인터 문제
//#include <stdio.h>
//
//int main()
//{
//	int* numPtr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numPtr = &num1;
//	printf("%d\n", *numPtr);
//
//	numPtr = &num2;
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number[2] = { 1, 2 };
//	void* p = number;
//
//	// ** void 포인터로 선언하였으면 (int*)으로 캐스팅해줘야함.
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int fibonacci[5] = { 3, 5, 8, 13, 21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	// 4번지에서 1번지를 뺀다는 의미 4 - 1 = 3
//	printf(" >> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d ", ptrFibo[1]);
//	printf("%d ", ptrFibo1[0]);
//	printf("%d ", ptrFibo4[-1]);
//
//	return 0;
//}

// 포인터 문제
//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numPtrA;
//	void* ptr;
//
//	numPtrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numPtrA - 1));		// 1. numPtrA 사용하여 22출력
//	printf("%d\n", *((int*)ptr + 4));	// 2. ptr 사용하여 55출력
//
//	return 0;
//}

// 포인터 문제1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = {};
//	int* ptr;
//
//	printf("임의의 수 5개를 입력하세요.\n");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	ptr = arr;
//
//	ptr = ptr + 2;
//
//	printf("%d\n", *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2, 4, 6, 8, 10 };
//	int* p = &arr[0];
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1, 2, 3, 4 };
//	int* pt = num;					// 포인터 pt는 배열의 1번째 요소를 가리킴 = 1
//	pt++;							// 포인터 pt는 배열의 2번째 요소를 가리킴 = 2
//	*pt++ = 5;						// 포인터 pt는 배열의 2번째 요소를 5로 바꾸고 3번째 요소를 가리킴
//	*pt++ = 10;						// 포인터 pt는 배열의 3번째 요소를 10으로 바꾸고 4번째 요소를 가리킴
//	pt--;							// 포인터 pt는 배열의 4번째 요소에서 3번째 요소를 가리킴
//	*pt++ += 20;					// 포인터 pt는 배열의 3번째 요소에 20을 더한 후, 4번째 요소를 가리킴
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	// 출력 값은 최종적으로 1 5 30 4가 출력됨.
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	// 한글은 기본적으로 2바이트씩인데, 포인터 ptr이 7번째 요소 이후로 출력해야함.
	// 기울어진 이후로 출력을 해야하나, 스페이스바(공백)를 ?로 출력하고 그 이후로는 모든 문자가 출력됨.
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';				// 운동장 다음의 공백이 15번째 요소. 공백을 'a'로 바꿈.
//	str[23] = 'b';				// '한' 이라는 문자가 23, 24번째 요소를 잡아먹는데, 23번째 요소를 b로 바꿈.
//	str[25] = 'c';				// '한' 이라는 문자에서 24번째 요소가 남는데, 25번째 요소(공백)를 c로 바꾸고,
//	printf("%s\n\n", ptr);		// 남은 24번째 요소와 합쳐져서 c가 출력되지 않고 ?가 출력됨.
//
//	return 0;
//}

// 포인터를 이용한 배열 문제1
//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//	int arr[100] = {};
//
//	for (int i = 0; i < 100; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[99];
//
//	for (int i = 99; i >= 0; i--) {
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//
//	return 0;
//}

// 포인터를 이용한 배열 문제2
//#include <stdio.h>
//
//int main()
//{
//	const int index = 100;
//	int num = 1;
//	int arr[index] = {};
//
//	for (int i = 0; i < index; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[index / 2];
//
//	// 이 이후로는 arr 배열 쓰지 말것.
//	// ** 중요 **
//	for ( ; *ptr != index / 2; ptr++) {
//		printf("%3d ", *ptr);
//		if (*ptr == index) {
//			ptr -= index;
//		}
//	}
//
//	return 0;
//}

// string 함수
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	// 'v' 위치부터 11바이트 만큼인 'very useful'을 'u' 위치부터 11바이트 만큼 복사한다.
//	// 결과 : memmove can be very useful.
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct mydata
//{
//	int a;
//	char b[25];
//};
//
//int main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	// 0x00 = NULL
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* ptr1 = (char*)"coding";
//	char* ptr2 = (char*)"coding";
//	char* ptr3 = (char*)"coding.ne.kr";
//	char* ptr4 = (char*)"ne.kr";
//	char* ptr5 = (char*)"abcd";
//
//	// 각각의 strlen만큼 비교해감.
//	printf("%s with %s = %d\n", ptr1, ptr2, memcmp(ptr1, ptr2, strlen(ptr1)));
//
//	printf("%s with %s (ptr1 size) = %d\n", ptr1, ptr3, memcmp(ptr1, ptr3, strlen(ptr1)));
//
//	printf("%s with %s (ptr3 size) = %d\n", ptr1, ptr3, memcmp(ptr1, ptr3, strlen(ptr3)));
//
//	printf("%s with %s = %d\n", ptr1, ptr4, memcmp(ptr1, ptr4, strlen(ptr1)));
//
//	printf("%s with %s (ptr1 size) = %d\n", ptr1, ptr5, memcmp(ptr1, ptr5, strlen(ptr1)));
//
//	printf("%s with %s (ptr5 size) = %d\n", ptr1, ptr5, memcmp(ptr1, ptr5, strlen(ptr5)));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int src_data[10] = { 0, 1, 2, 3, 4, 5 };
//	int dst_data[10] = { 10, 20, 30, 40, 50 };
//	// src_data의 숫자 4개(32바이트)를 dst_data 숫자 4개에 복사한다.
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//
//	// 결과 : 0 1 2 3 50
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[20] = "coding";
//
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[10];
//
//	scanf("%s", str);
//
//	printf("입력한 문자열 : %s\n", str);
//	printf("문자열의 길이 : %d\n", strlen(str));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \"%s\"...\n", str);
//
//	pch = strchr(str, 's');
//
//	// 4, 7, 11, 18바이트 자리에 s가 있음.
//	// pch는 처음에 &str[3] 상태, str은 &str[0] 상태임.
//	// pch - str + 1을 하게 되면 4가 나옴.
//	// 그러고 난 후, pch를 pch + 1, 즉 &str[4] 위치부터 시작해서 's'를 찾음.
//	// 이 작업을 pch가 NULL일 때까지 반복.
//	// 그렇게 되면 각 's'의 위치를 출력하고 pch가 NULL이면 반복문을 빠져나오며 종료.
//	while (pch != NULL) {
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	// pch는 &str[10] 상태
//	pch = strstr(str, "simple");
//	// 'sample'을 pch 위치부터 6바이트만큼 복사.
//	// 'simple' -> 'sample'
//	strncpy(pch, "sample", 6);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	// str1의 첫 번째 문자 'L'이 str2의 첫 번째 문자 'H'보다 크므로 1을 리턴
//	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n", str1, str2, strcmp(str1, str2));
//
//	// str2의 첫 번째 문자 'H'가 str3의 첫 번째 문자 'S'보다 작으므로 -1을 리턴
//	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n", str2, str3, strcmp(str2, str3));
//
//	// str3의 첫 번째 문자 'S'가 str1의 첫 번째 문자 'L'보다 크므로 1을 리턴
//	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n", str3, str1, strcmp(str3, str1));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	printf("%s\n", buf);
//	// 문자열 배열 buf에 'hello world'가 복사된 후, 'www w'을 buf에 5바이트만큼 복사함.
//	strncpy(buf, "www world", 5);
//	printf("%s\n", buf);
//
//	return 0;
//}

// string 함수 문제1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100];
//	char search;
//	char* q;
//
//	printf("문자열을 입력해주세요>> ");
//	// gets_s는 엔터 처리까지 해주므로
//	gets_s(buff);
//
//	while (true) {
//		printf("검색할 문자를 입력해주세요(종료 : 0)>> ");
//		// %c 앞에 공백을 처리해주어야 함.
//		scanf(" %c", &search);
//
//		q = strchr(buff, search);
//
//		if (search == '0') {
//			printf("\n문자 검색 프로그램을 종료합니다.\n");
//			break;
//		}
//		if (q != NULL) {
//			printf("\n검색한 문자가 문자열에 있습니다!\n");
//			while (q != NULL) {
//				printf("%d번째에 검색한 문자가 있습니다.\n", q - buff + 1);
//				q = strchr(q + 1, search);
//			}
//			printf("\n");
//		}
//		else {
//			printf("\n검색한 문자가 문자열에 없습니다...ㅜ.ㅜ\n\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int parsing(char* String, int* data)
//{
//	char* p;
//	int cnt;
//
//	cnt = 0;
//	// strtok를 이용해서 String 문자열을 _ 로 구분
//	p = strtok(String, "_");
//	
//	while (p) {
//		// atoi를 이용해서 구분된 숫자문자열을 정수로 변환
//		data[cnt++] = atoi(p);
//		// strtok를 이용해서 String 문자열 계속해서 _ 로 구분
//		p = strtok(NULL, "_");
//	}
//
//	return cnt;
//}
//
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//
//	return 0;
//}

// 위의 예제에서 반복문 없는 버전
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int parsing(char* String, int* data)
//{
//	char* p;
//	int cnt;
//
//	cnt = 0;
//	// strtok를 이용해서 String 문자열을 _ 로 구분
//	p = strtok(String, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	data[cnt++] = atoi(p);
//	p = strtok(NULL, "_");
//
//	return cnt;
//}
//
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hello, world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//
//	// sprintf는 'integer : (decimal) %d (octal) %o \n'를 배열에 저장하고 출력함.
//	// 단, 다음에 sprintf로 다른 값을 저장하게 되면 덮어쓰기됨. (+ 되는 개념 X)
//	sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "characer : %c \n", character);
//	printf("%s \n", buf);
//
//	sprintf(buf, "string : %s \n", string);
//	printf("%s \n", buf);
//
//	sprintf(buf, "pointer addr : %p \n", pointer);
//	printf("%s \n", buf);
//
//	sprintf(buf, "floating point : %e // %f \n", pi, pi);
//	printf("%s \n", buf);
//
//	sprintf(buf, "percent symbol : %% \n");
//	printf("%s \n", buf);
//
//	return 0;
//}

// string 함수 문제2
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char parsing(char* String, int* data)
//{
//	char* p;
//	char oper;
//	
//	// strtok를 이용해서 String 문자열을 _ 로 구분
//	p = strtok(String, " ");	// p = 3
//	data[0] = atoi(p);
//
//	p = strtok(NULL, " ");		// p = *
//	oper = *p;
//
//	p = strtok(NULL, " ");		// p = 2
//	data[1] = atoi(p);
//
//	p = strtok(NULL, " ");		// p = '='
//
//	p = strtok(NULL, " ");		// p = 5
//	data[2] = atoi(p);
//
//	return oper;
//}
//
//int main()
//{
//	char String[100];
//	int data[3];
//
//	printf("연산식을 입력하세요>> ");
//	gets_s(String);
//
//	char oper = parsing(String, data);
//
//	int result = 0;
//	switch (oper) {
//	case '+': result = data[0] + data[1]; break;
//	case '-': result = data[0] - data[1]; break;
//	case '*': result = data[0] * data[1]; break;
//	case '/': result = data[0] / data[1]; break;
//	case '%': result = data[0] % data[1]; break;
//	}
//
//	if (data[2] == result)
//		printf("참입니다.\n");
//	else
//		printf("%d %c %d 는 %d입니다.\n", data[0], oper, data[1], result);
//
//
//	return 0;
//}

// 더블릿 6174번 문제
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_Kaprekar(char num)
{
	int max, min;
	int cnt = 0;

	// 무한반복 (6174를 찾을 때까지)
	while (strcmp(num, '6174') == 0) {
		// 최대값 찾는 코드
		

		// 최소값 찾는 코드


		// 차를 하는 코드
	}

	return cnt;
}

int main()
{
	char num[5];

	gets_s(num);

	

	return 0;
}