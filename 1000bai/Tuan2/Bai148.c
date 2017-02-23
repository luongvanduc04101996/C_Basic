#include<stdio.h>
void main(){
int n,i,*p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%d",p+i);
}
KTraNguyenToCuoi(p,n);
}
int KTraNto(int n)
{
    int i;
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int KTraNguyenToCuoi(int *p,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
    if(KTraNto(*(p+i))==1)
        {
            return printf("So nguyen to cuoi cung %d",*(p+i));
            break;
        }
    }
    return -1;
}



