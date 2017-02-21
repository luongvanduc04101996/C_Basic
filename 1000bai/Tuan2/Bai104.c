#include<stdio.h>
void main(){
int n,donvi,chuc;
printf("Nhap so nguyen co 2 chu so:\n");
scanf("%d",&n);
donvi=n%10;
chuc=n/10;
switch(chuc)
{
    case 0:
        printf("Khong ");
        break;
    case 1:
        printf("Muoi ");
        break;
    case 2:
        printf("Hai Muoi ");
        break;
    case 3:
        printf("Ba Muoi ");
        break;
    case 4:
        printf("Bon Muoi ");
        break;
    case 5:
        printf("Nam Muoi ");
        break;
    case 6:
        printf("Sau Muoi ");
        break;
    case 7:
        printf("Bay muoi ");
        break;
    case 8:
        printf("Tam muoi ");
        break;
    case 9:
        printf("Chin muoi ");
        break;
    default:
        printf("Ban nhap sai roi");
        break;
}
switch(donvi)
    {
    case 0:
        printf("Khong ");
        break;
    case 1:
        printf("Mot ");
        break;
    case 2:
        printf("Hai");
        break;
    case 3:
        printf("Ba ");
        break;
    case 4:
        printf("Bon");
        break;
    case 5:
        printf("Lam ");
        break;
    case 6:
        printf("Sau");
        break;
    case 7:
        printf("Bay");
        break;
    case 8:
        printf("Tam");
        break;
    case 9:
        printf("Chin");
        break;
    }
}
