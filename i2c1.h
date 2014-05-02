/*****************************************************
*
*	Control program for the PitSchuLight TV-Backlight
*	(c) Peter Schulten, M�lheim, Germany
*	peter_(at)_pitschu.de
*
*	Die unver�nderte Wiedergabe und Verteilung dieses gesamten Sourcecodes
*	in beliebiger Form ist gestattet, sofern obiger Hinweis erhalten bleibt.
*
* 	Ich stelle diesen Sourcecode kostenlos zur Verf�gung und biete daher weder
*	Support an noch garantiere ich f�r seine Funktionsf�higkeit. Au�erdem
*	�bernehme ich keine Haftung f�r die Folgen seiner Nutzung.

*	Der Sourcecode darf nur zu privaten Zwecken verwendet und modifiziert werden.
*	Dar�ber hinaus gehende Verwendung bedarf meiner Zustimmung.
*
*	History
*	09.06.2013	pitschu		Start of work
*/

#ifndef __STM32F4_I2C_H
#define __STM32F4_I2C_H


#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_i2c.h"



void I2C_InitHardware(void);
int16_t I2C_ReadByte(uint8_t slave_adr, uint8_t adr);
int16_t I2C_WriteByte(uint8_t slave_adr, uint8_t adr, uint8_t wert);

//--------------------------------------------------------------
#endif
