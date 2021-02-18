/*
c표준 라이브러리와 표준 출력함수 P.119
---------------------------------------
puts(char const* _Buffer);
const: constant(상수형, 불변) - 바꿀 수 없는 값.
variable: 변수, var
*/
//#include <iostream>
#include <stdio.h>

#define TITLE "C표준 라이브러리와 표준 출력함수" //대문자로 디파인함수 만들기

#define PUTCHAR(c) putc((c), stdout)
#define PUTERROR(c) putc((c),stderr)




void putchartest1(); //함수 선언시 뒤에 ;을 붙인다.
void putchartest2();
void putctest3();
void putstest4();


void main()
{
	//printf("%s\n", TITLE);
	//putchartest1(); 호출시 리턴 타입 필요없음
	//putchartest1();
	//putchartest2();
	putctest3();
	putstest4();
}


void putstest4()
{
	puts("표준 스트링 함수!");
	puts(TITLE);


}

void putctest3()
{
	putc('A', stdout);
	putc('\n',stdout);
	putc('B', stdout);
	putc('\n', stdout);
	PUTCHAR('C');
	PUTERROR('D');

}


void putchartest1()
{	//std::cout <<"hello world!\n";  cpp 언어는 c언어를 포함해
	//printf("hello world(stdio.h)!"); c언어를 컴파일해주지만 c언어는 cpp 컴파일 안해줌
	printf("putchar() 출력함수\n");
	//printf("%s\n", TITLE);//putchar(TITLE); 스트링을 출력할 수 없음
	putchar('a');
	putchar('\n');
	putchar('b');
	putchar('\n');
	putchar('1');
	putchar('\n');
	putchar(65);
	putchar('\n');
	putchar('A');



}

void putchartest2()
{

	printf("putchar() 출력함수 오류테스트\n");
	char rt = putchar(TITLE);
	char ra = putchar('a');

	printf("rt(%c), ra(%c)\n",rt, ra);

}
