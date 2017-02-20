#include<stdio.h>
void main(){
int n;
printf("Nhap thang:\n");
scanf("%d",&n);
switch(n)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    {
        printf("Thang %d co 31 ngay",n);
        break;
    }
case 2:
case 4:
case 6:
case 9:
case 11:
    {
        printf("Thang %d co 30 ngay",n);
        break;
    }
default:
    {
        printf("Khong co thang %d",n);
        break;
    }
}
}
