#include <stdio.h>


void arithBasic();

//void arithBasic2();
void arithPlusMinus();
void main()
{


	arithBasic();
	//arithPlus();
	//arithMinus();

	//arithBasic2();
	arithPlusMinus();
}


/*
기본 연산자
*/

void arithBasic()
{
	int data1 = 5, data2 = 3;

	int result1 = data1 + data2;
	int result2 = data1 * data2;
	int result3 = data1 / data2;//나눗셈(몫)
	int result4 = data1 % data2;//나눗셈(나머지)

	printf("result : %d, %d,%d,%d\n", result1, result2, result3, result4);
}


void arithBasic2()
{
	int data1 = 5.0f , data2= 3.0f;//.0안붙이면 자료형이 달라서 오류남


	int result1 = data1 + data2;
	int result2 = data1 * data2;
	int result3 = data1 / data2;//나눗셈(몫, 소숫점이하)


	printf("result : %f, %f,%20.10f,%20.10f\n", result1, result2, result3, (data1/ data2));
}
/*
증감 연산자
단항연사자(++,--)
장점: 속도가 빠르다.
*/
void arithPlusMinus()
{
	int x = 5;

	//전위형
	x++; // x =x+1
	x--; //x = x-1


	//후위형
	++x; // x =x+1
	--x; //x = x-1

	printf("x=%d\n", x);

	int p1 = ++x; //x의 값을 1 더한 후에 그 결과를 p1에 대입
	int p2 = x++;//x의 값을 p1에 대입한 후 x에 1을 더한다.
	int m1 = --x; //x의 값을 1 뺀 후에 그 결과를 m1에 대입
	int m2 = x--;//x의 값을 m1에 대입한 후 x에서 1을 뺀다.

	printf("p1(%d),p2(%d),m1(%d),m2(%d)\n", p1, p2, m1, m2);

}
/*
증감연산자
*/
//void arithPlus()
//void arithMinus()