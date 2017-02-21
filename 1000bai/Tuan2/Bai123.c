#include<stdio.h>
void main(){
int n,j,*p,temp=0;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}


for(j=1;j<n;j++)
    {
        if(*(p+j)<*(p+temp))
            temp=j;
    }
printf("GTNN la %d vi tri %d",*(p+temp),temp+1);
}

