#include <reg51.h>
 sbit sensor = P1^0;
 sbit rs = P1^1;
 sbit rw = P1^2;
 sbit en = P1^3;
 sbit buzzer = P3^0;
 void lcd_init();
 void lcd_display(unsigned char *);
 void lcd_command(unsigned char);
 void delay();
 void main() {
    buzzer = 0;
    sensor = 0;
    lcd_init();
    lcd_display(" FIRE ALERT ");
    lcd_command(0xC0);
    lcd_display(" SYSTEM ");
    delay();
    while (1) {
        if (sensor == 1) {
            lcd_command(0x01);
            lcd_display("FIRE DETECTED");
            buzzer = 1;
        }
        delay();
    }
 }
 void lcd_init() {
    lcd_command(0x38);
    lcd_command(0x01);
    lcd_command(0x10);
    lcd_command(0x0C);
    lcd_command(0x80);
 }
 void lcd_command(unsigned char cmd) {
    P2 = cmd;
    rs = 0;
    rw = 0;
    en = 1;
    delay();
    en = 0;
 }
 void lcd_display(unsigned char *msg) {
    while (*msg) {
        P2 = *msg++;
        rs = 1;
        rw = 0;
        en = 1;
        delay();
        en = 0;
    }
 }
 void delay() {
    unsigned int i;
    for (i = 0; i < 10000; i++);
 }
