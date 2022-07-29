/*
 * Библиотека создана для формирования больших цифр
 * на єкране LCD 1602 или LCD 2004
 * версия 1
 */
#include "grid22_numer.h"
//#include "lcd1602_i2c_lib.h"
#include <stdio.h>
uint8_t x = 0 ;
uint8_t y = 0 ;


__STATIC_INLINE void DelayMicro(__IO uint32_t micros)
	{
	micros *= (SystemCoreClock/1000000)/5 ;
	}


void lcd_symbol_creat(){
	uint8_t symbol800[8] = {0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f} ; // EL800 (1)
	uint8_t symbol300[8] = {0x1f,0x1f,0x1f,0x0,0x0,0x0,0x0,0x0} ;      // EL300 (2)
	uint8_t symbol302[8] = {0x1f,0x1f,0x1f,0x0,0x0,0x0,0x1f,0x1f} ;    // EL302 (3)
	uint8_t symbol003[8] = {0x0,0x0,0x0,0x0,0x0,0x1f,0x1f,0x1f} ;      // EL003 (4)
	uint8_t symbol103[8] = {0x1f,0x0,0x0,0x0,0x0,0x1f,0x1f,0x1f} ;     // EL103 (5)
	uint8_t symbol000[8] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0} ;         // EL000 (6)
	uint8_t symbol002[8] = {0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x1f} ;       // EL002 (7)
	uint8_t symbol100[8] = {0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0} ;        // EL100 (8)

	lcd1602_Create_symbol((uint8_t *) symbol800, 1) ;
	lcd1602_Create_symbol((uint8_t *) symbol300, 2) ;
	lcd1602_Create_symbol((uint8_t *) symbol302, 3) ;
	lcd1602_Create_symbol((uint8_t *) symbol003, 4) ;
	lcd1602_Create_symbol((uint8_t *) symbol103, 5) ;
	lcd1602_Create_symbol((uint8_t *) symbol000, 6) ;
	lcd1602_Create_symbol((uint8_t *) symbol002, 7) ;
	lcd1602_Create_symbol((uint8_t *) symbol100, 8) ;
}

/*void lcd_symbol_null(uint8_t x, uint8_t y){
	symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(6) ;
}*/

static void lcd_symbol_0(uint8_t x, uint8_t y){
//	symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(2) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(4) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(1) ;
}
static void lcd_symbol_1(uint8_t x, uint8_t y){
//	symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(6) ;
}

static void lcd_symbol_2(uint8_t x, uint8_t y){
//	symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(5) ;
}
static void lcd_symbol_3(uint8_t x, uint8_t y){
//	symbol_creat() ;


	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(1) ;
}
static void lcd_symbol_4(uint8_t x, uint8_t y){
//	symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(7) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(8) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(8) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(1) ;
}
static void lcd_symbol_5(uint8_t x, uint8_t y){
//	symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(1) ;
}
static void lcd_symbol_6(uint8_t x, uint8_t y){
//	symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(1) ;

}

static void lcd_symbol_7(uint8_t x, uint8_t y){
//	symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(2) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(2) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(6) ;
}

static void lcd_symbol_8(uint8_t x, uint8_t y){
//	symbol_creat() ;


	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, +1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(1) ;

}

static void lcd_symbol_9(uint8_t x, uint8_t y){
	//symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x+1, y) ;
	lcd1602_Print_symbol(3) ;
	lcd1602_SetCursor(x+2, y) ;
	lcd1602_Print_symbol(1) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+1,y+1) ;
	lcd1602_Print_symbol(5) ;
	lcd1602_SetCursor(x+2, y+1) ;
	lcd1602_Print_symbol(1) ;
}

/*void lcd_symbol_duble(uint8_t x, uint8_t y){
	uint8_t symbol030[8] = {0x0,0x0,0xe,0xa,0xe,0x0,0x0} ;
	lcd1602_Create_symbol((uint8_t *) symbol030, 8) ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(8) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(8) ;
}*/

static void lcd_symbol_dublenull(uint8_t x, uint8_t y){
	//symbol_creat() ;

	lcd1602_SetCursor(x, y) ;
	lcd1602_Print_symbol(6) ;
	lcd1602_SetCursor(x, y+1) ;
	lcd1602_Print_symbol(6) ;

}
/*
void lcd_print_test(){
	lcd_symbol_1(x, y) ;
	lcd_symbol_2(x+4, y) ;
}*/




void lcd_print_hours (uint8_t hours){
	//symbol_creat() ;
	if (hours / 10 == 0) {
        lcd_symbol_dublenull(x+0, y) ;
	    lcd_symbol_dublenull(x+1, y) ;
	    lcd_symbol_dublenull(x+2, y) ;
	    } else {
	    if(hours / 10 == 1) lcd_symbol_1(x, y) ;
	    if(hours / 10 == 2) lcd_symbol_2(x, y) ;
	    }
	   if(hours % 10 == 0) lcd_symbol_0(x+4, y) ;
	   if(hours % 10 == 1) lcd_symbol_1(x+4, y) ;
	   if(hours % 10 == 2) lcd_symbol_2(x+4, y) ;
	   if(hours % 10 == 3) lcd_symbol_3(x+4, y) ;
	   if(hours % 10 == 4) lcd_symbol_4(x+4, y) ;
	   if(hours % 10 == 5) lcd_symbol_5(x+4, y) ;
	   if(hours % 10 == 6) lcd_symbol_6(x+4, y) ;
	   if(hours % 10 == 7) lcd_symbol_7(x+4, y) ;
	   if(hours % 10 == 8) lcd_symbol_8(x+4, y) ;
	   if(hours % 10 == 9) lcd_symbol_9(x+4, y) ;
}

