#include<stdio.h>
void up_and_down(int n);

int main(void)
{
	up_and_down(1);
	return 0;
}

void up_and_down(int n)
{
	printf("Level %d:n location %p\n",n,&n);
	if(n<4) up_and_down(n+1);
	printf("LEVEL %d:n location %p\n",n,&n);
}//�ݹ�������һ���涴�����������루һ���ݹ飩��������㣨�ݹ���ֹ�㣩֮���������涴��һ�ߵ������������ص���һ�ߵ�����㣬Ҳ���Ƿ�һ���ݹ飩
/*����        level 1(�����)-->level 2-->lebel 3-->level 4(�������)-->LEVEL 4(�뿪���)-->LEVEL 3-->LEVEL 2-->LEVEL 1(һ���ݹ�������)	
                     һ���ݹ�-->�����ݹ�-->�����ݹ�-->�ļ��ݹ�-->���ļ��ݹ�-->�������ݹ�-->�������ݹ�-->��һ���ݹ�
					 �����ݹ��ڷ������ݹ���һ�������ĺ�����ֻ���������ݹ��ڲ��������ļ��ݹ飬������һ��ǧ�������ʽ*/ 
