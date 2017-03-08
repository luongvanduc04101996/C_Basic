#include <stdio.h>
#include <string.h>
void main()
{
    FILE *f;
    int dem=0;
    char kt;
    f = fopen("duc.txt","r");
    while((kt=getc(f))!=EOF)
    {
       if(isspace(kt)!=0) dem++;
    }
    fclose(f);
    printf("\nSo tu trong file : %d",dem+1);
}

