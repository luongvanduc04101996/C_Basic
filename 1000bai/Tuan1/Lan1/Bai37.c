#include<stdio.h>
#include<math.h>
float CanBacN();

void main(){
int n;
float s;
printf("Nhap N = ");
scanf("%d",&n);
s=(float)CanBacN(n);
printf("\nS = %f",s);
}

float CanBacN(int n)
{
    if(n>=3)
        return (float)pow(n+CanBacN(n-1),(float)1/n);
    else
        return (float)sqrt(2);
}



