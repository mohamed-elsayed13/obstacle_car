/*
 * uart.h
 *
 * Created: 12/7/2014 5:11:28 PM
 *  Author: safifi
 */ 


#ifndef UART_H_
#define UART_H_
#include "header.h"

void Uart_init();
void Uart_Write(uint8_t);
void Uart_Write_string(uint8_t* str);
uint8_t Uart_Read();


#endif /* UART_H_ */