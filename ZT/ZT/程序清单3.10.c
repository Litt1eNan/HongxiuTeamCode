#include<stdio.h>
int main(void)
{
	float salary;
	printf("\a\a\a\a\a\a\a\a\a��������Ҫ����н:");
	printf(" $      \b\b\b\b\b\b\b");
	scanf("%f",&salary);
	printf("\n\t$%.2f����н��$%.2fһ��",salary,salary*12.0);
	printf("\r��˹!\n"); 
	return 0;
} 
