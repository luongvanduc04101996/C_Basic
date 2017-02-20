#include<stdio.h>
#include<math.h>
void main(){
int i,n,x,s=0;
printf("Nhap N vs X \n");
scanf("%d%d",&n,&x);
for(i=1;i<=n;i++)
{
    s+=pow(-1,i+1)*pow(x,i);
}
printf("\n\nS = %d",s);
}
