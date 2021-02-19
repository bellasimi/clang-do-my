/*
* chap07-operator.c
* 연산자 예제
* 
*1.대입연산자, 산술연산자, 증감연사자, 관계연산자. 논리연산자
*2.연산자의 우선순위와 연산방향
*/

#include <stdio.h>

#define MAX_CHAR 127
#define MAX_SHORT 32767
#define MAX_INT 2147483647
#define MAX_UCHAR 0xff  //256
#define MAX_USHORT 0xffff //65535
#define MAX_UINT 0xffffffff //4294967295



void assignint();
void assignFloatDouble();
void assignuint();
void assigncasting();
void assignCastingReal();
void assignLoss();
void main()
 {
	//assignint();
	//assignFloatDouble();
	//assignuint();
	//assigncasting();
	//assignCastingReal();
	assignLoss();
}

/*
대입연산자(=), 같다는 의미가 아니다. 
a를 b에 대입(a -> b :b = a)

1. 대입이 되는 대상의 원래 값은 사라진다. 
2. 양쪽 모두 동일한 자료형이어야 한다. 
	-int끼리  char끼리 short끼리 float끼리 double끼리
3.같은 형태의 자료형에서 서로 자료형의 크기가 다른 경우 데이터의 손실 
	-signed, unsigned
	-float(e38), double() 
*/
void assignint()
{
	int a=1;//signed(부호가 있는 정수)
	int b=2;//b의 원래값은 사라진다.
	b = a;//2가 아니라 a로 대입

	int c = b;
	int d = 123456;



	printf("a를 b에 대입(b=a ), a(%d), b(%d)\n", a, b);
	printf("b를 c에 대입(c=b), b(%d), c(%d)\n", c, b);
	

}

void assignuint()
{
	/*
	양수(+)의 값을 signed에서 unsigned로 대입할 때는 문제가 없음.
	음수(-)의 값을 signed에서 unsigned로 대입할 때는 문제가 발생.
		- (오버플로우가 발생하면 minus(-)가 된다. ()
		- 그 값을 unsigned로 대입하게 되면 정상적으로 값을 갖는다. 
	*/
	int plus = 1;
	int sd = MAX_INT + plus;
	unsigned int ud = sd;

	printf("sd(%d),ud(%u)\n",sd, ud);

}
/*
float에서 Double로 문제가 없다. 
Double에서 float로 대입을 하게되면 손실이 발샐 될 수 있다. 
*/
void assignFloatDouble()
{
	float a = 0.123456f;//맨 뒤에 f 안붙이면 double로 인식 크기가 맞지 않아 오류가 남
	double b = 0.123456789;
	float c = b; //손실발생


	printf("Float:a(%f)\n", a);//기본 6자리까지 출력
	printf("Double: b(%15.10f)\n", b);
	printf("Double -> float: b(%15.10f) -> c(%15.10f)\n", b,c);

}

/*
4.양쪽의 자료형이 다르면 캐스팅(casting)을 해야한다.
	-int에서 char로 캐스팅을 하게 되면 데이터 손실이 발생될 수 있다.
	-캐스팅을 하게 되면 컴파일러 경고가 발생되지 않는다.
*/

void assigncasting()
{
	char c = 'A';//1바이트 숫자로 표현된 문자영어 -> 정수처럼 사용가능
	short cs = c;//2바이트 정수
	int cx = c;//4바이트 정수

	float ff = 89.12345f;
	int df = (int)ff; //소숫점 이하의 값을 소실
	float f1 = (float)df; // 

	int dd = 32767;
	char cc = dd;//크기가 다름 오버플로우

	int dm = MAX_INT;
	float f2 = (float)dm;

	printf("char -> short는 캐스팅이 필요 없다. c(%c), cx(%c)(%d)\n", c, cs, cs);
	printf("char -> int는 캐스팅이 필요 없다. c(%c), cx(%c)(%d)\n", c, cx, cx);
	printf("int -> char을 하게 되면 데이터 손실.dd(%d), cc(%d)\n", dd, cc);
	printf("float(%f) -> int(%d)\n", ff, df);
	printf("int(%d) -> float(%f)\n", df, f1);
	printf("int(%d) -> float(%f)\n", dm, f2);

}

void assignCastingReal()
{
	float a = 0.123456f;//맨 뒤에 f 안붙이면 double로 인식 크기가 맞지 않아 오류가 남
	double b = 0.123456789;
	float c = (float)b; //손실발생 (float) 입력하면 이 자료형으로 변환하겠단 말


	printf("Float:a(%f)\n", a);//기본 6자리까지 출력
	printf("Double: b(%15.10f)\n", b);
	printf("Double -> float: b(%15.10f) -> c(%15.10f)\n", b, c);
}

/*
큰 자료형의 데이터를 작은 자료형으로 대입하면 손실이 발생할 수 있다.
*/
void assignLoss()
{
	int d = 255;
	int d2 = 256;
	char c1 = (char)d;
	char c2 = (char)d2;


	printf("d(%d(%08x)),d2(%d)(%08x),c1(%d)(%x),2(%d)(%x)", d,d,d2, d2,c1,c1,c2,c2);

}