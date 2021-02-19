/*
* chap07-operator.c
* 연산자 예제
* 
*1.대입연산자, 산술연산자, 증감연사자, 관계연산자. 논리연산자
*2.연산자의 우선순위와 연산방향
*/

#include <stdio.h>
void assignOper();

void main()
{
	assignOper();
}

/*
대입연산자(=), 같다는 의미가 아니다. 
a를 b에 대입(a -> b :b = a)

1. 대입이 되는 대상의 원래 값은 사라진다. 
2. 양쪽 모두 동일한 자료형이어야 한다. 
		-int끼리  char끼리 short끼리 float끼리 double끼리
3. 양쪽의 자료형이 다르면 캐스팅(casting)하면 된다. 

*/
void assignOper()
{
	int a=1;
	int b=2;
	b = a;//2가 아니라 a로 대입

	printf("a를 b에 대입(a=b), a(%d), b(%d)\n", a, b);

}