#include<stdio.h>
void main(){
int so;
printf("Nhap so:\n");
scanf("%d",&so);
int KiemTraNT(int kt){
    int i;
    for(i=2;i<=kt/2;i++)
    {
        if(kt%i==0)
            return 0;
    }
    return 1;
}
if(KiemTraNT(so)==1)
    printf("%d la so nguyen to",so);
else
    printf("%d khong la so nguyen to",so);

}
