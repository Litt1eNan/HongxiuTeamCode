#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,s;
	printf("������һ�������ε����ߣ�");
	scanf("%f%f%f",&a,&b,&c);
	d=(a+b+c)/2;
	if(a+b>c&&b+c>a&&a+c>b)
	{
	s=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("�������γ�������s=%.1f",s);
	} 
	else 
	printf("�������޷����������"); 
return 0;
}
