//Xoan oc
#include<stdio.h>
void main(){
int n;
printf("Nhap n:\n");
scanf("%d",&n);
int /*a[n][n],*/*p,i,j,dem=1,chay1=0,chay2=n-1;
//p=a;
p=(int*)malloc((n*n)*sizeof(int));
while(dem<=n*n)
{
    for(j=chay1;j<=chay2;j++)
    {
        *(p+(chay1*n)+j)=dem++;
    }
    for(i=chay1+1;i<=chay2;i++)
    {
        *(p+(i*n)+chay2)=dem++;
    }
    for(j=chay2-1;j>=chay1;j--)
    {
        *(p+(chay2*n)+j)=dem++;
    }
    for(i=chay2-1;i>=chay1+1;i--)
    {
        *(p+(n*i)+chay1)=dem++;
    }
    chay1++;
    chay2--;
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",*(p+(i*n)+j));
    }
    printf("\n\n");
}
}
