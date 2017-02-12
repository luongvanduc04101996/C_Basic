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
    if(n>=2)
        return (float)pow(GiaiThua(n)+CanBacN(n-1),(float)1/(n+1));
    else
        return (float)sqrt(1);
}

int GiaiThua(int n)
{
    if(n>=2)    return n*GiaiThua(n-1);
    else return;
}



