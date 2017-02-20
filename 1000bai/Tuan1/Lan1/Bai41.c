#include<stdio.h>
#include<math.h>
float PhanSo();

void main(){
int n;
float s;
printf("Nhap N = ");
scanf("%d",&n);
s=PhanSo(n);
printf("\nS = %f",s);
}

float PhanSo(int n)
{
    if(n>=1)
        return (float)1/(1+PhanSo(n-1));
    else
        return 1;
}

