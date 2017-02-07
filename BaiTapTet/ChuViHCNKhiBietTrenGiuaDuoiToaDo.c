#include<stdio.h>
#include<math.h>
void main(){
float DuongThang(float a1,float a2,float b1,float b2){
    return ((a1*(a2-b2))/(b1-a1))+a2;
}
float a1,a2,b1,b2,c1,c2,d1,d2,e1,e2;
float a,b,c,d,aB,cD,bE,aE;
printf("Nhap toa do tren A(a1,a2),giua E(e1,e2), duoi B(b1,b2):\n");
scanf("%f%f%f%f%f%f",&a1,&a2,&e1,&e2,&b1,&b2);
c1=e1*2-a1;
c2=e2*2-a2;
d1=b1;
d2=b2;
aB=sqrt(pow(b1-a1,2)+pow(b2-a2,2));
cD=sqrt(pow(d1-c1,2)+pow(d2-c2,2));
bE=sqrt(pow(e1-b1,2)+pow(e2-b2,2));
aE=sqrt(pow(e1-a1,2)+pow(e2-a2,2));
if(aE==bE)
{
    if(b1==c1&&b2==c2)
        printf("\n3 toa do ban cho thang hang voi nhau");
    else
        printf("\nChu vi 4 hinh chu nhat con la: %f",(aB+cD));
}
else
{
    printf("3 toa do ban cho khong the tao thanh hinh chu nhat");
}
}

