#include<stdio.h>
#include<math.h>
void main(){
int x,n,i;
float s=0;
printf("Nhap X va N : ");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
{
    s+=pow(x,(float)i/Tong(i));
}
printf("\nS = %f",s);
}
int Tong (int a){
int i,s=0;
for(i=1;i<=a;i++)
{
    s+=i;
}
return s;
}
