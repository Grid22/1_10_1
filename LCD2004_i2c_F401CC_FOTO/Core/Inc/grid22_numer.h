/*
 * Библиотека создана для формирования больших цифр
 * на єкране LCD 1602 или LCD 2004
 * версия 1
 */

#ifndef GRID22_NUMER_H
#define GRID22_NUMER_H
#include <main.h>
#include <string.h>
#include <stdbool.h>
#include "lcd1602_i2c_lib.h"

void lcd_print_hours(uint8_t hours) ;
void lcd_print_minutes (uint8_t minutes) ;
void lcd_print_s(uint8_t x, uint8_t y) ;
void lcd_print_sekonds (uint8_t sekonds) ;
void lcd_print_date(uint8_t day) ;
void lcd_print_month(uint8_t month) ;
void lcd_print_weekdey(uint8_t month) ;
void lcd_print_test() ;
void lcd_symbol_creat() ;


#endif
