#include<stdio.h>

float GanX(float *p,int temp,float x,int n);

void main(){
int n,i;
float *p,x;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(float*)calloc(n,sizeof(float));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%f",p+i);
}

printf("Nhap gia tri x:\n");
scanf("%f",&x);
SapXep(p,n);
GanX(p,0,x,n-1);

}
float GanX(float *p,int temp,float x,int n)
{
    if(*(p+temp)>x)
    {
        return printf("Gan X nhat la:%f",*(p+temp));
    }
    else
    {
        if(*(p+n)<x)
            return printf("Gan X nhat la:%f",*(p+n));
        else
        {
            return GanX(p,temp+1,x,n-1);
        }
    }
}
void SapXep(float *p,int n)
{
    int i,j,chot;
    float temp;
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


