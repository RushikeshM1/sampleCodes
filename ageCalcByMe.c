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

    if (b_day > 31 || b_month > 12 || c_day > 31 || c_month > 12 || b_year > c_year)
    {
        printf("\n ********Get out of here*******");
    }
    else
    {

        int ansAge = c_year - (b_year + 1);

        printf("%d years\n", ansAge);

        int ansMonth = 12 - b_month;

        int ansDay = (31 - b_day) + c_day;
        if (ansDay > 31)
        {
            ansMonth = ansMonth + 1;
            ansDay = ansDay - 31;
            printf("%d months\n", ansMonth);
        }
        else
        {
            printf("%d months\n", ansMonth);
        }
        printf("and %d days\n", ansDay);
    }
}