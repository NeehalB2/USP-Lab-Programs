#include<stdio.h>
int main(int argc, char* argv[ ])
{
int i;
char **ptr;
extern char **environ;
for( ptr = environ; *ptr != 0; ptr++ ) /*echo all env strings*/
printf("\n%s", *ptr);
return 0;
}
