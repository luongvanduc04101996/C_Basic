#include<stdio.h>
int a[100],temp;
void main()
{
    int n,i,dem=0;
    printf("Nhap N = ");
    scanf("%d",&n);
    Dem(n,10,0);
    printf("\nCac chu so la:\n");
    for ( i=temp ; i>=0; i--)
    {
        printf("%d\t",a[i]);

    }
    printf("\n\nChu so dau tien cua %d la: %d ",n,a[temp]);


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

