#include<stdio.h>
void main(){
int n,i,*p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
printf("Nhap mang:\n");
for(i=0;i<n;i++)
{
    scanf("%d",p+i);
}
KTra(p,n);
}
int KTraNto(int n)
{
    int i;
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int KTra(int *p,int n)
{
    int i;
    int a[n],s=0,temp=0;
    for(i=0;i<n;i++)
    {
    if(KTraNto(*(p+i))==1)
        {
            a[s]=*(p+i);
            s++;
        }
    }
    if(s!=0)
    {
        for(i=1;i<s;i++)
        {
           if(a[temp]<a[i])
                temp=i;
        }
        return printf("So ngto lon nhat: %d",a[temp]);

    }
    else
        return -1;
}


