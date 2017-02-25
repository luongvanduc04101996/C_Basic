#include<stdio.h>

void main(){
int n,j,*p,x,y;
printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}

printf("Nhap doan [X,Y]:\n");
scanf("%d%d",&x,&y);

printf("Cac so chan thuoc doan [X,Y]:\n");
for(j=0;j<n;j++)
{
    if(*(p+j)%2==0)
    {
        if(*(p+j)>=x&&*(p+j)<=y)
            printf("%d\t",*(p+j));
    }
}

}
