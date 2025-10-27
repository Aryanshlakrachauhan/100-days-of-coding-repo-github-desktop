/* Q40 (Loops without Arrays/Strings)
 Write a program to find the 1’s complement of a binary number and print it.*/

#include <stdio.h>

int main() {
    int bin, lastdig, onescomp = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    // Calculate 1's complement
    while (bin > 0) {
        lastdig = bin % 10;          // get last binary digit
        if (lastdig == 0)
            lastdig = 1;
        else
            lastdig = 0;

        onescomp = onescomp + (lastdig * place);
        place = place * 10;
        bin = bin / 10;
    }

    printf("The 1's complement is: %d\n", onescomp);

    return 0;
}