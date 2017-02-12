#include<stdio.h>
#include<math.h>
void main(){
int i,n,x,s=0;
printf("Nhap N vs X \n");
scanf("%d%d",&n,&x);
for(i=0;i<=n;i++)
{
    s+=pow(-1,i)*pow(x,i*2+1);
}
printf("\n\nS = %d",s);
}


