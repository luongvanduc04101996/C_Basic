#include<stdio.h>
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
SapXep(p,n);
printf("\nGTNN = %f",*p);
}
void SapXep(float *p,int n)
{
    int i,j,chot,temp;
    for(i=0;i<n-1;i++)
    {
        chot =i;
        for(j=i+1;j<n;j++)
        {
            if(*(p+chot)>*(p+j))
            chot =j;
        }
        temp=*(p+i);
        *(p+i)=*(p+chot);
        *(p+chot)=temp;
    }
}

