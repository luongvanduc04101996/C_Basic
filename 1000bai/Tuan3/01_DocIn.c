#include <stdio.h>
void main()
{
    FILE *f;
    char in;
    f = fopen("Tep.txt","r");
    while((in=getc(f))!=EOF)
        printf("%c",in);

    fclose(f);
}
