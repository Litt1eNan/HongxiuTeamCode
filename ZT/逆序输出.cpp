#include<stdio.h>//��a����0 1 2 3 4 5 6 7 8 9 ���������� 
int main(void)
{
	int i,a[10]; 
	for(i=9;i>=0;i--)
	{
		a[i]=i; 
		printf("%3d",a[i]);
	}
	
	return 0;
 } 
