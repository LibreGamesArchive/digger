/* Digger Remastered
   Copyright (c) Andrew Jenner 1998-2004 */

#include "device.h"

void soundinitglob(int port,int irq,int dma,uint16_t bufsize,uint16_t samprate);
void s1setupsound(void);
void s1killsound(void);
void s1fillbuffer(void);
void s1settimer2(uint16_t t2);
void s1soundoff(void);
void s1setspkrt2(void);
void s1settimer0(uint16_t t0);
void s1timer0(uint16_t t0);
void s1timer2(uint16_t t2);

uint8_t getsample(void);
