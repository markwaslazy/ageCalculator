#include <stdio.h>
#include <string.h>

/* Age Calculator v2.0
new: 
- Added the date input, and can process the value of month
based on the differences or equality of date, as well as 
process the value of year based on the differences or
equality of month.
- I've made it into simple mode, not showing the
months count, since as a simplistic program, it is 
the main purpose of the calculation, just get the
amount of age.

v3 idea: I would implement a feature
to select basic or advanced mode */

// maybe I can use functions by the next version update

int main() {

    char birthMonth[15];
    char currentMonth[15];
    int birthYear;
    int currentYear;
    int x, y, a, b;
    int month, year;
    int bD, cD;


    printf("\n\n[Age Calculator]\n");
    printf("v2.0\n\n");

    printf("Enter Birth Year: ");
    scanf("%d", &birthYear);

    printf("Enter Birth Month: ");
    scanf("%s", &birthMonth);

    printf("Enter Birth Day: ");
    scanf("%d", &bD);

    printf("\n");

    printf("Enter Current Year: ");
    scanf("%d", &currentYear);

    printf("Enter Current Month: ");
    scanf("%s", &currentMonth);

    printf("Enter Current Day: ");
    scanf("%d", &cD);

    // BIRTH MONTH ASSIGNMENT FOR X
    if (strcmp(birthMonth, "January") == 0) {
        x = 1;
    } else if (strcmp(birthMonth, "February") == 0) {
        x = 2;
    } else if (strcmp(birthMonth, "March") == 0) {
        x = 3;
    } else if (strcmp(birthMonth, "April") == 0) {
        x = 4;
    } else if (strcmp(birthMonth, "May") == 0) {
        x = 5;
    } else if (strcmp(birthMonth, "June") == 0) {
        x = 6;
    } else if (strcmp(birthMonth, "July") == 0) {
        x = 7;
    } else if (strcmp(birthMonth, "August") == 0) {
        x = 8;
    } else if (strcmp(birthMonth, "September") == 0) {
        x = 9;
    } else if (strcmp(birthMonth, "October") == 0) {
        x = 10;
    } else if (strcmp(birthMonth, "November") == 0) {
        x = 11;
    } else if (strcmp(birthMonth, "December") == 0) {
        x = 12;
    }

    // CURRENT MONTH ASSIGNMENT FOR Y
    if (strcmp(currentMonth, "January") == 0) {
        y = 1;
    } else if (strcmp(currentMonth, "February") == 0) {
        y = 2;
    } else if (strcmp(currentMonth, "March") == 0) {
        y = 3;
    } else if (strcmp(currentMonth, "April") == 0) {
        y = 4;
    } else if (strcmp(currentMonth, "May") == 0) {
        y = 5;
    } else if (strcmp(currentMonth, "June") == 0) {
        y = 6;
    } else if (strcmp(currentMonth, "July") == 0) {
        y = 7;
    } else if (strcmp(currentMonth, "August") == 0) {
        y = 8;
    } else if (strcmp(currentMonth, "September") == 0) {
        y = 9;
    } else if (strcmp(currentMonth, "October") == 0) {
        y = 10;
    } else if (strcmp(currentMonth, "November") == 0) {
        y = 11;
    } else if (strcmp(currentMonth, "December") == 0) {
        y = 12;
    }

    // BIRTH YEAR CALCULATION
    year = currentYear - birthYear;
    --year;

    // special variable
    int pVar;

    /* Algorithm of the month calculation */
    if (x > y) {
        switch (x) {
            case 2:
                pVar = 8;
                break;
            case 3:
                pVar = 6;
                break;
            case 4:
                pVar = 4;
                break;
            case 5:
                pVar = 2;
                break;
            case 6:
                pVar = 1;
                break;
            case 7:
                pVar = -2;
                break;
            case 8:
                pVar = -4;
                break;
            case 9:
                pVar = -6;
                break;
            case 10:
                pVar = -8;
                break;
            case 11:
                pVar = -10;
                break;
            case 12:
                pVar = -12;
        }
        x += y;
        month = x + pVar;
        if (bD > cD) {
            --month;
        }
    } else if (x < y) {
        year++;
        month = y - x;
        if (bD > cD) {
            --month;
        }
    } else if (x == y) {
        if (bD <= cD) {
            year++;
            month = 0;
        } 
        else if (bD > cD) {
            month = 11;
        }
    }

    
    printf("\n[Your Age!]\n");
    printf("%d years old\n\n\n", year);

    return 0;
}
