/*
* 기본 자료형
* char:문자
* int:정수(0,-123,+222)
*	-short int 크기에 따라
*	-long int
* ---------------------------
* signed:-,+
* unsigned:+
* char(character) :문자 ascii   한 문자 저장 
ch 변수(variable)이름은 영문, _, 숫자로 쓰기 cd, cx, _co
*-------------
* char: 1바이트
*  signed char: 1바이트 = 1비트 부호비트+ 7비트 숫자( -128~ 127)
* unsigned :음수는 처리할 수 없다. 대신 258까지 표현
---------------
	
	char ch = 'a';
	char cd = 97; // 10진수 a 가
	char cx = 0x61; //16진수대입
	char _co = 0141;//8진수

	--------------

	문자열형 상수 
	"ABC" -> 메모리상 "ABC0"이라서 4바이트임 
	0은 마침표와 같음
	char abc;// 별명

	-----------------
	메모리번지: 32bit 4byte
	72p 데이터 저장공간 변수 
	변수 이름(식별자) 대소문자 구별 _test, test, TEST 다 다른 이름임 
	_,영문, 숫자로 만듬 BUT 숫자가 앞에 오거나 숫자만 있는 이름은 불가 

	-------
*/

#include <stdio.h>

void main()
{ 
	char ch = 'a'; // 문자형 상수(불변의 값)
	char ch1 = ch + 1; // 값으로 인식해서 연산함

	char cd = 97; // 10진수 a 가
	char cx = 0x61; //16진수대입
	char _co = 0141;//8진수
	printf("ch=(%c), cd(%c), cx(%c)\n", ch,cd,cx);// 캐릭터값을 찍을거다.
	printf("ch=(%d), cd(%x), cx(%o), _co(%c),ch1(%d)(%C)\n", ch, cd, cx, _co,ch1,ch1);

	signed char cc1 = 127;
	signed char cc2 = -128;
	signed char cc3 = 128;
	unsigned char uc1 = 255;

	printf("cc1(%d), cc2(%d), uc1(%d), cc3(%d)\n", cc1,cc2,uc1,cc3);



	
	

}