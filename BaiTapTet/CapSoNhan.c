#include<stdio.h>
#include<math.h>
void main(){
int x,n,k,i,u,s=0;
printf("Nhap so hang thu 1 va cong boi:\n");
scanf("%d%d",&x,&k);
printf("Nhap so hang can tinh:\n");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        u=x*pow(k,i-1);
        s+=u;
    }
    printf("S[%d]=%d\nU[%d]=%d",n,s,n,u);
}

