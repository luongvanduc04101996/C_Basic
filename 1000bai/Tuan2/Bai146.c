#include<stdio.h>
float GiaTriAmDauTien();
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
GiaTriAmDauTien(p,n);
}
float GiaTriAmDauTien(float *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(*(p+i)<0)
        {
            return printf("Gtri am dau tien la = %f",*(p+i));
            break;
        }
    }
    return printf("ko co gtri am====> tra ve %d",-1);
}




