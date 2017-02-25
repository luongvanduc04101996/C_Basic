#include<stdio.h>
void main(){
int n,j,s;
float *p,temp;
printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(float*)calloc(n,sizeof(float));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%f",p+j);
}

for(j=0;j<n;j++)
{
    if(*(p+j)<0)
    {
        temp=*(p+j);
        s=j;
        break;
    }

}
for(j=s+1;j<n;j++)
{
    if(temp==*(p+j))
    {
        printf("%f la so am bang so am dau tien ===> vi tri %d\n",*(p+j),j+1);
    }
}
}
