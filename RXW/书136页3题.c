#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,area;
	printf("���������������߳����ÿո����\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
//	{
		printf("���Թ���������\n"); 
		d=(a+b+c)/2;
		area=sqrt(d*(d-a)*(d-b)*(d-c));
		printf("�����ε������%f",area);
//	}
	else
	{
		printf("���ܹ���������"); 
	}
	return 0;
}
