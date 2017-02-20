#include<stdio.h>
void main(){
float a,b;
printf("Nhap a,b:\n");
scanf("%f%f",&a,&b);
if(a>=0)
{
    if(b>=0)
        printf("2 so cung dau");
    else
        printf("2 so khac dau");
}
else
{
    if(b<0)
        printf("2 so cung dau");
    else
        printf("2 so khac dau");
}
}
