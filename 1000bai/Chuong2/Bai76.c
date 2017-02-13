#include<stdio.h>
void main()
{
    int n,i;
    printf("NHap N = ");
    scanf("%d",&n);
    if(HaiMuK(n)==3)
        printf("\n%d la so co dang 3^k",n);
    else
        printf("\n%d khong phai so co dang 3^k",n);
}
int HaiMuK(int n)
{
    if(n%3==0)
    {
        if(n==3)    return n;
        else    return HaiMuK(n/3);
    }
    else
        return n;
}

