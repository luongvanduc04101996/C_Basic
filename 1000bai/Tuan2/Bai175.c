#include<stdio.h>
void main(){
int n,i,s=0;
float *p,temp,temp1;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(float*)calloc(n,sizeof(float));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%f",p+i);
}

SapXep(p,n);

temp=*(p+s+1)-*(p+s);
for(i=1;i<n-1;i++)
{
    temp1=*(p+i+1)-*(p+i);
    if(temp>temp1)
    {
        temp=temp1;
        s=i;
    }
}
printf("Cap gan nhau nhat:\n===> (%f,%f)",*(p+s),*(p+s+1));
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



