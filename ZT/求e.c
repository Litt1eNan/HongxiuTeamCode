//whileѭ�� 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double n=1; 		--> n��������׳� 
//	double e=1,b=1; 	-->	b�Ƿ�ĸ 
//	
//	while(fabs(1/b)>=1e-5)  //�����������ֵ����fabs��������Ҫ����math.hͷ�ļ� 
//	{
//		b*=n;  			-->b=b*n�������ĸ�׳�     ���磺��һ��ѭ����n=1,b=1,b=b*n=1*1=1!    �ڶ���ѭ���� n=2��b=b*n=1��*2=1*1*2=2��     ������ѭ���� n=3��b=b*n=2��*3=1*2*3=3! 
//		e+=1/b;			-->e=e+1/b������e�ı��ʽ 					e=e+1/b=1+1/1�� 					e=e+1/b=e+1/1��+1/2! 						e=e+1/b=e+1/1��+1/2!+1/3�� 
//		n++;			-->nÿ�ε��� �������ĸ�׳�   				n++  --> n=2 						n++  --> n=3 	                            n++  --> n=4   �Դ����ƣ�ֱ��������ѭ������ 
//	 } 
//	printf("%.5lf",e);
//	return 0;
//}
//forѭ�� 
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double b=1,e=1;
									                              //n=1��					
	for(n=1;fabs(1/b)>=1E-5;n++)//-->forѭ�����Կ���whileѭ��    //while��fabs(1/b��>=1E-5) 
	{															//{			
		b*=n;													//b*=n;			
		e+=1/b;													//e+=1/b;			
		                     									//n++�� 
	}															//}  ��������һ����  
	printf("%.5lf",e);
	return 0;
}
//do   whileѭ�� 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double n=1;
//	double e=1,b=1;
//	
//	do
//	{
//		b*=n;			do...whileѭ�����߼��������whileѭ��һ�� 
//		e+=1/b;
//		n++;
//	 } while(fabs(1/b)>=1e-5); 
//	printf("%.5lf",e);
//	return 0;
//}
