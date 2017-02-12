#include<stdio.h>
#include<math.h>
void main(){
 int n,i,x;
 float s=0;
 printf("Nhap N va X : ");
 scanf("%d%d",&n,&x);
 for(i=1;i<=n;i++)
 {
     s+=pow(-1,i)*pow(x,i)*(float)1/GiaiThua(i);
 }
    printf("\nS = %f",s);
}
int GiaiThua(int n)
{
    if(n<=1) return 1;
    else    return n*GiaiThua(n-1);
}

