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
    int daonguoc=0,temp1,temp2=0;
    temp1=*(p+j);
    if(temp1>100)
    {
        while(temp1!=0)
        {
            daonguoc = daonguoc*10 + temp1%10;
            ++temp2;
            temp1=temp1/10;
        }

        if(*(p+j)==daonguoc)
        {
            return printf("So ganh dau tien: %d",*(p+j));
        }
    }
    else
        continue;
}

return printf("Ko co so ganh!!");

}
