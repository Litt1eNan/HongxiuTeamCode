#include<stdio.h>
#include<string.h>//strlen(s)����ַ������ȣ�������\0��,strcmp(�ַ���1,�ַ���2) 
int main(void)
{
char s[12]="a book!"; 
printf("%d",sizeof(s)); 
	
	return 0;
}/*�ַ������Ⱥ�����strlen(s)����ַ������ȣ�������\0��,strcmp(�ַ���1,�ַ���2
�ַ����ȽϺ�����strcmp(�ַ���1,�ַ���2){ASCIIֵ�Ƚ�}�Ƚϵ�һ����ͬ���ַ���asciiֵ��ľʹ󣬷��غ���ֵ 
�ַ������Ӻ�����strcat(�ַ�����1,�ַ���2)
�ַ�������������strcpy(�ַ�����1,�ַ�����2) ������2�滻������1�� eg��char a[10]="abcdefghi"��b[]="happy"��  strcpy(a,b)�� ��b�滻a��Ϊ a[10]="happy\0ghi\0"  b����*/ 
