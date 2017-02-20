#include <stdio.h>
void main()
{
    int ngay,thang,nam,s=0,i;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Nhap ngay thang nam:\n");
    scanf("%d%d%d",&ngay,&thang,&nam);

    if(thang>2 && nam%4==0)
    {
        if(nam%100==0 && nam%400!=0) ngay = ngay;
         else { a[1]++;}
    }

    for(i=0;i<thang-1;i++)
    {
        s+=a[i];
    }

    s+=ngay;

    printf("Ngay thu %d",s);
}
