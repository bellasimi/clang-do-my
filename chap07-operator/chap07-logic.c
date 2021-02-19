/*
관계 연산자
----------------
1.참(true)과 거짓(false):1.0
2.크다:>
3.그거나 같다 : >=
4.작다: <
5.작거나 같다: =<
6.같지 않다: !=
7.같다.: ==
------------------
관계식의 결과 0또는 1이 나온다.
*/

#include <stdio.h>

void main()
{
	char t = 1, f = 0;
	int x = 10, y = 5;


	printf("1.tf: t(%d)(%d)\n", t,f);
	printf("2. >: x(%d), y(%d) =r(%d)\n" ,x,y,x >5);
	printf("3.>=: x(%d), y(%d) = r(% d)\n" ,x,y,x>=5);
	printf("4. <: x(%d), y(%d) = r(% d)\n" ,x,y,x<5);
	printf("5.=<: x(%d), y(%d) = r(% d)\n" ,x,y,x<=5);
	printf("6.!=: x(%d), y(%d) =r(%d)\n", x, y, x!=5);
	printf("7.==: x(%d), y(%d) =r(%d)\n", x, y, x==5);
}