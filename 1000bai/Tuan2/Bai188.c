#include<stdio.h>
void main(){
int n,j,s=0,*p,temp1;
printf("Nhap so phan tu:\n");
scanf("%d",&n);

int temp[n];
p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}

for(j=0;j<n;j++)
{
    if(*(p+j)%2==0)
    {
        temp[s]=*(p+j);
        s++;
    }
}

temp1=temp[0];
for(j=1;j<s;j++)
{
    if(temp1<temp[j])
    {
        temp1=temp[j];
    }
}
printf("GT chan lon nhat la : ===> %d\nVi tri thu:",temp1);
for(j=0;j<n;j++)
{
    if(*(p+j)==temp1)
        printf("%d\t",j+1);
}
}

