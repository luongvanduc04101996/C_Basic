#include<stdio.h>
#include<math.h>
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
SapXep(p,n);
if(fabs(*p)>fabs(*(p+n-1)))
    if(*p<0)
        printf("Doan can tim: \n\t[%f,%f]",*p,-*p);
    else
        printf("Doan can tim: \n\t[%f,%f]",-*p,*p);
else
    printf("Doan can tim: \n\t[%f,%f]",-*(p+n-1),*(p+n-1));
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

