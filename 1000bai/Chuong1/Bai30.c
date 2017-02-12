#include<stdio.h>
void main(){
int n,i,s=0;
printf("Nhap N = ");
scanf("%d",&n);
for(i=1;i<=(n/2);i++)
{
    if(n%i==0)
        {
            s+=i;
        }
}
if(s==n)
    printf("%d la so hoan thien",n);
else
    printf("%d ko phai la so hoan thien");

}






