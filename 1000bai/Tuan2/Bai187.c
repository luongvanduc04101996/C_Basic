#include<stdio.h>
void main(){
int n,j,s=0;
float *p,temp1;
printf("Nhap so phan tu:\n");
scanf("%d",&n);

float temp[n];
p=(float*)calloc(n,sizeof(float));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%f",p+j);
}

for(j=0;j<n;j++)
{
    if(*(p+j)>0)
    {
        temp[s]=*(p+j);
        s++;
    }
}

temp1=temp[0];
for(j=1;j<s;j++)
{
    if(temp1>temp[j])
    {
        temp1=temp[j];
    }
}
printf("GTNN la : ===> %f\nVi tri thu:",temp1);
for(j=0;j<n;j++)
{
    if(*(p+j)==temp1)
        printf("%d\t",j+1);
}
}

