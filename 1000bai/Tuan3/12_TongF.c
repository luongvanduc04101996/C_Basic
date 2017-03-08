#include <stdio.h>
void main()
{
    FILE *f;
    float b[50],s=0;
    int i=0,j=0;

    f = fopen("duc.txt","r");

   do
    {
        fscanf(f,"%f",&b[i]);
        i++;
    }while(getc(f)!=EOF);
    fclose(f);

    for(j=0;j<i;j++)
    {
        s+=b[j];
    }
    printf("\nTong: S= %f",s);
}

