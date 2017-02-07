#include<stdio.h>
#include<math.h>
void main(){
int chon;
int a1,a2,b1,b2,c1,c2;
printf("Nhap 1 de tinh cv,dt hinh tam giac\nNhap 2 de tinh cv,dt hinh vuong\nNhap 3 de tinh cv,dt hinh chu nhat\nNhap 4 de tinh cv,dt hinh tron");
printf("\nMoi ban chon chuc nang:\n");
scanf("%d",&chon);
switch(chon){
case 1:
    {
    float chuVi,nuaChuVi,dienTich;
    printf("Nhap toa do 3 dinh cua tam giac theo thu tu A(a1,a2),B(b1,b2),C(c1,c2):\n");
    scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
    chuVi=sqrt(pow(b1-a1,2)+pow(b2-a2,2))+sqrt(pow(c1-a1,2)+pow(c2-a2,2))+sqrt(pow(c1-b1,2)+pow(c2-b2,2));
    nuaChuVi=chuVi/2;
    dienTich=sqrt(nuaChuVi*(nuaChuVi-sqrt(pow(b1-a1,2)+pow(b2-a2,2)))*(nuaChuVi-sqrt(pow(c1-a1,2)+pow(c2-a2,2)))*(nuaChuVi-sqrt(pow(c1-b1,2)+pow(c2-b2,2))));
    printf("Chu vi: %d\nDien tich: %f",chuVi,dienTich);
    break;
    }
case 2:
    {
    float canh,chuVi,dienTich;
    printf("Nhap 2 toa do dinh lien ke cua hinh vuong A(a1,a2) va B(b1,b2): \n");
    scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
    canh=sqrt(pow(b1-a1,2)+pow(b2-a2,2));
    chuVi=4*canh;
    dienTich=canh*canh;
    printf("Chu vi: %.2f\nDien tich: %.2f",chuVi,dienTich);
    break;
    }
case 3:
    {
    int chieuDai,chieuRong;
    printf("Nhap 3 toa do dinh lien ke cua hinh chu nhat A(a1,a2) va B(b1,b2) va C(c1,c2): \n");
    scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
    printf("Chu vi:%d\nDien tich:%d",(sqrt(pow(b1-a1,2)+pow(b2-a2,2))+sqrt(pow(c1-b1,2)+pow(c2-b2,2)))*2,sqrt(pow(b1-a1,2)+pow(b2-a2,2))*sqrt(pow(c1-b1,2)+pow(c2-b2,2)));
    break;
    }
case 4:
    {
    float r,pi,chuVi,dienTich;
    pi=3.14;
    printf("Nhap tam va 1 diem thuoc duong tron I(a1,a2) va B(b1,b2): \n");
    scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
    r=sqrt(pow(b1-a1,2)+pow(b2-a2,2));
    chuVi=2*pi*r;
    dienTich=pi*r*r;
    printf("Chu vi: %.2f\nDien tich: %0.2f",chuVi,dienTich);
    break;
    }
default:
    printf("Ban nhap sai roi");
}
}

