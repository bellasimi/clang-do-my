
#include <stdio.h>

#define TITLE "Cǥ�� ���̺귯���� ǥ�� ����Լ�" //�빮�ڷ� �������Լ� �����

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
str:����ϰ��� �ϴ� ���ڿ�
return: ����
-------------------------------
puts(char const* _Buffer)�� �ǹ̰� �������� Ȯ��
*/

void main()//main�� �ΰ��� ���� �Ⱦ��� ���� ����ִ� �ҽ� �Ӽ��� ���忡�� �����ϱ� �� ����

{
	char first[] = "first";
	char second[] = "second";

	printf("%s\n", TITLE);
	putx("first");
	putv(TITLE);
}