#include<stdio.h>
void main(){
int n,donvi,chuc,tram;
printf("Nhap so nguyen co 3 chu so:\n");
scanf("%d",&n);
donvi=n%10;
chuc=n/10%10;
tram=n/100;
switch(tram)
{
    case 1:
        printf("Mot tram ");
        break;
    case 2:
        printf("Hai tram ");
        break;
    case 3:
        printf("Ba tram ");
        break;
    case 4:
        printf("Bon tram ");
        break;
    case 5:
        printf("Nam tram ");
        break;
    case 6:
        printf("Sau tram ");
        break;
    case 7:
        printf("Bay tram ");
        break;
    case 8:
        printf("Tam tram ");
        break;
    case 9:
        printf("Chin tram ");
        break;
    default:
        printf("Ban nhap sai roi");
        break;
}

switch(chuc)
{
    case 0:
        printf("Le ");
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

