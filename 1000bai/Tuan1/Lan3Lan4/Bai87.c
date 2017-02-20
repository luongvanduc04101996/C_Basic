#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,s=0,temp;
    printf("NHap N = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=i;
        if(s>10000)
        {
            i--;
            printf("Gia tri N = %d",i);
            break;
        }
    }
    if(s<10000)
        printf("S(%d) < 10000",n);
}

