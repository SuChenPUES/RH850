/***********************************************************************/
/*                                                                     */
/*  FILE        :Main.c                                                */
/*  DATE        :Mon, Oct 24, 2016                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :                                                      */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/

#include "iodefine.h"
#include <system.h>

void main(void);

void main(void)
{
	while(RSCAN0.GSTS.UINT8[LL]&0x08~=0)/*GRAMINIT��0�łȂ���Α҂�*/
	{
		sleep(5);
	}
	
	RSCAN0.GCTR.UINT8[LL/LH/HL]&=0xFB;/*GSLPR��0�ɂ���*/
	
	RSCAN0.C0CTR.UINT8[LL/LH/HL/HH]&=0xFB;/*CSLPR��0�ɂ���*/
	
	
}
 