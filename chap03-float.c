/*실수 자료형: float, double
* ---------------------
* 
* float:4byte, 1.2E-38 ~3.4E38
* double: 8byte, 2.2E-308
* ------------------
* 10= 0.1E10 E는 지수 제곱 승 
* 100.0 = 0.1 
*/

#include <stdio.h>

void main()
{
	//float pi = 3.141592f; //f를 붙여줘야 오류가 안남
	double dpi = 3.141592789; //뒤에 F 안붙여도 됨14 자리
	float pi = 3.141592789f;//6자리
	float ti = 0.123e3;// e3 = 1000
	printf("pi(%f)(%.10f)(%.10f)(%e)(%f)\n", pi,pi,dpi,ti,ti);



}