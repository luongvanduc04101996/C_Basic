#include<stdio.h>
float GiaTriDuongCuoiCung();
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
GiaTriDuongCuoiCung(p,n);
}
float GiaTriDuongCuoiCung(float *p,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
    if(*(p+i)>0)
        {
            return printf("Gtri Duong cuoi cung la = %f",*(p+i));
            break;
        }
    else
        continue;
    }
    return printf("ko co gtri Duong====> tra ve %d",-1);
}





