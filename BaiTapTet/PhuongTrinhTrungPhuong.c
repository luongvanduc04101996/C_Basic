#include<stdio.h>
#include<math.h>
void main(){
float a,b,c,delta;
printf("Nhap cac he so cua pt trung phuong:\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
{
    if(b>0)
    {
        if(c>0)
            printf("Pt vo nghiem");
        else {
             if(c==0)
                printf("Pt co 1 nghiem la : %f",sqrt(c/b));
             else
                printf("Pt co 2 nghiem la : %f\t%f",sqrt(-c/b),-sqrt(-c/b));
             }
    }
    else if(b==0)
            if(c==0)
                printf("Pt co vo so nghiem");
            else
                printf("Pt vo nghiem");
         else
            if(c<0)
                printf("Pt vo nghiem");
            else if(c==0)
                    printf("Pt co 1 nghiem la : %f",sqrt(c/b));
                else
                    printf("Pt co 2 nghiem la : %f\t%f",sqrt(-c/b),sqrt(-c/b));

}
else
{
    delta=b*b-4*a*c;
    if(delta==0)
    {
        int nghiem;
        nghiem =-b/(2*a);
        if(nghiem>0)
            printf("Pt co 2 nghiem: %f\t%f",-sqrt(nghiem),sqrt(nghiem));
        else if(nghiem=0)
                printf("Pt co 1 nghiem: %f",nghiem);
             else
                printf("Pt vo nghiem");
    }
    else if(delta>0){
        int nghiem1,nghiem2;
        nghiem1=(-b-sqrt(delta))/(2*a);
        nghiem2=(-b+sqrt(delta))/(2*a);
            if(nghiem1>0)
                if(nghiem2>0)
                    printf("Pt co 4 nghiem:%f\t%f\t%f\t%f",-sqrt(nghiem1),sqrt(nghiem1),sqrt(nghiem2),-sqrt(nghiem2));
                else if(nghiem2<0)
                        printf("Pt co 2 nghiem:%f\t%f",-sqrt(nghiem1),sqrt(nghiem1));
                     else
                        printf("pt co 3 nghiem:%f\t%f\t%f",-sqrt(nghiem1),sqrt(nghiem1),sqrt(nghiem2));
            else
                if(nghiem1==0)
                    if(nghiem2>0)
                        printf("Pt co 3 nghiem:%f\t%f",sqrt(nghiem1),-sqrt(nghiem2),sqrt(nghiem2));
                    else
                        printf("Pt co 1 nghiem:%f",sqrt(nghiem1));
                else
                    if(nghiem2>0)
                        printf("Pt co 2 nghiem:%f\t%f",sqrt(nghiem2),-sqrt(nghiem2));
                    else if(nghiem2<0)
                            printf("Pt vo nghiem");
                         else
                            printf("Pt co 1 nghiem:%f",sqrt(nghiem2));
        }
    else
        printf("Pt vo nghiem");
}
}

