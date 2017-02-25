#include<stdio.h>
void main(){
int n,j;
float *p;
printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(float*)calloc(n,sizeof(float));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%f",p+j);
}

printf("Cac so thoa ycbt:\n====>");
for(j=0;j<n;j++)
{
        if(j==0)
        {
           if((*(p+j+1)>0&&*(p+j)<0)||(*(p+j+1)<0&&*(p+j)>0))
                printf("%f\t",*(p+j));
        }
        else if(j==n-1)
        {
            if((*(p+j-1)>0&&*(p+j)<0)||(*(p+j-1)<0&&*(p+j)>0))
                printf("%f\t",*(p+j));
        }
        else
        {
            if(*(p+j)>0)
            {
                if(*(p+j+1)<0||*(p+j-1)<0)
                    printf("%f\t",*(p+j));
            }
            else
            {
                if(*(p+j+1)>0||*(p+j-1)>0)
                    printf("%f\t",*(p+j));
            }
        }


}

}
