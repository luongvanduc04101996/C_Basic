#include<stdio.h>

void main(){
int n,j,*p,temp;

printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}

temp=(*p**(p+1))/UCLN(*(p),*(p+1));
for(j=2;j<n;j++)
{

    temp = (temp**(p+j))/UCLN(temp,*(p+j));
}

printf("BCNN cac gia tri trong mang ===> %d",temp);

}

int UCLN(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else if(a>b)
        return UCLN(a-b,b);
    else
        return UCLN(b-a,a);
}


