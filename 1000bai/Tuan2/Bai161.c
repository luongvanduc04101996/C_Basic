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
printf("Nhap [x,y]:\n");
scanf("%d%d",&x,&y);
KiemTra(p,n,x,y);
}
int KiemTra(int *p,int n,int x,int y)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(x<*(p+i)&&*(p+i)<y)
        {
            return printf("GT dau tien thuoc [x,y] = %d",*(p+i));
        }
        else if(*(p+i)==x)
        {
            return printf("GT dau tien thuoc [x,y] = %d",*(p+i));
        }
        else if(*(p+i)==y)
        {
            return printf("GT dau tien thuoc [x,y] = %d",*(p+i));
        }
        else
            continue;
    }
    return -1;
}
