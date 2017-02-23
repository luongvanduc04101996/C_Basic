#include<stdio.h>
float GiaTriDuongDauTien();
void main(){
int n,i;
float *p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(float*)calloc(n,sizeof(float));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%f",p+i);
}
SapXep(p,n);
GiaTriDuongDauTien(p,n);
}
void SapXep(int *p,int n)
{
    int i,j,chot,temp;
    for(i=0;i<n-1;i++)
    {
        chot =i;
        for(j=i+1;j<n;j++)
        {
            if(*(p+chot)>*(p+j))
            chot =j;
        }
        temp=*(p+i);
        *(p+i)=*(p+chot);
        *(p+chot)=temp;
    }
}
float GiaTriDuongDauTien(float *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(*(p+i)>0)
        {
            return printf("Gtri duong nho nhat %f",*(p+i));
            break;
        }
    }
    return printf("ko co gtri duong====> tra ve %d",-1);
}


