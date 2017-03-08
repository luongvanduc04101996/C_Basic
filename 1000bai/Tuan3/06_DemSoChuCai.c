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
       if(isspace(kt)!=0) continue;
       else dem++;
    }
    fclose(f);
    printf("\nSo ky tu trong file : %d",dem);
}
