#include<stdio.h>
void main(){
int m,n;
printf("Nhap 2 so:\n");
scanf("%d%d",&m,&n);
int UCLN(int a,int b)
{
    if(a==0)
        return b;
    else
        if(b==0)
            return a;
        else if(a>b)
                return UCLN(a%b,b);
             else
                return UCLN(b%a,a);
}
if(m!=0&&n!=0)
    printf("UCLN la:%d\nBCNN la:%d",UCLN(m,n),(m*n)/UCLN(m,n));
else
    printf("Khong co UCLN va BCNN");
}


