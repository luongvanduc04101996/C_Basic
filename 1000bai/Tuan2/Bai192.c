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

printf("Cac so co gia tri dau tien la so chan:\n====>");

for(j=0;j<n;j++)
{
    int temp1,daonguoc=0;
    temp1=*(p+j);
        while(temp1!=0)
        {
            daonguoc = daonguoc*10+temp1%2;
            temp1=temp1/10;
        }

        if(daonguoc%2==0)
        {
            printf("%d\t",*(p+j));
        }
}

return 0;

}


