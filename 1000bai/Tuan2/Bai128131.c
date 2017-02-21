#include<stdio.h>
void main(){
int n,i,*p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
printf("Nhap mang:\n");
NhapMang(p,n);
printf("Mang ban nhap:\n");
XuatMang(p,n);

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

