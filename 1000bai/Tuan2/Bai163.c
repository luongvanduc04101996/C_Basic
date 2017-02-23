#include<stdio.h>
void main(){
int n,j,*p,x,y;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}
KiemTra(p,n);
}
int KiemTra(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(soChinhPhuong(*(p+i))==1)
            return printf("So chinh phuong dau tien trong mang : %d",*(p+i));
    }
    return -1;
}
int soChinhPhuong(int a){
    int i;
    for(i=2;i<=a/2;i++)
    {
    if(i*i==a)
        return 1;
    }
    return 0;
}

