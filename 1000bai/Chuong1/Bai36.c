#include<stdio.h>
#include<math.h>
float CanBacHai();

void main(){
int n;
float s;
printf("Nhap N = ");
scanf("%d",&n);
s=(float)CanBacHai(n);
printf("\nS = %f",s);
}

float CanBacHai(int n)
{
    if(n>=2)
        return sqrt((float)GiaiThua(n)+CanBacHai(n-1));
    else
        return (float)sqrtf(1);
}

int GiaiThua(int n)
{
    if(n>=2)    return n*GiaiThua(n-1);
    else return;
}
