/*
* chap01-sysinfo
* 시스템 정보 확인
*----------------------
* sizeof(type) 내장함수(built-in function)

*/



#include <stdio.h>


int main()
{
	printf(">>> system information <<<\n");

	printf("sizeof(char)(%d)\n", sizeof(char));// 1바이트
	printf("sizeof(short)(%d)\n", sizeof(short));//2바이트
	printf("sizeof(int)(%d)\n", sizeof(int));//
	printf("sizeof(long)(%d)\n", sizeof(long));
	printf("sizeof(float)(%d)\n", sizeof(float));
	printf("sizeof(double)(%d)\n", sizeof(double));
	

	printf("sizeof(char*)(%d)\n", sizeof(char*));// 1바이트
	printf("sizeof(short*)(%d)\n", sizeof(short*));//2바이트
	printf("sizeof(int*)(%d)\n", sizeof(int*));//
	printf("sizeof(long*)(%d)\n", sizeof(long*));
	printf("sizeof(float*)(%d)\n", sizeof(float*));
	printf("sizeof(double*)(%d)\n", sizeof(double*));

	printf("sizeof(void*)(%d)\n", sizeof(void*));

}

//바이트 단위로 정보를 알려줌 