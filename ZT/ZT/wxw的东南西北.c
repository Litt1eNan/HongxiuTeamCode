#include<stdio.h>
int main()
{
	int a,b,c,k,j,i,m;
			for(i=1;i<=10;i++)
			{
				for(k=1;k<=10;k++)
				{
					if(k==i||k==(11-i))printf("  ");
					else if(i>=1&&i<=4&&k>=(i+1)&&k<=(10-i))
							printf("��");
					else if(i>=2&&i<=5&&k<=i)
							printf("��");
					else if(i>=6&&i<=10&&k<=(10-i))
							printf("��"); 
					else if(i>=2&&i<=5&&k>=(10-i))
							printf("��"); 
					else if(i>=6&&i<=10&&k>=i)
							printf("��"); 
					else if(i>=6&&i<=10&&k>=(12-i)&&k<=(i))
							printf("��"); 
				}
							printf("\n");
			}
		return 0;
}

