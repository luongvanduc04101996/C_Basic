#include<stdio.h>
void main(){
int n,j;
float *p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(float*)calloc(n,sizeof(float));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%f",p+j);
}

printf("Vi tri cac gia tri am:\n");
for(j=0;j<n;j++)
    {
        if(*(p+j)<0)
            printf("%d\t",j+1);
    }
}


