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

for(j=0;j<n;j++)
{
    int temp1,daonguoc=0;
    temp1=*(p+j);
        while(temp1!=0)
        {
            daonguoc = daonguoc*10+temp1%2;
            temp1=temp1/10;
        }

        if(daonguoc%2==1)
        {
            return printf("So co chu so le dau tien: %d",*(p+j));
        }
}

return printf("KO co chu so le:!!");

}
