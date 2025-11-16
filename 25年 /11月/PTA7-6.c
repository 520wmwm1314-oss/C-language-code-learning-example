#include <stdio.h>
//cm = (foot+inch/12)¡Á0.3048
//inch = 12foot
//cm = 2foot¡Á0.3048

int main()
{
    double cm;
    int foot;
    int inch;

    scanf("%lf",&cm);

    double total_feet = cm / 100.0 / 0.3048;
    foot = (int)total_feet;
    inch = (total_feet - foot) * 12.0;

    printf("%d %d",foot,inch);
}
