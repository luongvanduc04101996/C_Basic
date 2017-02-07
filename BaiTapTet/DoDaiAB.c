#include<stdio.h>
#include<math.h>
void main(){
int a,b,c,d;
printf("Nhap theo thu tu toa do A(a,b) va B(c,d):\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("Do dai doan thang AB la:%f",sqrt(pow(c-a,2)+pow(d-b,2)));
}
