#include <stdio.h>

int Persen (int a, int b) {
    a % b;
    return a % b;
} //minny

int divide (int a, int b) { 
return (b != 0) ? a / b : 0; 
}

int multiply (int a, int b) {
    return a * b;
}

int minus (int a, int b) {
    a - b ;
    return a - b;
} //Guitar

int plus (int a,int b) {
    a + b;
    return a + b;
} //Kafe

int calculate(int a,char op,int b) {
    int total;
    if (op == '+') {
        total = plus(a,b);
    } else if (op == '-') {
        total = minus(a,b);
    } else if (op == '*') {
        total = multiply(a,b);
    }
    // } else if (op == '/') {
    //     total = divide(a,b);}
     else {
        total = Persen(a,b);
    }

    //ใครทำส่วนไหนเเล้วก็ให้เอาเครื่องหมายคอมเม้นออกในส่วนของตัวเองไม่งั้นโค้ดรันไม่ได้

    printf("Process: %d %c %d = %d\n",a,op,b,total);
    return total;
}

int main () {
    int first , next;
    char op;

    if (scanf("%d",&first) != 1) {
        return 0;
    } //มีไว้เช็คเเค่ตัวอักษรที่ไม่ใช่ตัวเลข

    while (scanf(" %c %d",&op,&next) == 2) {
        first = calculate(first,op,next); //ในลูปรอบเเรกที่มันรูปจะเอา first กับ เครื่องหมายไปเเล้ว next เข้าไปเช็คในฟังชั่นเเละฟังชั่นจะรีเทรินค่าออกมาเป็น first เเละเก็บค่า first นำไปเข้าฟังชั่นจนจบสมการที่เขียนไป
    } //มันจะลูปรับค่าไอ้ op เเละ next ไปเรื่อยๆจนกว่าจะไม่ใช่ตัวเลขมันก็จะหยุด เเละใน ลูปมันคือการนำตัวเลขที่กรอกไปพร้อมกับเครื่องหมายไปเข้าฟังชั่นคำนวน เเละเเสดงโปรเซสที่มันคิดออกมา


    printf("Anwer: %d\n",first);

    //ให้พิมพ์ cls เพื่อออกจาการทำงาน

    return 0;
}