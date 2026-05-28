#include <stdio.h>
int main()
{

    char name[30] = "";
    int grade = 0;
    int maxGrade = 30;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your grade: ");
    scanf("%d", &grade);
    
    getchar();

    if (grade < 18)
    {
        printf("Hello %s!\nYour grade: %d/%d\nResult: FAILED\nComment: Keep studying.", name, grade, maxGrade);
    }
    else if (grade >= 18 && grade <= 22)
    {
        printf("Hello %s!\nYour grade: %d/%d\nResult: PASSED\nComment: Sufficient.", name, grade, maxGrade);
    }
    else if (grade >= 23 && grade <= 26)
    {
        printf("Hello %s!\nYour grade: %d/%d\nResult: PASSED\nComment: Good job.", name, grade, maxGrade);
    }
    else if (grade >= 23 && grade <= 26)
    {
        printf("Hello %s!\nYour grade: %d/%d\nResult: PASSED\nComment: Excellent!", name, grade, maxGrade);
    }
    return 0;
}
