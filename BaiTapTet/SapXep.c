//Sap xep day so
#include<stdio.h>
void main(){
int n,i;
printf("Nhap so ptu:\n");
scanf("%d",&n);
int *p;
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    printf("a[%d]",i+1);
    scanf("%d",p+i);
}

SapXep(n,p);
printf("Day tang dan:\n");
for(i=0;i<n;i++)
    printf("%3d",*(p+i));
}
void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void SapXep(int n,int *p)
{
    int i,j,khoa,temp;
    for(i=0;i<n-1;i++)
    {
            khoa=i;
            for(j=i+1;j<n;j++)
            {
                if(*(p+khoa)>*(p+j)) khoa=j;
            }
            Swap((p+i),(p+khoa));

    }

}


