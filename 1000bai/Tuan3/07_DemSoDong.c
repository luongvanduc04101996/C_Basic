#include <stdio.h>
void main()
{
    FILE *f;
    int dem=0;
    char kt,dong[255];
    f = fopen("duc.txt","r");

    while(fgets(dong,255,f))
        dem++;

    fclose(f);
    printf("\nSo Dong trong file: %d",dem);
}
