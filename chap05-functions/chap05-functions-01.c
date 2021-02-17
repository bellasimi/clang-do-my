
#include <stdio.h>
/*
*함수 선언(declare): 함수의 프로토타입
*/
void print();
void printx(int x); //위와 동일한 이름 쓰면 안된다.
int sum(int value1, int value2);


/*
* 함수 호출
*/

void main(void) // void 입력 안해도 오류는 안남. 리턴값이 없음.
{
	printf("main fuction!\n");
	print();
	//printx(10.1f);// int는 정수만 처리하기 때문에 이렇게 입력해도 10으로 표시한다. 자료소실 발생, 자료형을 일치 시켜야 함.  
	//에러코드가 c4244인데 속성c언어 모든옵션 들어가서 특정경고 오류로 처리에 4244 입력하면 빌드 실패로 뜸 
	printx(10);
	int result = sum(10, 50);
	printx(result);


}



/*
함수 정의: 본체, 내용이 기술
*/
void print() 
{
	printf("print fuction!\n");
}
void printx(int x)
{
	printf("printx function(%d)!\n",x);

}



	int sum(int value1, int value2)
{
		int result = value1 + value2;
		return result;

}