#include <stdio.h>

int sum(value1, value2)
{
	int result = value1 + value2;
		return result;
}

void print(int x)
{
	printf("(d%)\n",x);

}
	
void main(void)
{
	int result = sum(10, 2);
	print(result);
	print(10);

	

}