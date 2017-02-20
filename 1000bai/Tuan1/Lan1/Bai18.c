#include<stdio.h>
#include<math.h>
void main(){
int x,n,i;
float s=1;
printf("Nhap X va N : ");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
{
    s+=pow(x,(float)(i*2)/GiaiThua(i*2));
}
printf("\nS = %f",s);
}

int GiaiThua(int a)
{
    if(a<=1)    return;
    else    return a*GiaiThua(a-1);
}

