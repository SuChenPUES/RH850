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
	while(RSCAN0.GSTS.UINT8[LL]&0x08~=0)/*GRAMINITが0でなければ待つ*/
	{
		sleep(5);
	}
	
	RSCAN0.GCTR.UINT8[LL/LH/HL]&=0xFB;/*GSLPRを0にする*/
	
	RSCAN0.C0CTR.UINT8[LL/LH/HL/HH]&=0xFB;/*CSLPRを0にする*/
	
	
}
 