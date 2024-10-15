#ifndef __OLED_PORT_H__
#define __OLED_PORT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdint.h>

#define OLED_LOG (void)

//对应要实现的接口函数
void OLED_Init(void); //初始化驱动

void OLED_drawPixel(int x, int y, uint8_t value);
void OLED_SendBuff(uint8_t buff[8][128]); //将8*128字节的buff一次性全部发送的函数

int OLED_getKey(void);

int OLED_isRun(void);

void OLED_close(void);


#ifdef __cplusplus
}
#endif

#endif

