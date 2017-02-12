#include<stdio.h>
void main(){
int i,n,s=0;
printf("Nhap N = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=GiaiThua(i);
}
printf("\nS = %d",s);

}
int GiaiThua(int a)
{
    if(a<=1)    return;
    else    return a*GiaiThua(a-1);
}





