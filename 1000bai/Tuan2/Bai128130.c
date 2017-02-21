#include<stdio.h>
void main(){
int n,i;
float *p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(float*)calloc(n,sizeof(float));
printf("Nhap mang:\n");
NhapMang(p,n);
printf("Mang ban nhap:\n");
XuatMang(p,n);

}

void NhapMang(float *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("So thu %d\n",i+1);
        scanf("%f",p+i);
    }
}
void XuatMang(float *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%f ",*(p+i));
    }
}

