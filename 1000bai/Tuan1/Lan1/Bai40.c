#include<stdio.h>
#include<math.h>
float CanBacHai();

void main(){
int n,x;
float s;
printf("Nhap N va X : ");
scanf("%d%d",&n,&x);
s=(float)CanBacHai(n,x);
printf("\nS = %f",s);
}

float CanBacHai(int n,int x)
{
    if(n>=2)
        return sqrt((float)pow(x,n)+CanBacHai(n-1,x));
    else
        return (float)sqrtf(x);
}

