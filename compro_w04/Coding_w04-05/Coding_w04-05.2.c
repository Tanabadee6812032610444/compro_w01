#include <stdio.h>

void countCall() {

int counter = 0;

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

// ถูกรีเซ็ตเพราะฟังก์ชั่นช์ไม่ใช่ static
/*ผลลัพธ์ที่ได้ต่างกันอย่างไร
    เพราะ static จะเก็บค่าของตัวแปรไว้ระหว่างการเรียกใช้ฟังก์ชั่นซ์

ความแตกต่างของ Non-Static Variable
    เพราะ static จะเก็บไว้ในหน่วยความจําระหว่างการใช้งาน
อภิปาย และสรุปผลที่ได้จากการทดลอง
    เพราะ static เป็นการให้ค่าคงที่การใช้ฟังก์ชั่นซ์ เช่น จํานวนการเรียก*/