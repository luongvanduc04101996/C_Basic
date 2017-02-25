#include<stdio.h>
#include<math.h>
void main(){
int n,j,*p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}
printf("So chan co gia tri lan can cung la so chan:\n===>");
for(j=0;j<n;j++)
{
    if(*(p+j)%2==0)
    {

        if(j==0)
        {
           if(*(p+j+1)%2==0)
                printf("%d\t",*(p+j));
        }
        else if(j==n-1)
        {
            if(*(p+j-1)%2==0)
                printf("%d\t",*(p+j));
        }
        else
        {
            if(*(p+j+1)%2==0||*(p+j-1)%2==0)
            {
                printf("%d\t",*(p+j));
            }
        }

    }
}

}
