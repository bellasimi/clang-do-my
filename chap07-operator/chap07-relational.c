/*
논리 연산자
----------------------
&&: and, 논리곱, 양쪽다 참이어야 참
이상한 짝대기 두개: or 한쪽이라도 참이면 참
!: not 부정, 참이면 거짓, 거짓이면 참
0은 거짓
0이 아닌것은 참이다. (-1)  자료형의 비트가 하나라도 1이면 참
-1은 모든 비트가 1로 세팅, 그러므로 참

*/
#include <stdio.h>
void RelationalOper();
void RelationalOper2();
void main()
{
	 RelationalOper();
	 RelationalOper2();
	
}

#include <stdio.h>

void RelationalOper()
{
	char t = 1, f = 0;
	int x = 10, y = 5;



	int r1 = x > 5;
	int r2 = x >= 5;
	int r3 = x < 5;
	int r4 = x <= 5;
	int r5 = x != 5;
	int r6 = x == 5;

	printf("1.tf: t(%d)(%d)\n", t, f);
	printf("2. >: x(%d), y(%d) =r(%d)\n", x, y, r1);
	printf("3.>=: x(%d), y(%d) = r(% d)\n", x, y, r2);
	printf("4. <: x(%d), y(%d) = r(% d)\n", x, y, r3);
	printf("5.=<: x(%d), y(%d) = r(% d)\n", x, y, r4);
	printf("6.!=: x(%d), y(%d) =r(%d)\n", x, y, r5);
	printf("7.==: x(%d), y(%d) =r(%d)\n", x, y, r6);
}
void RelationalOper2()
{
	char t = 1, f = 0;
	int x = 10, y = 5;


	printf("1.tf: t(%d)(%d)\n", t, f);
	printf("2. >: x(%d), y(%d) =r(%d)\n", x, y, x > 5);
	printf("3.>=: x(%d), y(%d) = r(% d)\n", x, y, x >= 5);
	printf("4. <: x(%d), y(%d) = r(% d)\n", x, y, x < 5);
	printf("5.=<: x(%d), y(%d) = r(% d)\n", x, y, x <= 5);
	printf("6.!=: x(%d), y(%d) =r(%d)\n", x, y, x != 5);
	printf("7.==: x(%d), y(%d) =r(%d)\n", x, y, x == 5);
}