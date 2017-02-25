#include<stdio.h>
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

for(j=0;j<n;j++)
{
    if(soChinhPhuong(*(p+j))==1)
        printf("%d la so chinh phuong ===> vi tri %d\n",*(p+j),j+1);
}
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


