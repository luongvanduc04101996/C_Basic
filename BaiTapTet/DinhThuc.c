//Dinh thuc ma tran:
#include<stdio.h>
void main(){
int n,*p;
printf("Cap cua ma tran tu 2->4: ");
scanf("%d",&n);
printf("\nMoi ban nhap:\n");
//int a[n][n],*p;
//p=a;
p=(int*)malloc((n*n)*sizeof(int));
NhapMaTran(p,n);
printf("Ma tran ban nhap:\n");
XuatMaTran(p,n);
int det;
if(n==2)
{
    det=*(p)**(p+3)-*(p+1)**(p+2);
}
else if(n==3)
    det=(*(p)**(p+4)**(p+8)+*(p+1)**(p+5)**(p+6)+*(p+2)**(p+3)**(p+7)-*(p+2)**(p+4)**(p+6)-*(p+5)**(p+7)**(p+0)-*(p+8)**(p+1)**(p+3));
else
    det=*p*(*(p+5)**(p+10)**(p+15)+*(p+6)**(p+11)**(p+13)+*(p+7)**(p+9)**(p+14)-*(p+7)**(p+10)**(p+13)-*(p+11)**(p+14)**(p+5)-*(p+15)**(p+9)**(p+6))
        -*(p+1)*(*(p+4)**(p+10)**(p+15)+*(p+6)**(p+11)**(p+12)+*(p+7)**(p+8)**(p+14)-*(p+7)**(p+10)**(p+12)-*(p+11)**(p+14)**(p+4)-*(p+15)**(p+8)**(p+6))
        +*(p+2)*(*(p+4)**(p+9)**(p+15)+*(p+5)**(p+11)**(p+12)+*(p+7)**(p+8)**(p+13)-*(p+7)**(p+9)**(p+12)-*(p+11)**(p+13)**(p+4)-*(p+15)**(p+8)**(p+5))
        -*(p+3)*(*(p+4)**(p+9)**(p+14)+*(p+5)**(p+10)**(p+12)+*(p+6)**(p+8)**(p+13)-*(p+6)**(p+9)**(p+12)-*(p+10)**(p+13)**(p+4)-*(p+14)**(p+8)**(p+5));
printf("\nDinh thuc cua ma tran:\n Det(A)=%d ",det);
}
void NhapMaTran(int *p, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d]=",i+1,j+1);
            scanf("%d",p+(i*n)+j);
        }
    }
}
void XuatMaTran(int *p,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(p+(i*n)+j));
        }
        printf("\n");
    }
}
