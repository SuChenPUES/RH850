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

void main(void);

void main(void)
{
	
	while((RSCAN0.GSTS.UINT8[0]&0x08)!=0)/*Wait if GRAMINIT is not 0*/
	{
		__nop();
	}
	
	RSCAN0.GCTR.UINT8[0]&=0xFB;/*Set GSLPR=0*/
	
	RSCAN0.C0CTR.UINT8[0]&=0xFB;/*Set CSLPR=0*/
	
	
}
 