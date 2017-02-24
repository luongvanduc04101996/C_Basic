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
    int temp,a[10];
    temp=*(p+j);
    while(temp!=0)
    {
        if(temp%2==1)
        {
            if(temp<10)
                return printf("GTLN co toan chu so le ===> %d",*(p+j));
            else
                temp/=10;
        }
        else
            break;
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
