#include <stdio.h>

int main()
{

    // Q-1: Write a program to print "Hello Students" on the screen.
    printf("Hello Students\n");

    // Q-2: Write a program to print "Hello" in the first line and "Students" in the second line.
    printf("Hello\nStudents\n");

    // Q-3. Write a program to print "Pseudocode" on the screen. (Remember to print in double quotes)
    printf("\"Pseudocode\"\n");

    // Q-4. Write a program to print \n on the screen.
    printf("\\n\n");

    // Q-5. Write a program to print \r on the screen.
    printf("\\r\n");

    // Q-6. Write a program to print "Teacher's Day" on the screen. (Remember to print double and single quotes)
    printf("\"Teacher's Day\" \'Teacher's Day\'\n");

    // Q-7. Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
    int no1, no2;
    printf("Enter two numbers: ");
    scanf("%d %d", &no1, &no2);
    printf("Sum: %d\n", no1 + no2);

    // Q-8. Write a program to calculate square of a given program. Number is entered by the user.
    int no;
    printf("Enter number: ");
    scanf("%d", &no);
    printf("Square of %d: %d\n", no, no * no);

    // Q-9. Write a program to calculate area of a rectangle. Input appropriate data from the user.
    int l, b;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l, &b);
    printf("Area: %d\n", l * b);

    // Q-10. WAP to find the area of the circle. Take radius of circle from user as input.
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Area of circle: %.2f\n", 3.14 * r * r);

    return 0;
}