#include<stdio.h>
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
Ktra(p,n);
}
int SoHoanThien(int n)
{
    int i,s=0;
    for(i=1;i<=(n/2);i++)
    {
    if(n%i==0)
        {
            s+=i;
        }
    }
if(s==n)
    return 1;
else return 0;
}

int Ktra(int *p,int n)
{
    int i,*q,k=0,temp=0;
    q=(int*)calloc(n,sizeof(int));
    for(i=n-1;i>=0;i--)
    {
    if(SoHoanThien(*(p+i))==1)
        {
            *(q+k)=*(p+i);
            k++;
        }
    }
    if(k!=0)
    {
        for(i=1;i<k;i++)
        {
            if(*(q+temp)>*(q+i))
                temp=i;
        }
        printf("So hoan thien nho nhat: %d",*(q+temp));
    }
    return -1;
}


