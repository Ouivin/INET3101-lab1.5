#include <stdio.h>
#include "addorsubtract.h"

int main() {
    printf("Math Add or Subtract Operation\n");

    int sum = addTwoInts(4, 5);
    int difference = subtractTwoInts(10, 3);

    printf("4 + 5 = %d\n", sum);
    printf("10 - 3 = %d\n", difference);

    return 0;
}

