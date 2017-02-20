#include<stdio.h>
void main(){
int n,i,s=0;
printf("Nhap N = ");
scanf("%d",&n);
printf("Uoc So cua %d la: \n",n);
for(i=1;i<=(n/2);i++)
{
    if(n%i==0)
        {
            s++;
            printf("%d ",i);
        }
}
printf("\n\nCo %d uoc so",s);

}






