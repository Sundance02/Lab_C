#include <stdio.h>
 
int main()
{
    char text[13] = "Hello, world";
    printf("123456789012345678901234567890\n");
    printf("%s*\n", text);
    printf("%20s*\n", text);
    printf("%.20s*\n", text);//เอา20ตัวอักษรเเต่ไม่เห็นผลเพราะHello, worldมี12ตัวอักษร
    printf("%-20s*\n", text);//ชิดซ้ายเว้น20หลัก  output = Hello, world        * จะเห็นว่าจบค่าว่าworldจะมีช่องว่างเพิ่มมา8ช่องเว้นไว้เเล้วจึงมี*ตามมา(8ช่องเพราะเว้น20เเล้วลบด้วยจำนวนอักษรในคำว่าHello, worldซึ่งมี12ตัว)
    printf("%.10s*\n", text); //.10sคือเอาเเค่10ตัวอักษร output =  Hello, wor*
    printf("%-10s*\n", text); //ชิดซ้ายเว้น10หลักเเต่คำว่าhello, world มัน12หลัก เลยไม่เกิดผล ถ้าจะให้เห็นผลลองดู .-20s บรรทัดที่10
    printf("%25.10s*\n", text);
    printf("%25.5s*\n", text); //เอาเว้น25ชิดขวาเอา5ตัวอักษร output =                     Hello*
    printf("%-25.10s*\n", text);

    //%25.5s ตัว.5คือเอา5หลักเช่น fameinwza = famei , 25 คือ ชิดขวาเว้น25หลัก

    //หลักๆมี1.ตัด string คือ %.10s 2.ชิดขวา%15s 3.ชิดซ้าย%-15s 4.ชิดขวาหรือซ้าย+ตัด %15.10s
    return 0;
}