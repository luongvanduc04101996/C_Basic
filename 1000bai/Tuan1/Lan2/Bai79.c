#include<stdio.h>
void main()
{
    int n,dem=1,i=10;
    printf("Nhap N = ");
    scanf("%d",&n);
    printf("\n%d co %d chu so",n,Dem(n,i,dem));
}
int Dem(int n,int i,int dem)
{
    if(n/i>=1)
    {
        return Dem(n,i*10,++dem);
    }
    else return dem;
}

