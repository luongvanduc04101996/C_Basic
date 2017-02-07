#include<stdio.h>
void main(){
int a,i,j,mang[5],b=0;
printf("Nhap vao 1 so:\n");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
    if(a%i==0&&b<=1)
    {
        mang[b]=i;
        b++;
    }
}
int KiemTraNT(int kt){
    int i;
    for(i=2;i<=kt/2;i++)
    {
        if(kt%i==0&&kt!=2)
            return 0;
        else
            return 1;
    }
}
if(KiemTraNT(mang[0])==1)
{
    if(mang[0]*mang[0]==a)
        printf("%d la so ban nguyen",a);
    else if(KiemTraNT(mang[1])==1&&mang[0]*mang[1]==a)
            printf("%d la so ban nguyen",a);
         else
            printf("%d khong la so ban nguyen",a);
}
else
     printf("%d khong la so ban nguyen",a);
}

