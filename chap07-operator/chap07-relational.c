/*
�� ������
----------------------
&&: and, ����, ���ʴ� ���̾�� ��
�̻��� ¦��� �ΰ�: or �����̶� ���̸� ��
!: not ����, ���̸� ����, �����̸� ��
0�� ����
0�� �ƴѰ��� ���̴�. (-1)  �ڷ����� ��Ʈ�� �ϳ��� 1�̸� ��
-1�� ��� ��Ʈ�� 1�� ����, �׷��Ƿ� ��

*/
#include <stdio.h>
void RelationalOper();
void RelationalOper2();
void main()
{
	 RelationalOper();
	 RelationalOper2();
	
}

#include <stdio.h>

void RelationalOper()
{
	char t = 1, f = 0;
	int x = 10, y = 5;



	int r1 = x > 5;
	int r2 = x >= 5;
	int r3 = x < 5;
	int r4 = x <= 5;
	int r5 = x != 5;
	int r6 = x == 5;

	printf("1.tf: t(%d)(%d)\n", t, f);
	printf("2. >: x(%d), y(%d) =r(%d)\n", x, y, r1);
	printf("3.>=: x(%d), y(%d) = r(% d)\n", x, y, r2);
	printf("4. <: x(%d), y(%d) = r(% d)\n", x, y, r3);
	printf("5.=<: x(%d), y(%d) = r(% d)\n", x, y, r4);
	printf("6.!=: x(%d), y(%d) =r(%d)\n", x, y, r5);
	printf("7.==: x(%d), y(%d) =r(%d)\n", x, y, r6);
}
void RelationalOper2()
{
	char t = 1, f = 0;
	int x = 10, y = 5;


	printf("1.tf: t(%d)(%d)\n", t, f);
	printf("2. >: x(%d), y(%d) =r(%d)\n", x, y, x > 5);
	printf("3.>=: x(%d), y(%d) = r(% d)\n", x, y, x >= 5);
	printf("4. <: x(%d), y(%d) = r(% d)\n", x, y, x < 5);
	printf("5.=<: x(%d), y(%d) = r(% d)\n", x, y, x <= 5);
	printf("6.!=: x(%d), y(%d) =r(%d)\n", x, y, x != 5);
	printf("7.==: x(%d), y(%d) =r(%d)\n", x, y, x == 5);
}