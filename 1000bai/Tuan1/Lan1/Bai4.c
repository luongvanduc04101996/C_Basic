#include<stdio.h>
void main(){
int i,n;
float s=0;
printf("Nhap N = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=(float)1/(i*2);
}
printf("\nS = %f",s);

}

