#include <stdio.h>

void countCall() {



static int counter = 0;

counter++;

printf("Call function: counter = %d\n", counter);
}

int main() {

printf("Starting function calls...\n");

countCall();

printf("After first call:\n");

countCall();

return 0;
}

// ค่าของ counter จะถูกเก็บไว้ระหว่างการเรียกใช้ฟังก์ชั่นซ์ สามารถนับจำนวนครั้งที่เรียกใช้ฟังก์ชั่นช้ได้ เพราะเป็น static