#include<stdio.h>
float GiaTriAmLonNhat();
void main(){
int n,i;
float *p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(float*)calloc(n,sizeof(float));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%f",p+i);
}
GiaTriAmLonNhat(p,n);
}
float GiaTriAmLonNhat(float *p,int n)
{
    int i,j,k=0,temp=0;
    float a[n];
    for(i=0;i<n;i++)
    {
        if(*(p+i)<0)
        {
            a[k]=*(p+i);
            k++;
        }
    }
    if(k!=0)
    {
        for(i=1;i<k;i++)
        {
            if(a[i]>a[temp])
            {
                temp=i;
            }

        }
        return printf("GT am lon nhat %f",a[temp]);
    }
    else
        return printf("Ko co gia tri am===>Tra ve %d",-1);
}





