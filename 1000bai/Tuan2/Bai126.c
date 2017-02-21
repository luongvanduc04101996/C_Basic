#include<stdio.h>
void main(){
int n,i;
float *p,s=0;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(float*)calloc(n,sizeof(float));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%f",p+i);
}
for(i=0;i<n;i++)
{
    if(*(p+i)<0)
        s+=*(p+i);
    else
        continue;
}
printf("Tong cac gia tri am:\nS = %f",s);

}
