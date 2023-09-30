#include<stdio.h>

void main()
{
    float exam;
    float labExam;
    float assignment;
    float total;
    char grade;

    //Read user inputs
    printf("Enter percentage of lab exam: ");
    scanf("%f", &labExam);

    printf("Enter percentage of exam: ");
    scanf("%f", &exam);

    printf("Enter percentage of lab exam: ");
    scanf("%f", &assignment);

    //Calculate total
    total = (0.1 * labExam) + (0.6 * exam) + (0.3 * assignment);
    printf("DEBUG Avg %f", total);

    if (total < 0 || total > 100)
    {
        printf("Number out of range, sorry");
    }
    else if (total >= 70)
    {
        grade = 'A';
    }
    else if (total >= 60)
    {
        grade = 'B';
    }
    else if (total >= 50)
    {
        grade = 'C';
    }
    else if (total >= 40)
    {
        grade = 'D';
    }
    else if (total < 40)
    {
        grade = 'E';
    }

    //Output result
    printf("The average is %f which gives a grade of %c\n", total, grade);
}