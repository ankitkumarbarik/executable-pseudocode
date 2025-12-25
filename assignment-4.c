#include <stdio.h>

int main()
{

    // Q-1. Write a program to calculate size of a character constant.
    printf("%d\n", sizeof('A'));

    // Q-2. Write a program to calculate size of a real constant.
    printf("%d\n", sizeof(34.5));

    // Q-3. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using operator.
    char c = 'A';
    printf("%d: %c\n", c, c);
    c++;
    printf("%d: %c\n", c, c);

    // Q-4. Write a program to swap values of two int variables.
    int a = 3, b = 2, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    // Q-5. Write a program to swap values of two int variables without using a third variable.
    int e, f;
    printf("Enter two no. a and b: ");
    scanf("%d %d", &e, &f);
    e = e + f;
    f = e - f;
    e = e - f;
    printf("a: %d\n", e);
    printf("b: %d\n", f);

    // Q-6. Write a program to swap values of two int variables without using third variable and without using +,- operators.
    int g, h;
    printf("Enter two no. a and b: ");
    scanf("%d %d", &g, &h);
    g = g * h;
    h = g / h;
    g = g / h;
    printf("a: %d\n", g);
    printf("b: %d\n", h);

    // Q-7. Write a program to swap values of two int variables without using third variable and arithmetic operators.
    int i, j;
    printf("Enter two no. a and b: ");
    scanf("%d %d", &i, &j);
    i = i ^ j;
    j = i ^ j;
    i = i ^ j;
    printf("a: %d\n", i);
    printf("b: %d\n", j);

    // Q-8. Write a program to swap values of two int variables in single line arithmetic expression.
    int k, l;
    printf("Enter two no. a and b: ");
    scanf("%d %d", &k, &l);
    k = (k + l) - (l = k);
    printf("a: %d\n", k);
    printf("b: %d\n", l);

    return 0;
}