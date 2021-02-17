/*
* preprocessor.c
* ��ó���� ����
#define(������)
�ڵ��� ũ��� Ŀ����.

*/

#include <stdio.h>

#define POWX(x) (x*x) // x���� ��� 

#define PI 3.141592f //�����ݷ� ������ �ʴ´�. �빮�ڷ� ����.
#define CIRCLE_AREA(r) (PI*(r*r))
#define CIRCLE_AREA2(r) (PI* POWX(r))
#define CIRCLE_AREA3(r) PI* POWX(r)


#define CIRCLE_AROUND(r) (PI* 2*r)


//��(true, 0�� �ƴѼ�), ����(false, 0)
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
	printf("���ǳ���: ������(%f), ����(%f)\n", 3.0f, circle_space(3.0f));
	printf("���ǵѷ�: ������(%f), �ѷ�(%f)\n", 3.0f, circle_width(3.0f));
	printf("���ǵѷ�: ������(% f), ����(% f)\n", 3.0f, CIRCLE_AREA(3.0f));
	printf("���ǵѷ�: ������(% f), �ѷ�(% f)\n", 3.0f, CIRCLE_AROUND(3.0f));

	float x1 = CIRCLE_AREA(3.0f) * 2.0f;
	float x2 = CIRCLE_AREA3(3.0f) * 2.0f;
}

/*
���� ���� 
*/
float circle_space(float r)
{
	float space = PI * (r * r);
	return space;
	//return PI* (r * r);
}
/*
���ǵѷ�
*/

float circle_width(float r)
{
	float width = 2 * 3.14f * r;
	return width;
	//return 2 * 3.14f * r;
}