#include<stdio.h>
#include<math.h>
void main(){
int chon;
printf("Nhap 1 de tinh cv,dt hinh tam giac\nNhap 2 de tinh cv,dt hinh vuong\nNhap 3 de tinh cv,dt hinh chu nhat\nNhap 4 de tinh cv,dt hinh tron");
printf("\nMoi ban chon chuc nang:\n");
scanf("%d",&chon);
switch(chon){
case 1:
    {
    int a,b,c,chuVi;
    float nuaChuVi,dienTich;
    printf("Nhap 3 canh cua tam giac:\n");
    scanf("%d%d%d",&a,&b,&c);
    chuVi=a+b+c;
    nuaChuVi=chuVi/2;
    dienTich=sqrt(nuaChuVi*(nuaChuVi-a)*(nuaChuVi-b)*(nuaChuVi-c));
    printf("Chu vi: %d\nDien tich: %f",chuVi,dienTich);
    break;
    }
case 2:
    {
    float canh,chuVi,dienTich;
    printf("Nhap canh cua hinh vuong: \n");
    scanf("%f",&canh);
    chuVi=4*canh;
    dienTich=canh*canh;
    printf("Chu vi: %.2f\nDien tich: %.2f",chuVi,dienTich);
    break;
    }
case 3:
    {
    int chieuDai,chieuRong;
    printf("Nhap chieu dai va chieu rong:\n");
    scanf("%d%d",&chieuDai,&chieuRong);
    printf("Chu vi:%d\nDien tich:%d",(chieuDai+chieuRong)*2,chieuDai*chieuRong);
    break;
    }
case 4:
    {
    float r,pi,chuVi,dienTich;
    pi=3.14;
    printf("Nhap ban kinh duong tron: \n");
    scanf("%f",&r);
    chuVi=2*pi*r;
    dienTich=pi*r*r;
    printf("Chu vi: %.2f\nDien tich: %0.2f",chuVi,dienTich);
    break;
    }
default:
    printf("Ban nhap sai roi");
}
}
