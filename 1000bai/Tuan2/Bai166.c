#include<stdio.h>
int main(){
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
    if(HaiMuK(*(p+j))==1)
    {
        return printf("Gia tri dau tien thuoc dang 2^k ===> %d",*(p+j));
    }
}

return 0;

}

int HaiMuK(int n)
{
    if(n%2==0)
    {
        if(n==2)
            return 1;
        else
            return HaiMuK(n/2);
    }
    else
        return 0;
}
