#include<stdio.h>
int GiaTriChanCuoiCung();
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
GiaTriChanCuoiCung(p,n);

}
int GiaTriChanCuoiCung(int *p,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
    if(*(p+i)%2==0)
        {
            return printf("Gia tri chan cuoi cung: %d",*(p+i));
            break;
        }
    }
    return -1;
}
