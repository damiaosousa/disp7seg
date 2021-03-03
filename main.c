/*
 * File:   main.c
 * Author: 20185076
 *
 * Created on 3 de Março de 2021, 13:33
 */


#include <xc.h>

#include "disp7seg.h"
#include <xc.h>
#include "config.h"
#include "delay.h"

void main(void) 
{
    int cont;
    disp7seg_init();
    
    while(1)
    {
        for(cont = 0; cont <= 20; cont++)
        {
            disp7seg(cont);
            delay(1000); 
        }
    }
}