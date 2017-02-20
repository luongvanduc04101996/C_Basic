#include<stdio.h>
double Tinh1();
double Tinh1(double a,double b)
{
    return (float)a/b;
}
void main()
{
    float a,b,c,d,e,f,x,y;
    printf("Nhap:\nax+by=c\ndx+ey=f\n\na,b,c,d,e,f lan luot la:\n");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
                printf("Hpt co vo so nghiem");
            else
                printf("Hpt vo nghiem");
        }
        else
        {
            y=Tinh1(c,b);
            if(d!=0)
            {
                x=Tinh1(f-e*y,d);
                printf("Nghiem cua hpt la:(%f,%f)",x,y);
            }
            else
            {
                if(e==0)
                {
                    if(f==0)
                        printf("Hpt co vo so nghiem");
                    else
                        printf("Hpt vo nghiem");
                }
                else
                {
                    if(e/b==c/f)
                        printf("Hpt co vo so nghiem");
                    else
                        printf("He phuong trinh vo nghiem");
                }
            }

        }
    }
    else
    {
        if(b==0)
        {
            x=Tinh1(c,a);
            if(e==0)
            {
                if(f/c==d/a)
                    printf("Hpt co vo so nghiem");
                else
                    printf("Hpt vo nghiem");
            }
            else
            {
                y=Tinh1(f-d*x,e);
                printf("Nghiem cua hpt la:(%f,%f)",x,y);
            }
        }
        else
        {
            if(d==0)
            {
                if(e==0)
                {
                    if(f!=0)
                        printf("Hpt vo nghiem");
                    else
                        printf("Hpt co vo so nghiem");
                }
                else
                {
                    y=Tinh1(f,e);
                    x=Tinh1(c-b*y,a);
                    printf("Nghiem cua hpt la:(%f,%f)",x,y);
                }
            }
            else
            {
                if(e==0)
                {
                    x=Tinh1(f,d);
                    y=Tinh1(c-a*x,b);
                    printf("Nghiem cua hpt la:(%f,%f)",x,y);
                }
                else
                {
                    if(a/d==b/e)
                    {
                        if(c/f==a/d)
                            printf("Hpt co vo so nghiem");
                        else
                            printf("Hpt vo nghiem");
                    }
                    else
                    {
                        a=d;
                        b=b*d/a;
                        c=c*d/a;
                        b=b-e;
                        c=c-f;
                        y=Tinh1(c,b);
                        x=Tinh1(f-e*y,d);
                        printf("Nghiem cua hpt la:(%f,%f)",x,y);
                    }
                }
            }
        }
    }

}

