#include <stdio.h>

void functionB() {
    int value = 99;
    printf("Value in functionB: %d\n", value);
}

int main() {
    int value = 42;
    printf("Value in main (before): %d\n", value);

    functionB();

    printf("Value in main (after): %d\n", value); // ค่าตามที่อยู่ในนี้
    return 0;
}
