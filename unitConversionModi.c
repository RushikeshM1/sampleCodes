#include <stdio.h>
#include <math.h>
int main()
{
    int choice;

    float mm;
    float thousand = 1000;
    float cm, inch, meter, ft;
    do
    {
        printf("Enter your choice : 1.mm to m , cm, inch, ft \n 2. m to mm ,cm ,inch,ft \n 3. cm to m , mm ,inch ,ft \n 4.inch to m , mm ,cm , ft \n 5.ft to m, mm, inch,cm \n");

        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {

        case 1:
            printf("Enter the Length in MILLIMETER : \n");
            scanf("%f", &mm);
            printf("%0.3f in m", mm / thousand);
            printf("\n");
            cm = 0.1 * mm;
            printf("%0.1f in cm", cm);
            printf("\n");
            inch = cm / 2.54;
            printf("%0.4f in inch", inch);
            printf("\n");
            ft = mm / 304.8;
            printf("%0.4f in ft\n", ft);
            printf("\n_______********________\n");

            break;
        case 2:
            printf("Enter the Length in METER: \n");
            scanf("%f", &meter);
            printf("%0.3f in mm", meter * thousand);
            printf("\n");
            cm = 100 * meter;
            printf("%0.1f in cm", cm);
            printf("\n");
            inch = meter * 39.37;
            printf("%0.4f in inch", inch);
            printf("\n");
            ft = meter * 3.281;
            printf("%0.4f in ft\n", ft);
            printf("\n_______********________\n");

            break;

        case 3:
            printf("Enter the Length in CENTIMETER : \n");
            scanf("%f", &cm);
            printf("%0.3f in m", cm / thousand);
            printf("\n");
            mm = cm * 10;
            printf("%0.4f in mm", mm);
            printf("\n");
            inch = cm / 2.54;
            printf("%0.4f in inch", inch);
            printf("\n");
            ft = mm / 30.48;
            printf("%0.4f in ft\n", ft);
            printf("\n_______********________\n");

            break;

        case 4:
            printf("Enter the Length in INCH: \n");
            scanf("%f", &inch);
            printf("%0.3f in m", inch / 39.37);
            printf("\n");
            cm = 2.54 * inch;
            printf("%0.1f in cm", cm);
            printf("\n");
            mm = inch * 25.4;
            printf("%0.4f in mm", mm);
            printf("\n");
            ft = inch / 12;
            printf("%0.4f in ft\n", ft);
            printf("\n_______********________\n");

            break;

        case 5:
            printf("Enter the Length in FOOT : \n");
            scanf("%f", &ft);
            printf("%0.3f in m", ft / 3.281);
            printf("\n");
            cm = 30.48 * ft;
            printf("%0.1f in cm", cm);
            printf("\n");
            inch = ft * 12;
            printf("%0.4f in inch", inch);
            printf("\n");
            mm = ft * 304.8;
            printf("%0.4f in mm\n", mm);
            printf("\n_______********________\n");

            break;
        default:
            break;
        }
    } while (choice != 0);

    return 0;
}