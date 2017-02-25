#include<stdio.h>
void main(){
int n,i;
float *p,temp;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(float*)calloc(n,sizeof(float));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%f",p+i);
}

temp=*(p);
for(i=1;i<n;i++)
{
    if(temp<*(p+i))
    {
        temp=*(p+i);
    }
}
printf("cac vi tri co GTLN:\n");
for(i=0;i<n;i++)
{
    if(*(p+i)==temp)
    {
        printf("%f vi tri thu %d\n",*(p+i),i+1);
    }
}
}


