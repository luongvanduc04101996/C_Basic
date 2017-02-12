#include<stdio.h>
#include<math.h>
void main(){
int x,n,i,s=0;
printf("Nhap X va N : ");
scanf("%d%d",&x,&n);
for(i=0;i<=n;i++)
{
    s+=pow(x,2*i+1);
}
printf("\nS = %d",s);
}

