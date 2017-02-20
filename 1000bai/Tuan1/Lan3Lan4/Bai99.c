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
        printf("==>Gtri giam dan: %f\t%f\t%f",max,b,a);
    }
    else
    {
        if(c>a)
            printf("==>Gtri giam dan: %f\t%f\t%f",max,c,a);
        else
            printf("==>Gtri giam dan: %f\t%f\t%f",max,a,c);
    }

}
else
{
    if(c>max)
    {
        max=c;
        printf("==>Gtri giam dan: %f\t%f\t%f",max,a,b);
    }
    else
    {
        if(b>c)
            printf("==>Gtri giam dan: %f\t%f\t%f",max,b,c);
        else
            printf("==>Gtri giam dan: %f\t%f\t%f",max,c,b);
    }
}
}
