#include<stdio.h>
void main()
{
    printf("PT bac nhat co dang: Ax + B =0\n");
    int a,b;
    printf("Nhap a va b:\n");
    scanf("%d%d",&a,&b);
    if(a!=0)
        printf("Pt co nghiem la x = %f",(float)-b/a);
    else
        if(b==0)
            printf("Pt co vo so nghiem");
        else
            printf("Pt vo nghiem");

}
