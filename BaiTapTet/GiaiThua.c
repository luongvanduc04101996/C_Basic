#include<stdio.h>
void main(){
int GiaiThua(int a){

    if(a<=1)    return;
    else    return a*GiaiThua(a-1);

}
int a;
printf("Nhap so: ");
scanf("%d",&a);
printf("\nGiai thua = %d",GiaiThua(a));

}
