#include<stdio.h>
#include<math.h>
void main(){
 int n,i;
 float s=1;
 printf("Nhap N = ");
 scanf("%d",&n);
 for(i=1;i<=n-1;i++)
 {
     s+=pow(-1,i)*(float)1/Tong(i+1);
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

