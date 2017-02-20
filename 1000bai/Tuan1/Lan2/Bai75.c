#include<stdio.h>
void main()
{
    int n,i;
    printf("NHap N = ");
    scanf("%d",&n);
    if(HaiMuK(n)==2)
        printf("\n%d la so co dang 2^k",n);
    else
        printf("\n%d khong phai so co dang 2^k",n);
}
int HaiMuK(int n)
{
    if(n%2==0)
    {
        if(n==2)    return n;
        else    return HaiMuK(n/2);
    }
    else
        return n;
}
