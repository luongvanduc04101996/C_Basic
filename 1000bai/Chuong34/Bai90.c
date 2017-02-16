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
        if(s>=n)
        {
            i--;
            printf("Gia tri M = %d",i);
            break;
        }
    }
}


