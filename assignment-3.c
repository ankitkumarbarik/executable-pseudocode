#include <stdio.h>

int main()
{

    // Q-1. Write a program to input a character from the user and print its ASCII code.
    char c;
    printf("Enter one char: ");
    scanf("%c", &c);
    printf("ASCII code of %c: %d\n", c, c);

    // Q-2. Write a program to input an ASCII code from the user and print its corresponding character.
    int a;
    printf("Enter ASCII code: ");
    scanf("%d", &a);
    printf("Char of %d: %c\n", a, a);

    // Q-3. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
    // char d, e, f;
    // printf("Enter three char: ");
    // scanf("%c %c %c",&d,&e,&f);
    // printf("ASCII code of %c %c %c: %d %d %d\n", d, e, f, d, e, f);

    // Q-4. Write a program to print last digit of a given number.
    int no;
    printf("Enter no: ");
    scanf("%d", &no);
    printf("Last digit of %d: %d\n", no, no % 10);

    // Q-5. Write a program to print a given number without its last digit.
    printf("Enter no: ");
    scanf("%d", &no);
    printf("No without last digit: %d\n", no / 10);

    return 0;
}