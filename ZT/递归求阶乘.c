  #include<stdio.h>
long fact(long n);//���庯��������������  
int main(void)//�����޷������ͺ��� 
{
	int n;
	long result;
	
	printf("����n��ֵ��");
	scanf("%d",&n);
	result=fact(n);//�����庯���ķ���ֵ��ֵ��result 
	if(result!=0)
	{
		printf("%d!=%ld\n",n,result);
	 } 
	 
 } 
 
 long fact(long n)//
 {
    if(n<0)
    {
	printf("date error!\n");
    return 0; //
	}
	else if (n==0||n==1)  return 1;//
	else return n*fact(n-1);//
 }
