#include<stdio.h>
void main(){
int so,i;
printf("Nhap so:\n");
scanf("%d",&so);
printf("Cac so chinh phuong nho hon %d:\n",so);
for(i=1;i<so;i++)
{
    if(soChinhPhuong(i)==1)
        printf("%d\t",i);
    else
        continue;
}
}
int soChinhPhuong(int a){
    int i;
    for(i=2;i<=a/2;i++)
    {
    if(i*i==a)
        return 1;
    }
    return 0;
}


