#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,s=0;
    printf("NHap N = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=pow(i,3);
    }
    printf("\n S(%d) = %d",n,s);
}
