#include<stdio.h>//���������ַ����������ַ��� 
#include<string.h>
int main()
{
	char ch_max[20],c[3][20];
	int i;
	
	for(i=0;i<3;i++)
	 gets(c[i]);
	 strcpy(ch_max,c[0]);//�ַ�����ֻ��Ҫ�����ַ������ƣ�����˵�ַ����飬�����ܵ������鳤�� 
	if(strcmp(c[1],ch_max)>0)
	{
		strcpy(ch_max,c[1]);
	 } 
	 else if(strcmp(c[2],ch_max)>0)
	 {
		strcpy(ch_max,c[2]);
	 }
	 printf("max="); 
	 puts(ch_max); 
	
	return 0;
}
