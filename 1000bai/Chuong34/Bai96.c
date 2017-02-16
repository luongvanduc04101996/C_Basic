#include<stdio.h>
#include<math.h>
void main(){
float x;
printf("Nhap X = ");
scanf("%f",&x);
if(x>=5)
{
    printf("F(x)=%f",2*pow(x,2)+5*x+9);
}
else
{
    printf("F(x)=%f",-2*pow(x,2)+4*x-9);
}
}
