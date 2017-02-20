#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Nhap a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&a+c>b&b+c>a)
    {
        if(a==b)
        {
            if(b==c)    printf("La tam giac deu");
            else
            {
                if(c*c==b*b+a*a)
                    printf("La tam giac vuong can");
                else
                    printf("La tam giac can");
            }
        }
        else
        {
            if(a==c)
            {
                if(b*b==a*a+c*c)
                    printf("La tam giac vuong can");
                else
                    printf("La tam giac can");
            }
            else
            {
                if(b==c)
                {
                    if(a*a==b*b+c*c) printf("La tam giac vuong can");
                    else printf("La tam giac can");
                }
                else
                {
                    if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
                    {
                        printf("La tam giac vuong");
                    }
                    else
                    {
                        printf("La tam giac thuong");
                    }
                }
            }
        }
    }
    else
        printf("3 canh ban nhap ko  tao thanh tam giac");
}
