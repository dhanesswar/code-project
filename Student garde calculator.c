#include<stdio.h>

int main()
{
    float marks[5];
    float total = 0, avg, percentage;
    char grade;

    printf("---Enter the 5 subject marks---\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks! Please enter marks between 0 and 100.\n");
            return 0;
        }

        total += marks[i];
    }

    avg = total / 5;
    percentage = (total / 500) * 100;

    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n----- Student Result -----\n");
    printf("Total Marks : %.2f / 500\n", total);
    printf("Average     : %.2f\n", avg);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);

    if(grade == 'F')
        printf("Result      : Fail\n");
    else
        printf("Result      : Pass\n");

    return 0;
}
