#include<stdio.h>
int main(){
int n,j,*p;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}
printf("GIa tri co toan chu so le:\n");
for(j=n-1;j>=0;j--)
{
    int temp;
    temp=*(p+j);
    while(temp!=0)
    {
        if(temp%2==1)
        {
            if(temp<10)
            {
                printf("%d\t",*(p+j));
                break;
            }
            else
                temp/=10;
        }
        else
            break;
    }
}
return 0;
}


