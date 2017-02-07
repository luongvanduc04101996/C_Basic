//in ma tran theo de bai
#include<stdio.h>
void main(){
int /*a[5][5],*/*p,i,j,dem=1;
//p=a;
p=(int*)malloc((5*5)*sizeof(int));
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        *(p+(i*5)+j)=dem++;
    }
}
printf("Ma tran theo de bai:\n\n");
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        printf("%d\t",*(p+(i*5)+j));
    }
    printf("\n");
}

}


