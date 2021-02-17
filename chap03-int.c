/*
* 기본 자료형
* char:문자
* int:정수(0,-123,+222) 크기에 따라 분류
*	-short int  
*	-long int
* ---------------------------
* signed:-,+
* unsigned:+
* char(character) :문자 ascii   한 문자 저장
ch 변수(variable)이름은 영문, _, 숫자로 쓰기 cd, cx, _co
*-------------
* char: 1바이트
* signed char: 부호가 있는 1바이트 저장공간 = 1비트 부호비트+ 7비트 숫자( -128~ 127)저장
* unsigned :부호가 없는 1바이트 저장공간 음수는 처리할 수 없다. 대신 258까지 표현
* signed short int: 부호가 있는 2바이트
* unsigned long int:부호가 없는 4바이트
*/


#include <stdio.h>
#include <limits.h>


void main()
{
	printf("$$$$ int_min(%d)\n", INT_MIN);

	signed short int si1 = 32767;
	signed short int si2 = -32768;
	signed short int si3 = 32768;

	unsigned short int us1 = 65535;
	unsigned short int us2 = us1 + 1;// 초과 값이라 0이 뜸

	printf("short int: si1(%d),si2(%d),si3(%d),us1(%ud),us2(%ud)\n", si1, si2, si3, us1, us2);


	signed long int li1 = 2147483647;
	signed long int li2 = -2147483647 - 1;
	signed long int li3 = 2147483648;
	
	unsigned long int ul1 = 4294967295;
	unsigned long int ul2 = ul1 + 1;// 초과 값이라 0이 뜸

	printf("long int: li1(%d),li2(%d),li3(%d),ul1(%ud),ul2(%ud)\n", li1, li2, li3, ul1, ul2);
	//unsigned는 %ud로 표기해야 오류가 안뜸

		


}


