#include<stdio.h>
#include<math.h>
void main(){
float a,b,c,delta;
printf("Nhap cac he so cua pt bac 2:\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
{
    if(b!=0)
        printf("Pt co nghiem la:%f",-c/b);
    else if(c==0)
            printf("Pt co vo so nghiem");
        else
            printf("Pt vo nghiem");

}
else
{
    delta=b*b-4*a*c;
    if(delta==0)
    {
        printf("Pt co nghiem kep:%f",-b/(2*a));
    }
    else if(delta>0)
            printf("Pt co 2 nghiem phan biet x1=%f\tx2=%f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
        else
            printf("Pt vo nghiem");
}
}

