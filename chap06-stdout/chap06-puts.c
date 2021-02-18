
#include <stdio.h>

#define TITLE "C표준 라이브러리와 표준 출력함수" //대문자로 디파인함수 만들기

#define PUTCHAR(c) putc((c), stdout)
#define PUTERROR(c) putc((c),stderr)


void putx(char const* str);
void putv(char const* str);

void putx(char const* str)
{
	puts(str);
	putchar(str[0]);
	putchar(str[1]);
	putchar(str[2]);
	putchar(str[3]);
	putchar(str[4]);
	putchar(str[5]);
}

void putv(char const* str)
{
	puts(str);
	putchar(str[0]);
	putchar(str[1]);
	putchar(str[2]);
	putchar(str[3]);
	putchar(str[4]);
	putchar(str[5]);
	putchar(str[6]);
	putchar(str[7]);
}


/*
putx(char const* str);
str:출력하고자 하는 문자열
return: 없음
-------------------------------
puts(char const* _Buffer)의 의미가 무엇인지 확인
*/

void main()//main이 두개라 오류 안쓰는 메인 들어있는 소스 속성에 빌드에서 제외하기 예 누름

{
	char first[] = "first";
	char second[] = "second";

	printf("%s\n", TITLE);
	putx("first");
	putv(TITLE);
}