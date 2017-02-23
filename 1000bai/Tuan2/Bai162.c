#include<stdio.h>

float LienKe();

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
LienKe(p,n);
}

float LienKe(float *p,int n)
{
    int i;
    for(i=1;i<n-1;i++)
    {
        if(*(p+i)==*(p+i-1)**(p+i+1))
        {
            return printf("tich 2 gia tri lan can bang chinh no: %f ==> Vi tri thu %d",*(p+i),i+1);
        }
    }
    return -1;
}

