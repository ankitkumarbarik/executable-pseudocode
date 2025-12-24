#include <stdio.h>

int main()
{

    // Q-1. Write a program to calculate average of three integers. Numbers are given by the user.
    int no1, no2, no3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &no1, &no2, &no3);
    printf("Average: %.2f\n", (no1 + no2 + no3) / 3.0);

    // Q-2. Write a program to calculate circumference of a circle.
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);
    printf("Result: %.2f\n", (2 * 3.14 * radius));

    // Q-3. Write a program to calculate simple interest.
    int p, r, t;
    printf("Enter P,R,T: ");
    scanf("%d %d %d", &p, &r, &t);
    printf("Simple interest: %d\n", (p * r * t) / 100);

    // Q-4. Write a program to calculate volume of a cuboid.
    int l, b, h;
    printf("Enter length, breadth and height: ");
    scanf("%d %d %d", &l, &b, &h);
    printf("Volume of cuboid: %d\n", l * b * h);

    // Q-5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
    float cp, sp;
    printf("Enter CP and SP of a dozen banana: ");
    scanf("%f %f", &cp, &sp);
    printf("Profit/Loss: %.2f\n", 25 * (sp - cp) / 12);

    return 0;
}