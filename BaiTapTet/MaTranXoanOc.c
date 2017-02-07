#include<stdio.h>
void main(){
int i,j,b,s=0;
printf("Nhap n:\n");
scanf("%d",&b);
int a[b+1][b+1];
int XoanOc(int n,int a[n+1][n+1],int chay1,int chay3){
    for(j=chay1;j<=chay3;j++)
    {
        s++;
        a[chay1][j]=s;
    }
    for(i=chay1+1;i<=chay3;i++)
    {
        s++;
        a[i][chay3]=s;
    }
    for(j=chay3-1;j>=chay1;j--)
    {
        s++;
        a[chay3][j]=s;
    }
    for(i=chay3-1;i>=chay1+1;i--)
    {
        s++;
        a[i][chay1]=s;
    }
    return 0;
}
if(b%2==1)
{
    for(i=1;i<=b/2;i++)
        {
            XoanOc(b,a,i,b-i+1);
        }
        a[b/2+1][b/2+1]=b*b;
}
else
{
    for(i=1;i<=b/2;i++)
        XoanOc(b,a,i,b-i+1);
}

for(i=1;i<=b;i++)
{
    for(j=1;j<=b;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n\n");
}

}

