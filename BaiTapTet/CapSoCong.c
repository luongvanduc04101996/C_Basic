#include<stdio.h>
void main(){
int x,n,k,i,u,s=0;
printf("Nhap so hang thu 1 va cong sai:\n");
scanf("%d%d",&x,&k);
printf("Nhap so hang can tinh:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    u=x+i*k;
    s+=u;
}
printf("S[%d]=%d\nU[%d]=%d",n,s,n,u);

}
