#include<stdio.h>

void main(){
int n,j,*p,temp,s;
int a[10]={0,0,0,0,0,0,0,0,0,0};
printf("Nhap so phan tu:\n");
scanf("%d",&n);

p=(int*)calloc(n,sizeof(int));

printf("Nhap mang:\n");
for(j=0;j<n;j++)
{
    scanf("%d",p+j);
}

for(j=0;j<n;j++)
{
    temp=*(p+j);
    while(temp!=0)
    {
        s=temp%10;
        a[s]++;
        temp/=10;
    }
}
temp=0;
for(j=1;j<10;j++)
{
    if(a[temp]<a[j])
        temp=j;
}
printf("Chu so xuat hien nhieu nhat la chu so %d co %d lan xuat hien ",temp,a[temp]);

}
