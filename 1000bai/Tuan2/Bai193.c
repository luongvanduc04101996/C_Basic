#include<stdio.h>
int main(){
int n,j,*p,s=0;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}

for(j=n-1;j>=0;j--)
{
    if(BaMuK(*(p+j))==1)
    {
        printf("GT thuoc dang 3^k : %d\n",*(p+j));
        s++;
    }
}
if(s==0)
    return 0;
else
    return;
}


int BaMuK(int n)
{
    if(n%3==0&&n!=0)
    {
        if(n==3)
            return 1;
        else
            return BaMuK(n/3);
    }
    else
        return 0;
}

