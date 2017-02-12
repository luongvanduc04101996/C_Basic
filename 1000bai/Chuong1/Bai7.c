#include<stdio.h>
void main(){
int i,n;
float s=0;
printf("Nhap N = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=(float)i/(i+1);
}
printf("\nS = %f",s);

}



