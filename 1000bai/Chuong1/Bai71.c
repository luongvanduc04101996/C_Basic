#include<stdio.h>
#include<math.h>
void main(){
 int n,i,x;
 float s=0;
 printf("Nhap N va X : ");
 scanf("%d%d",&n,&x);
 for(i=1;i<=n;i++)
 {
     s+=pow(-1,i)*pow(x,i)*(float)1/Tong(i);
 }
    printf("\nS = %f",s);
}
int Tong (int a){
int i,s=0;
for(i=1;i<=a;i++)
{
    s+=i;
}
return s;
}


