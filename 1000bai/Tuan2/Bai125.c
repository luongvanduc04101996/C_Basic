#include<stdio.h>
void main(){
int n,i,*p,s=0;
printf("Nhap so phan tu:\n");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
printf("Nhap mang:\n");

for(i=0;i<n;i++)
{
    scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
    if(KTraNto(*(p+i))==1&&*(p+i)<100)
        {
            printf("%d\t",*(p+i));
            ++s;
        }
    else
        continue;
}
printf("\nco %d so nguyen to nho hon 100",s);
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


