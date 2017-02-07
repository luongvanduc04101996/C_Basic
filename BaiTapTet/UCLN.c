#include<stdio.h>
void main(){
int a,b;
int UCLN(int a,int b){
    if (a==0)
        return b;
    else if(b==0)
            return a;
         else if(a>b)
                return UCLN(a-b,b);
              else
                return UCLN(b-a,a);

}
printf("Nhap 2 so:\n");
scanf("%d%d",&a,&b);
printf("UCLN:%d",UCLN(a,b));
}
