#include<stdio.h>
void main(){
int n;
printf("Nhap N = ");
scanf("%d",&n);
if(KTraNto(n)==1)
    printf("%d la so Nguyen To",n);
else
    printf("%d ko la so ngto",n);
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

