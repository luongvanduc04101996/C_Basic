#include<stdio.h>
#include<math.h>
void main(){
int x,n,i,s=0;
printf("Nhap X va N : ");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
{
    s+=pow(x,i);
}
printf("\nS = %d",s);
}
