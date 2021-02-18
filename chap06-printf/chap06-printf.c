/*교재 p.124*/
#include <stdio.h>
#include <limits.h>

#define TITLE "C표준 라이브러리와 표준 출력함수 (printf)" //대문자로 디파인함수 만들기

#define MAX_CHAR 127
#define MAX_SHORT 32767
#define MAX_INT 2147483647
#define MAX_UCHAR 0xff  //256
#define MAX_USHORT 0xffff //65535
#define MAX_UINT 0xffffffff //4294967295


void printbasic();
void printwidth();
void printUnsigned();
void printUnsignedchar();
void printOct();
void printHex();
void printExponet();
void printControlCode();


/*
백슬래시(\)
*/

void main()
{
	/*int data1 = 3;
	int data2 = 5;
	int step = 5;
	int value = 3 * step;
	int month = 12, day = 3;


	printf("%s\n", TITLE);

	printf("너는 생일이 언제니?");
	printf("나의 생일은 %d월 %d일입니다.", month, day);
	putchar('\n');
	printf("3*%d =%d", step, value);
	putchar('\n');
	printf("%d %d", data1, data2);
	printf("65의 ASCII 값은 %c입니다.", 65);
	*/
	printf("%s\n", TITLE);
	printbasic();
	printwidth();
	printUnsigned();
	printUnsignedchar();
	printOct();
	printHex();
	printExponet();
	printControlCode();

}



void printOct()
{
	printf("oct: char(%o), short(%o), int(%o), unchar(%o), ushort(%o), uint(%o)\n"
		, MAX_CHAR, MAX_SHORT, MAX_INT, MAX_UCHAR, MAX_USHORT, MAX_UINT);

}
void printHex()
{
	printf("oct: char(%x), short(%x), int(%x), unchar(%x), ushort(%x), uint(%x)\n"
		, MAX_CHAR, MAX_SHORT, MAX_INT, MAX_UCHAR, MAX_USHORT, MAX_UINT);

}
void printExponet()
{
	float f = 12.13f;
	printf("float: (%f),(%e),(%E)\n",f,f,f);

}
void printUnsigned()
{
	printf("char(%3c), short(%5d), int(%10d)\n", MAX_CHAR, MAX_SHORT, MAX_INT);
	printf("char(%3c), short(%5d), int(%10u)\n", MAX_UCHAR, MAX_USHORT, MAX_UINT);
}


void printUnsignedchar()
{
	
	int sx = MAX_INT;
	unsigned int ux = MAX_UINT;
	printf("int(%d)(%u), unsigned int(%u) \n", sx + 1, sx, ux);

}


void printwidth()
{
	char ch = 'a';
	short st = 1234;
	float integer = 1234567890;
	float real = 0.123456f;
	double real2 = 0.123456789;

	/*
	[출력폭]
	1.오른쪽 정렬
	2.지정된 자릿수보다 값이 크면 자릿수는 무시
	3.실수(%f)는 자리수에 소숫점이 포함
	4.실수(%15.10f)는 전체자리수는 15자리, 소숫점 이하는 10자리, 소숫점은 전체 자릿수에 포함된다. 
	*/

	printf("char(%4c), short(%5d), int(%5d), float(%9.6f), double(%15f)(%15.10f)\n",
		ch, st, integer, real, real2, real2);
	//double %20.10f 총 20자리수 중에서 소수점 이하로는 10자리만 표현
	//double %15f면 소숫점 이하는 기본 6자리
	//char(%-4c)하면 왼쪽 정렬됨
	


}


void printbasic()
{
	char ch = 'a';
	short st = 1234;
	float integer = 1234567890;
	float real = 0.123456f;
	double real2 = 0.123456789;

	//format:실수형  -> %f는 기본적으로 소숫점 이하 6자리까지 출력
	//format: 실수형 -> %.10f


	
	printf("char(%c), short(%d), int(%d), float(%f), double(%.10f)\n",ch, st, integer, real, real2);

	printf("char(%c), short(%d), int(%d), float(%f), double(%.10f)\n", 'b', 4321, 987654321, 0.654321, 0.987654321);


}



void printControlCode()
{
	printf("소크라테스가 이렇게 말했습니다.\"너 자신을 알라\"라고!\n");
	printf("소크라테스가 이렇게 말했습니다.\\너 자신을 알라\"라고!\n");
	//\"인용문\"처리방법 \표시 원하면 \다음 "대신 \ 넣으면 됨

}
