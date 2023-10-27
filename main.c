/**********************************
 * EJERCICIO 1 UNIDAD 2
 * MATERIA: ARQUITECTURA DE HARDWARE
 * ALUMNO: OSCAR ALBERTO VALLES LIMAS
 **********************************/
#include "msp.h"


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer /DETIENE EL TIMER
	P1 ->DIR |=0x01;    //ASIGNA CON EL OPERADOR FLECHA AL REGISTRO UN 01 HEXADECIMAL  EN P1
	P1 ->OUT |=0x01;    //ASIGNA UN 01 HEXADECIMAL AL REGISTRO DE SALIDA EN P1

	while(1){   //CICLO WHILE INFINITO
	    P1 ->OUT ^=0x01;    //HACE UN BLINK EN LA DIRECCION DE SALIDA DE P1
	    _delay_cycles(500000);  //HACE UN DELAY PARA EL BLINK
	}

}
