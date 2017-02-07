//Tam giac pascal;
#include<stdio.h>
void main(){
 int n,i,j,phu,phu1;
 printf("Nhap n = ");
 scanf("%d",&n);
 int /*a[(1+n)*n/2],*/*p;
 //p=a;
 p=(int*)malloc(((1+n)*n/2)*sizeof(int));
 Pascal(p,n);
 printf("Day so Pascal:\n");
 for(i=0;i<n;i++)
 {
     phu=((i+1)*(float)i/2);
     phu1=((i)*(float)(i-1)/2);
     printf("%d\t",*(p+phu));
     for(j=1;j<=i;j++)
     {
         printf("%d\t",*(p+phu+j));
     }
     printf("\n");
 }
}
void Pascal(int *p,int n)
{
    int i,j,phu,phu1;
    for(i=0;i<n;i++)
    {
        phu=((i+1)*(float)i/2);
        phu1=((i)*(float)(i-1)/2);
        *(p+phu)=1;
        *(p+phu+i)=1;
        for(j=1;j<i;j++)
        {
            //if(i!=j)
            *(p+phu+j)=*(p+phu1+j)+*(p+phu1+j-1);
            //else
            //*(p+phu+j)=1;

        }
    }
}

