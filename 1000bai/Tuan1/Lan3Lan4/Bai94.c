#include<stdio.h>
void main(){
int i,s=0;
printf("Cac so nguyen duong le nho hon 100 tru (5,7,93) la : \n");
for(i=1;i<100;i++)
{
    if(i==5|i==7|i==93)
        continue;
    if(i%2==1)
    {
        printf("%d  ",i);
    }
}
}


