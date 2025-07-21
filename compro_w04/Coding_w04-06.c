#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate() {
    const int LOCAL_BONUS = 50;  
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    // printf("GLOBAL_RATE = %d\n", GLOBAL_RATE); // ใช้งานได้ปกติ
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);
    return 0;
}
/*1.ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?

-GLOBAL_RATE เป็นค่าคงที่ ระดับ global: สามารถ เรียกใช้ได้จากทุกฟังก์ชันในไฟล์นี้ เช่น calculate() และ main()

-LOCAL_BONUS เป็นค่าคงที่ ระดับ local: มีขอบเขต เฉพาะ ภายในฟังก์ชัน calculate() เท่านั้น ฟังก์ชันอื่น ๆ รวมถึง main() ไม่สามารถเข้าถึงได้ เลย

2. เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80; ?
   - โปรแกรมจะเกิด compile-time error เพราะค่าคงที่ (const) ไม่สามารถเปลี่ยนค่าได้หลังจากประกาศแล้ว

3. ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้?

    เพราะ LOCAL_BONUS มีขอบเขตอยู่แค่ใน calculate() เท่านั้น เมื่อ calculate() ทำงานเสร็จ LOCAL_BONUS ก็จะหมดอายุการใช้งาน (scope) ใน main() จะมองไม่เห็นตัวแปรนี้ จึงเกิด error ถ้าเรียก ใช้งาน

4. อภิปราย และสรุปผลที่ได้จากการทดลอง

ตัวแปรที่ประกาศแบบ global สามารถเข้าถึงได้ จากทุกฟังก์ชัน

ตัวแปรที่ประกาศแบบ local จะมีผลเฉพาะฟังก์ชัน ที่ประกาศเท่านั้น

การประกาศ const เป็นการกำหนดค่าคงที่ที่ไม่ สามารถเปลี่ยนค่าได้

ถ้าพยายามแก้ไขค่าคงที่ หรือเรียกใช้ local variable นอกขอบเขตจะทำให้ compile error

สรุป:

ควรเลือกใช้ global หรือ local ให้เหมาะสมกับ ขอบเขตการใช้งาน ถ้าต้องการค่าที่แชร์กันหลาย ฟังก์ชันใช้ global แต่ถ้าใช้แค่ในฟังก์ชันเดียวให้ ประกาศ local เพื่อลดความซับซ้อนและไม่ให้เกิด ผลกระทบต่อส่วนอื่นของโปรแกรม
*/