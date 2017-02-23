#include<stdio.h>
int GiaTriChanDauTien();
void main(){
int n,j,*p;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}
GiaTriChanDauTien(p,n);

}
int GiaTriChanDauTien(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(*(p+i)%2==0)
        {
            return printf("Gia tri chan dau tien: %d",*(p+i));
            break;
        }
    }
    return -1;
}

