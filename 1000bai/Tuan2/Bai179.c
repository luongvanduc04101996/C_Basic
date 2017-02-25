#include<stdio.h>
#include<math.h>
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

printf("Cac so lon hon gia tri tuyet doi lien sau no:\n");
for(j=0;j<n-1;j++)
{
    if(*(p+j)>abs(*(p+j+1)))
        printf("%d\t",*(p+j));
}

}

