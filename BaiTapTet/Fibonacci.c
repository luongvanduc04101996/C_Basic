//Fibonacci
#include<stdio.h>
void main(){
int n,*p,i;
printf("So phan tu cua day?:\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
//int a[n],*p,i;
//p=a;
*p=*(p+1)=1;
printf("Day Fibonacci:%3d%3d",*(p),*(p+1));
for(i=2;i<n;i++)
{
    *(p+i)=*(p+i-2)+*(p+i-1);
    printf("%3d",*(p+i));
}
}
