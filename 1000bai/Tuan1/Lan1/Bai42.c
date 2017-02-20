#include<stdio.h>
void main(){
int n,i,k;
printf("Nhap N ");
scanf("%d",&n);
int s=0;
for(i=1;i<(n/2);i++)
{
        s+=i;
        k=i;
        if(s>n)
        {
            s-=k;
            k--;
            break;
        }

}
printf("\nS(k) = %d và k = %d",s,k);
}
