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

if(*(p+n-1)%2==0)
    printf("GT chan nho nhat lon hon moi gtri trong mag ====>  %d ",*(p+n-1)+2);
else
    printf("GT chan nho nhat lon hon moi gtri trong mag ====>  %d ",*(p+n-1)+1);

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

