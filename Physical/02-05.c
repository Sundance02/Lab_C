#include <stdio.h>

int main()
{
    float f_number = 3.1415;
    int number1 = 12345;
    int number2 = -6789;
    int number3 = 24500;
    printf("123456789012345678901234567890\n");
    printf("%d %d %d \n", number1, number2, number3);
    printf("%3d %3d %3d\n", number1, number2, number3); //ชิดขวาเว้น3 ไม่มีผลเพราะเลขยาวกว่า3หลัก
    printf("%8d %8d %8d\n", number1, number2, number3); //ชิดขวาเว้น8 -นับ1หลัก
    printf("%08d %08d %08d\n", number1, number2, number3); //ชิดขวาเว้น8 ไม่เต็มเติม0 ใช้กับพวกวันที่ได้เช่น วันที่5 =05
    printf("%-8d %-8d %-8d\n", number1, number2, number3); //ชิดซ้ายเว้น8
    printf("%10f\n", f_number); //ชิดขวาเว้น10(floatcจะใส่ทศนิยมให้6ตำเเหน่งถ้าไม่ครบจะเติม0ด้านหลังให้ครบ)
    printf("%3f\n", f_number); //ชิดซ้ายเว้น3 เเต่ไม่มีไรเกิดขึ้นเพราะว่าindexมันมากกว่า3
    printf("%-10f\n", f_number); //ชิดซ้ายเว้น10
    printf("%-10.3f\n", f_number); //ชิดซ้ายเว้น10 ทศนิยม3ตำเเหน่ง
    printf("%10.2f\n", f_number); //ชิดขวาเว้น10 ทศนิยม2ตำเเหน่ง
    printf("%.1f\n", f_number); 
    printf("%.3f\n", f_number); //ทศนิยม3ตำเเหน่ง
    return 0;

    //หลักๆมี 1.ชิดขวาซ้ายเหมือนstring %10d %-10d เเต่มีเติม0ตรงช่องไม่เต็ม %02d, 2.ของfloatถ้าไม่เติมอะไรจะเป็นทศนิยม6หลัก 3.ตัดทศนิยม %.2f
}