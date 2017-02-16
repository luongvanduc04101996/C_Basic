#include<stdio.h>
#include<math.h>
void main(){
float a,b,c;
printf("Nhap a,b,c:\n");
scanf("%f%f%f",&a,&b,&c);
a=fabs(a);
b=fabs(b);
c=fabs(c);
printf("Sau khi tri tuyet doi:\n%f\t%f\t%f",a,b,c);
}
