#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time.\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%.2f\n", fine);
    }
    else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Fine = ₹%.2f\n", fine);
    }
    else if (days <= 30) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine = ₹%.2f\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}
