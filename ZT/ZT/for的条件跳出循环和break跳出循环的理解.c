#include<stdio.h>
int main()
{int i,m;
scanf("%d",&m);
for(i=2;i<m;i++)
{
if(m%i==0) break;/*����������������������(1) break (2)i>=m*/ 
}
if(i>=m) printf("%d��һ������",m);
else printf("%d����һ������",m); 
}
