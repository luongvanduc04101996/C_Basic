#include<stdio.h>
void main(){
float a,b,c,max;
printf("Nhap a,b,c:\n");
scanf("%f%f%f",&a,&b,&c);
max=a;
if(b>max)
{
    max=b;
    if(c>max)
    {
        max=c;
        printf("Max = %f",max);
    }
    else
        printf("Max = %f",max);
}
else
{
    if(c>max)
    {
        max=c;
        printf("Max = %f",max);
    }
    else
        printf("Max = %f",max);
}
}
