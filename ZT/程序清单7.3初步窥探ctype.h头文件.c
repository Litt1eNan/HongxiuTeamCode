//�滻�������ĸ������ĸ�ַ����ֲ���
#include<stdio.h>
#include<ctype.h>//ctype����   
int main(void)
{
	char ch;
	
	while((ch=getchar())!='\n')
	{
		if(isalpha(ch)) putchar(ch+1);
		else putchar(ch);
	}
	putchar(ch);
	return 0;
 } 
 
/*ctype.h������
isalnum����  ��ĸ������
isalpha���� ��ĸ
isblank���� �հ��ַ�->�ո�ˮƽ�Ʊ�����з�
iscntrl���� �����ַ� �� ctrl+b
isdigit���� ����
isgraph���� ���ո��������ɴ�ӡ�ַ�
islower���� Сд��ĸ
isprint���� �ɴ�ӡ�ַ�
ispunct���� ������->���ո����ĸ�����ַ�������κοɴ�ӡ�ַ�
isspace���� �հ��ַ�->�ո񣬻��з�����ҳ�����س�������ֱ�Ʊ����ˮƽ�Ʊ��
isupper���� ��д��ĸ
isxdigit���� ʮ�������ַ� */
 
