#include<stdio.h>
void main(){
int n,i,s=0;
printf("Nhap N = ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
    if(i%2==1)
    {
        s+=i;
    }
}
printf("\n==> S(%d) = %d",n,s);
}
