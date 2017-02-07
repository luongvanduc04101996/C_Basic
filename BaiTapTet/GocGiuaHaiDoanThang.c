#include<stdio.h>
#include<math.h>
void main(){
int DuongThang(int a1,int a2,int b1,int b2){
    return (float)(((a1*(a2-b2))/(b1-a1))+a2);
}
int a1,a2,b1,b2,c1,c2,d1,d2;
float a,b,c,d,aB,cD;
printf("Nhap toa do A(a1,a2),B(b1,b2),C(c1,c2),D(d1,d2):\n");
scanf("%d%d%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2);
aB=sqrt(pow(b1-a1,2)+pow(b2-a2,2));
cD=sqrt(pow(d1-c1,2)+pow(d2-c2,2));
if(a1!=b1)
{
    if(c1!=d1)
    {
        a=DuongThang(a1,a2,b1,b2);
        b=DuongThang(c1,c2,d1,d2);
        c=((b2-a2)/(b1-a1));
        d=((d2-c2)/(d1-c1));
        if(c==d)
            if(a!=b)
                printf("AB va CD song song voi nhau");
            else
                printf("AB va CD trung nhau");
        else
                printf("Goc giua 2 doan thang AB va CD la:%0.2f do",(cos(((b1-a1)*(d1-c1)+(b2-a2)*(d2-c2))/(aB*cD))*57)+1,67);

    }
    else
    {
        a=DuongThang(a1,a2,b1,b2);
        c=((b2-a2)/(b1-a1));
        printf("Goc giua 2 doan thang AB va CD la:%0.2f do",(cos(((b1-a1)*(d1-c1)+(b2-a2)*(d2-c2))/(aB*cD))*57)+1.67);

    }
}
else
{
    if(c1!=d1)
    {
        b=DuongThang(c1,c2,d1,d2);
        d=((d2-c2)/(d1-c1));
        printf("Goc giua 2 doan thang AB va CD la:%0.2f do",(cos(((b1-a1)*(d1-c1)+(b2-a2)*(d2-c2))/(aB*cD))*57)+1.67);

    }
     else if(c1==a1)
            printf("AB va CD trung nhau");
          else
            printf("AB va CD song song");

}
}




