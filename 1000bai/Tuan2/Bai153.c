#include<stdio.h>
int GiaTriChanDauTien();
void main(){
int n,j,*p;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}
GiaTriChanLonNhat(p,n);

}
int GiaTriChanLonNhat(int *p,int n)
{
    int i,a[n],temp=0,s=0;
    for(i=0;i<n;i++)
    {
    if(*(p+i)%2==0)
        {
            a[s]=*(p+i);
            s++;
        }
    }
    if(s!=0)
    {
        for(i=1;i<n;i++)
        {
            if(a[temp]>a[i])
                temp=i;
        }
        return printf("Gia tri chan nho nhat: %d",a[temp]);
    }
    else
        return -1;
}



