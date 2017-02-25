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

printf("Cac so am:\n===>");
for(j=0;j<n;j++)
{
    if(*(p+j)<0)
        printf("%d\t",*(p+j));
}

}
