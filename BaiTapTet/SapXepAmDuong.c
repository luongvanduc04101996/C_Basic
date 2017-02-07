//sap xep am duong:
#include<stdio.h>
void main(){
int n,i,*p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
//int a[n],*p;
//p=a;
p=(int*)malloc(n*sizeof(int));
NhapMang(p,n);
printf("Mang ban nhap: ");
XuatMang(p,n);
int am=0,duong=0;
for(i=0;i<n;i++)
{
    if(*(p+i)<0) am++;
    else duong++;
}
int /*am1[am],duong1[duong],*/*aa,*d,dema=-1,demd=-1;
//aa=am1; d=duong1;
aa=(int*)malloc(am*sizeof(int));
d=(int*)malloc(duong*sizeof(int));
for(i=0;i<n;i++)
{
    if(*(p+i)<0)
    {
        dema++;
        *(aa+dema)=*(p+i);
    }
    else
    {
        demd++;
        *(d+demd)=*(p+i);
    }

}
printf("\n Mang am: ");
XuatMang(aa,am);
printf("\n Mang duong: ");
XuatMang(d,duong);
}
void NhapMang(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("So thu %d\n",i+1);
        scanf("%d",p+i);
    }
}
void XuatMang(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
