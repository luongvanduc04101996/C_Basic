#include<stdio.h>
int main(){
int n,j,*p;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}

SapXep(p,n);

for(j=n-1;j>=0;j--)
{
    if(NamMuK(*(p+j))==1)
    {
        return printf("GTLN thuoc dang 5^k ===> %d",*(p+j));
    }
}

return 0;
}


void SapXep(int *p,int n)
{
    int i,j,chot,temp;
    for(i=0;i<n-1;i++)
    {
        chot =i;
        for(j=i+1;j<n;j++)
        {
            if(*(p+chot)>*(p+j))
            chot =j;
        }
        temp=*(p+i);
        *(p+i)=*(p+chot);
        *(p+chot)=temp;
    }
}

int NamMuK(int n)
{
    if(n%5==0)
    {
        if(n==5)
            return 1;
        else
            return NamMuK(n/5);
    }
    else
        return 0;
}
