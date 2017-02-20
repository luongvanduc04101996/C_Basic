#include<stdio.h>
#include<math.h>
void main(){
 int n,i,x;
 float s=0;
 printf("Nhap N va X : ");
 scanf("%d%d",&n,&x);
 for(i=0;i<=n;i++)
 {
     s+=pow(-1,i+2)*pow(x,2*i+1)*(float)1/GiaiThua(2*i+1);
 }
    printf("\nS = %f",s);
}
int GiaiThua(int n)
{
    if(n<=1) return 1;
    else    return n*GiaiThua(n-1);
}




