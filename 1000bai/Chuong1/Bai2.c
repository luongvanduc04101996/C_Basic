#include<stdio.h>
#include<math.h>
void main(){
int i,n,s=0;
printf("Nhap N = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=pow(i,2);
}
printf("\nS = %d",s);

}
