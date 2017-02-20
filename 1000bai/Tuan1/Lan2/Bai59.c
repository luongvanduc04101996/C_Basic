#include<stdio.h>
#include<math.h>
int a[100],temp;
void main()
{
    int n,i,dem=0,daonguoc=0;
    printf("Nhap N = ");
    scanf("%d",&n);
    Dem(n,10,0);
    for ( i=0 ; i<=temp; i++)
    {
            //daonguoc+=a[i]*pow(10,temp-i);
             daonguoc = daonguoc*10+a[i];
    }
    printf("\nSo dao nguoc : %d",daonguoc);
    if(daonguoc==n)
        printf("\n%d la so doi xung",n);
    else
        printf("\n%d khong phai la so doi xung",n);
}
int Dem(int n,int i,int dem)
{
    if(n/i>=1)
    {

            a[dem]=(n-(n/i)*i)/(i/10);
            return Dem(n,i*10,++dem);
    }

    else return a[dem]=n/(i/10),temp=dem;
}



