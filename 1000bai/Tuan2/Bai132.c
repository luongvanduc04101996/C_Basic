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
printf("Cac gia tri chan:\n");
for(j=0;j<n;j++)
    {
        if(*(p+j)%2==0)
            printf("%d\t",*(p+j));
    }

}