void lcd_print_minutes (uint8_t minutes) {
//	symbol_creat() ;
		if (minutes / 10 == 0) {
		lcd_symbol_0(x+8, y) ;
		} else {
		if(minutes / 10 == 1) lcd_symbol_1(x+8, y) ;
		if(minutes / 10 == 2) lcd_symbol_2(x+8, y) ;
		if(minutes / 10 == 3) lcd_symbol_3(x+8, y) ;
		if(minutes / 10 == 4) lcd_symbol_4(x+8, y) ;
		if(minutes / 10 == 5) lcd_symbol_5(x+8, y) ;
		}
		if(minutes % 10 == 0) lcd_symbol_0(x+12, y) ;
		if(minutes % 10 == 1) lcd_symbol_1(x+12, y) ;
		if(minutes % 10 == 2) lcd_symbol_2(x+12, y) ;
		if(minutes % 10 == 3) lcd_symbol_3(x+12, y) ;
		if(minutes % 10 == 4) lcd_symbol_4(x+12, y) ;
		if(minutes % 10 == 5) lcd_symbol_5(x+12, y) ;
		if(minutes % 10 == 6) lcd_symbol_6(x+12, y) ;
		if(minutes % 10 == 7) lcd_symbol_7(x+12, y) ;
		if(minutes % 10 == 8) lcd_symbol_8(x+12, y) ;
		if(minutes % 10 == 9) lcd_symbol_9(x+12, y) ;
	}

void lcd_print_s(uint8_t x, uint8_t y) {
	lcd1602_SetCursor(x+7, y) ;
	lcd1602_Print_symbol(4) ;
	lcd1602_SetCursor(x+7, y+1) ;
	lcd1602_Print_symbol(2) ;
	HAL_Delay(500) ;
	lcd_symbol_dublenull(x+7, y) ;
	HAL_Delay(500) ;
	}

void lcd_print_sekonds (uint8_t sekonds){
	extern char lcd1602_tx_buffer[40] ;
	if (sekonds < 10) {
		lcd1602_SetCursor(x+15, y+1) ;
		lcd1602_Print_symbol(6) ;
		lcd1602_SetCursor(x+16, y+1) ;
		sprintf(lcd1602_tx_buffer, "%d", sekonds ) ;
		lcd1602_Print_text(lcd1602_tx_buffer) ;
	} else {
	if(sekonds >= 10) {
		lcd1602_SetCursor(x+15, 1) ;
		sprintf(lcd1602_tx_buffer, "%d", sekonds ) ;
		lcd1602_Print_text(lcd1602_tx_buffer) ;}
		}
	}

void lcd_print_date (uint8_t day){
	extern char lcd1602_tx_buffer[40] ;
	if (day < 10) {
		lcd1602_SetCursor(x+15, y) ;
		lcd1602_Print_symbol(6) ;
		lcd1602_SetCursor(x+16, y) ;
		sprintf(lcd1602_tx_buffer, "%d.", day ) ;
		lcd1602_Print_text(lcd1602_tx_buffer) ;
    } else {
    	lcd1602_SetCursor(x+15, y) ;
        sprintf(lcd1602_tx_buffer, "%d.", day ) ;
        lcd1602_Print_text(lcd1602_tx_buffer) ;
    	}
	}

void lcd_print_month (uint8_t month){
	extern char lcd1602_tx_buffer[40] ;
	if (month < 10) {
		lcd1602_SetCursor(x+18, y) ;
		lcd1602_Print_symbol(6) ;
		lcd1602_SetCursor(x+18, y) ;
		sprintf(lcd1602_tx_buffer, "0%d", month ) ;
		lcd1602_Print_text(lcd1602_tx_buffer) ;
    } else {
    	lcd1602_SetCursor(x+18, y) ;
        sprintf(lcd1602_tx_buffer, "%d", month ) ;
        lcd1602_Print_text(lcd1602_tx_buffer) ;
    	}
	}

void lcd_print_weekdey(uint8_t dow) {
	extern char lcd1602_tx_buffer[40] ;
	char WDAY0[] = "HH";
	char WDAY1[] = "PH";
	char WDAY2[] = "BT";
	char WDAY3[] = "CP";
	char WDAY4[] = "4T";
	char WDAY5[] = "PT";
	char WDAY6[] = "SB";
	char WDAY7[] = "BC";
	char * WDAY[8]={WDAY0, WDAY1, WDAY2, WDAY3, WDAY4, WDAY5, WDAY6, WDAY7} ;

	lcd1602_SetCursor(x+18, y+1) ;
	lcd1602_Print_text(WDAY[dow]) ;
//	sprintf(lcd1602_tx_buffer, "%c", WDAY[dow]) ;
//	lcd1602_Print_text(lcd1602_tx_buffer) ;

//	lcd1602_SetCursor(0, 2) ;
//	sprintf(lcd1602_tx_buffer, "%c", WDAY[1]) ;
//	lcd1602_Print_text(lcd1602_tx_buffer) ;
//
//	lcd1602_SetCursor(0, 3) ;
//	sprintf(lcd1602_tx_buffer, "%d", dow) ;
//	lcd1602_Print_text(lcd1602_tx_buffer) ;
}
