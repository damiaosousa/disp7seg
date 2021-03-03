/*
 * File:   delay.c
 * Author: 20185076
 *
 * Created on 3 de Março de 2021, 13:33
 */



#include "config.h"
#include <xc.h>

void delay (unsigned int t)
{
    while(t)
    {
        --t;
        __delay_ms(1);
    }    
}