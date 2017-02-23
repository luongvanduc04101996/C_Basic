#include<stdio.h>
void main(){
int n,j,temp=0;
float *p;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(float*)calloc(n,sizeof(float));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%f",p+j);
}


for(j=1;j<n;j++)
    {
        if(*(p+j)<*(p+temp))
            temp=j;
    }
printf("GTNN la %f vi tri %d",*(p+temp),temp+1);
}


