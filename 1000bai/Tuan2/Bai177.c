#include<stdio.h>
void main(){
int n,j;
float *p,x,y;
printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(float*)calloc(n,sizeof(float));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%f",p+j);
}
printf("Nhap [X,Y] = ");
scanf("%f%f",&x,&y);

printf("Cac so thuoc doan [X,Y]:\n");
for(j=0;j<n;j++)
{
    if(*(p+j)>=x&&*(p+j)<=y)
        printf("%f\t",*(p+j));
}

}
