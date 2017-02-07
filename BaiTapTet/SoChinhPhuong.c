#include<stdio.h>
void main(){
int so,i;
printf("Nhap so:\n");
scanf("%d",&so);
int soChinhPhuong(int a){
    for(i=2;i<=a/2;i++)
    {
    if(i*i==a)
        return 1;
    }
}
if(soChinhPhuong(so)==1)
    printf("%d la so chinh phuong",so);
else
    printf("%d khong la so chinh phuong",so);
}
