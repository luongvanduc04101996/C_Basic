#include<stdio.h>
#include<math.h>
void main()
{
    int n,x;
    float kq;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("Nhap x:");
    scanf("%d",&x);
    kq=(float)pow(x,(float)1/n);
    printf("\nKet qua: S(x) = %f",(float)kq);
}
