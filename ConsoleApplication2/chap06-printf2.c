#include <stdio.h>

void printControlCode();
void printcontroltab();
void printcr();

/*
탭(tab) : \t
*/

void printControlCode()
{
	printf("소크라테스가 이렇게 말했습니다.\"너 자신을 알라\"라고!\n");
	printf("소크라테스가 이렇게 말했습니다.\\너 자신을 알라\"라고!\n");
	//\"인용문\"처리방법 \표시 원하면 \다음 "대신 \ 넣으면 됨 p.138
	printf("올해의 실적은 150(%%) 성장하였습니다.\n");


}
void controltab()
{
	printf("	*	*	*	*\n");
	printf("1234567890123456789012345678901234567890\n");
	printf("a\tab\tdef\tg\th\n");

}

/*
windows: CRLF(\r\n),0x0d 0x0a
linux:LF(\n),0x0a
Mac:CR(\r), 0x0d
*/
void printcr()
{
	printf("	*	*	*	*\n");
	printf("1234567890123456789012345678901234567890\n");
	printf("1234567890\rabc");


}
void main()
{
	printControlCode();
	controltab();
	printcr();

}