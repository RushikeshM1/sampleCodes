#include <stdio.h>
int main()
{
    int b_day, b_month, b_year;
    int c_day, c_month, c_year;
    int age_year, age_month, age_day;

    printf("enter current date (DD format): \n");
    scanf("%d", &c_day);
    printf("enter current month (MM format): \n");
    scanf("%d", &c_month);
    printf("enter current year (YYYY format): \n");
    scanf("%d", &c_year);

    printf("enter birth date (DD format): \n");
    scanf("%d", &b_day);
    printf("enter birth month (MM format): \n");
    scanf("%d", &b_month);
    printf("enter birth year (YYYY format): \n");
    scanf("%d", &b_year);

    age_year = c_year - b_year;
    age_month = c_month - b_month;
    age_day = c_day - b_day;

    if (age_month < 0)
    {
        printf("your age is: %d years \n", age_year - 1);
    }
    else
    {
        printf("your age is: %d years \n", age_year);
    }
    while (age_month < 0)
    {
        age_month = 12 + age_month;
    }
    if (age_day < 0)
    {
        printf("%d months\n", age_month - 1);
        age_day = 31 + age_day;
    }
    else
    {
        printf("%d months \n", age_month);
    }
    printf("%d days \n", age_day);
}