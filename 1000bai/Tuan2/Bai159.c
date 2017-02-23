#include<stdio.h>

float GTLH2003();

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
GTLH2003(p,n);
}

float GTLH2003(float *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>2003)
            return printf("GT lon hon 2003 dau tien: %f",*(p+i));

    }
    return -1;
}
