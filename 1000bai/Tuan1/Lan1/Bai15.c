#include<stdio.h>
void main(){
 int n,i;
 float s=0;
 printf("Nhap N = ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     s+=(float)1/Tong(i);
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
