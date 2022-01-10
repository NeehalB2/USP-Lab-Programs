/*accept student details like usn, name and cgpa. Create an array of n students. Write
the same into a data file and print the students with cgpa<5.0*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
 
    char name[30];
    char usn[10];
    char cgpa[4];
 
} student;
 
int main()
{
    int i, n;
    float cg;
    char c,ch='\n';
    student s[10];
    FILE *fp,*fp1;
    fp = fopen("file.txt","a");
    printf("Enter the no of students\n");
    scanf("%d",&n);
    printf("Enter %d Students Details \n \n",n);
    for(i=0; i<n; i++)
    {
 
        printf("Student %d:- \n",i+1);
        
        printf("Name: ");
        scanf("%s",s[i].name);
        fputs(strncat(s[i].name,&ch,1) , fp);
        printf("USN: ");
        scanf("%s",s[i].usn);
        fputs(strncat(s[i].usn,&ch,1), fp);
        printf("CGPA: ");
        scanf("%s",s[i].cgpa);
        fputs(strncat(s[i].cgpa,&ch,1), fp);
        
    }
    fclose(fp);
    
    
    printf("Students with CGPA less than 5.0-->:\n");
    for(i=0;i<n;i++)
    {
        cg = atoi(s[i].cgpa);
        if (cg<5.0)
        printf("%s", s[i].name);
    }
    
}
