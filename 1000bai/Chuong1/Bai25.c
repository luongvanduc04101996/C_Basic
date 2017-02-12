#include<stdio.h>
void main(){
int n,i;
printf("Nhap N = ");
scanf("%d",&n);
printf("Uoc So Chan cua %d la: \n",n);
for(i=1;i<=(n/2);i++)
{
    if(n%i==0)
        {
            if(i%2==0)
            printf("%d ",i);
        }
}


}







