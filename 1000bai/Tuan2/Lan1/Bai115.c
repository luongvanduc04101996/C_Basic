#include<stdio.h>
void main(){
char hoten[50];
float toan,van;
printf("Nhap ho ten:\n");
gets(hoten);
printf("Nhap diem toan va van:\n");
scanf("%f%f",&toan,&van);
printf("Thong tin:\nHo ten\t\tDiem trung binh\n%s\t\t%f",hoten,(float)(toan+van)/2);
}
