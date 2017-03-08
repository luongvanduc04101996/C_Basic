#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fp;
    char kt[255];

    fp = fopen("tentep.txt","r");

    fgets(kt,255,fp);
    strupr(kt);
    fclose(fp);

    fp = fopen("tentep.txt","w");
    fputs(kt,fp);
    fclose(fp);

}

