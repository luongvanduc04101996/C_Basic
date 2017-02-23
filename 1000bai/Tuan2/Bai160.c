#include<stdio.h>

float GTriAm();

void main(){
int n,i;
float *p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(float*)calloc(n,sizeof(float));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%f",p+i);
}
GTriAm(p,n);
}

float GTriAm(float *p,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(*(p+i)<0)
        {   if(*(p+i)>-1)
                return printf("GT am cuoi cung lon hon -1 la: %f",*(p+i));
        }
    }
    return -1;
}
