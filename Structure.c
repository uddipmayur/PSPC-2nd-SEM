#include<stdio.h>

struct students
{
    char name[50];
    int roll;
    float marks;
};


int main()
{
    struct students S[2];

    //Taking student details

    printf("Enter student details below.\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of the Student: ");
        scanf("%s", &S[i].name);

        printf("Enter the roll of the Student: ");
        scanf("%d", &S[i].roll);

        printf("Enter the marks of the Student: ");
        scanf("%f", &S[i].marks);

        printf("\n");
    }


    //displaying

    for (int i = 0; i < 2; i++)
    {
        printf("Name of the student: %s \n", S[i].name);
        printf("Roll of the student: %d \n", S[i].roll);
        printf("Marks of the student: %f \n", S[i].marks);
    }

    printf("\n");


    //target search

    int search, index, found = 0;

    printf("Enter a roll to get student details: ");
    scanf("%d", &search);
    
    for (int i = 0; i < 2; i++)
    {
        if (S[i].roll == search)
        {
            found = 1;
            index = i;
        }
        
    }
    

    //search result

    if (found == 1)
    {
        printf("Name of the student: %s \n", S[index].name);
        printf("Roll of the student: %d \n", S[index].roll);
        printf("Marks of the student: %f \n", S[index].marks);
    }
    else
    {        
        printf("Student not found.");
    }


    return 0;
}