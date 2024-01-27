/*
 * ic1306.h
 *
 *  Created on: Dec 28, 2023
 *      Author: My
 */

#ifndef INC_IC1306_H_
#define INC_IC1306_H_


#ifndef SSD1306_I2C_ADDR
#define SSD1306_I2C_ADDR 0x78
//#define SSD1306_I2C_ADDR 0x7A
#endif
void display_init (uint8_t contrast, uint8_t bright);

void display_clear (uint8_t start, uint8_t stop);

void display_MediumPrint(uint8_t posx, uint8_t posy,uint8_t *str);



#endif /* INC_IC1306_H_ */
