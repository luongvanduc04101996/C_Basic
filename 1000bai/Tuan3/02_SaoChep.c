#include <stdio.h>
void main()
{
    FILE *f,*f1;
    char in;
    f = fopen("Tep.txt","r");

    f1 = fopen("Tep_copy.txt","w");

    while((in=fgetc(f))!=EOF)
        fputc(in,f1);

    fclose(f1);
    fclose(f);
}


