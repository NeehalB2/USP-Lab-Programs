/*accept a string from the user. Create a text file and write the string into the file. Read
the string from the file and print it out on the monitor.*/
#include<stdio.h>
#include <stdio.h>

int main()
{
    FILE *fp, *fp1;
    char st[20],c;
    
    fp = fopen("file.txt","w");
    printf("Enter a string:\n");
    scanf("%s", st);
    fputs(st,fp);
    
    fclose(fp);
    fp1 = fopen("file.txt","r");
    c = fgetc(fp1);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fp1);
    }
    fclose(fp1);
    return 0;
}
