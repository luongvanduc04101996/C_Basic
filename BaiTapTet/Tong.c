//Tong s=1+..+1/n
#include<stdio.h>
void main(){
int n;
printf("Nhap n=\n");
scanf("%d",&n);
int i;
float s=0;
for(i=1;i<=n;i++)
{
    s+=(float)1/i;
}
printf("S=%.2f",s);

}
