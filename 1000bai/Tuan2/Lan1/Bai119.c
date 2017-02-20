#include<stdio.h>
void main(){
int n,i;
printf("Nhap N = ");
scanf("%d",&n);
printf("Cac so ngto nho hon %d\n",n);
for(i=1;i<n;i++)
{
    if(KTraNto(i)==1)
        printf("%d\t",i);
    else
        continue;
}
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

