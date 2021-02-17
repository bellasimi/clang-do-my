/*
* preprocessor.c
* 전처리기 예제
#define(재정의)
코드의 크기는 커진다.

*/

#include <stdio.h>

#define POWX(x) (x*x) // x제곱 명령 

#define PI 3.141592f //세미콜론 붙이지 않는다. 대문자로 쓴다.
#define CIRCLE_AREA(r) (PI*(r*r))
#define CIRCLE_AREA2(r) (PI* POWX(r))
#define CIRCLE_AREA3(r) PI* POWX(r)


#define CIRCLE_AROUND(r) (PI* 2*r)


//참(true, 0이 아닌수), 거짓(false, 0)
//
#define TRUE 1
#define FALSE 0

float circle_space(float r);
float circle_width(float r);


void main()
{
	float pi = 3.141592f;

	printf("pi(%f)\n", pi);
	printf("pi(%f)\n", PI);
	printf("원의넓이: 반지름(%f), 넓이(%f)\n", 3.0f, circle_space(3.0f));
	printf("원의둘레: 반지름(%f), 둘레(%f)\n", 3.0f, circle_width(3.0f));
	printf("원의둘레: 반지름(% f), 넓이(% f)\n", 3.0f, CIRCLE_AREA(3.0f));
	printf("원의둘레: 반지름(% f), 둘레(% f)\n", 3.0f, CIRCLE_AROUND(3.0f));

	float x1 = CIRCLE_AREA(3.0f) * 2.0f;
	float x2 = CIRCLE_AREA3(3.0f) * 2.0f;
}

/*
원의 넓이 
*/
float circle_space(float r)
{
	float space = PI * (r * r);
	return space;
	//return PI* (r * r);
}
/*
원의둘레
*/

float circle_width(float r)
{
	float width = 2 * 3.14f * r;
	return width;
	//return 2 * 3.14f * r;
}