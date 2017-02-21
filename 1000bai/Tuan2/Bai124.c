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

if(KiemTra(p,n)==1)
    printf("Ton tai");
else
    printf("Khong co");

}

int KiemTra(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
        {
            if(*(p+i)<2004)
            return 1;
        }
    }
    return 0;
}

