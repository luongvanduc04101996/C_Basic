//Nhap 2 mang => Sap xep 2 mang => gop 2 mang =>mang 3
#include<stdio.h>
void main(){
int n,m,*q,*p,*s;
printf("Nhap so phan tu cua day so 1:\n");
scanf("%d",&n);
//int a[n];
//p=a;
p=(int*)malloc(n*sizeof(int));
NhapMang(p,n);
printf("Nhap so phan tu cua day so 2:\n");
scanf("%d",&m);
//int b[m];
//q=b;
q=(int*)malloc(m*sizeof(int));
NhapMang(q,m);
printf("Day A: ");
XuatMang(p,n);
printf("\nDay B: ");
XuatMang(q,m);
int /*c[n+m],*/dem1=0,dem2=0,dem3=0;
//s=c;
s=(int*)malloc((n+m)*sizeof(int));
printf("\nSap xep:\n");
SapXep(p,n);
SapXep(q,m);
printf("Day A: ");
XuatMang(p,n);
printf("\nDay B: ");
XuatMang(q,m);


while(dem3<n+m)
{
    if(*(q+dem2)<*(p+dem1))
    {
        *(s+dem3)=*(q+dem2);
        dem3++;
        dem2++;
    }
    else
    {
        *(s+dem3)=*(p+dem1);
        dem3++;
        dem1++;
    }
}
printf("\nDay C: ");
XuatMang(s,n+m);
}
void NhapMang(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("So thu %d\n",i+1);
        scanf("%d",p+i);
    }
}
void XuatMang(int *p,int n)
{
    //int a[n];
    //p=a;
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
void SapXep(int *p,int n)
{
    int i,j,chot,temp;
    for(i=0;i<n-1;i++)
    {
        chot =i;
        for(j=i+1;j<n;j++)
        {
            if(*(p+chot)>*(p+j))
            chot =j;
        }
        temp=*(p+i);
        *(p+i)=*(p+chot);
        *(p+chot)=temp;
    }
}
