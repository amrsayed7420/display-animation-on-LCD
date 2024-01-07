/*
 * main.c
 *
 *
 *      Author: AMR SAYED
 */
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "MCAL/DIO/DIO_interface.h"
#include "HAL/LED/LED_interface.h"
#include "HAL/CLCD/CLCD_interface.h"
#define F_CPU		8000000UL
#include <util/delay.h>

u8 PLAYER[]=
{
		0x0E,
		0x0A,
		0x0E,
		0x04,
		0x0E,
		0x15,
		0x0A,
		0x11
};



u8 BALL[]=
{
		0x00,
		0x00,
		0x00,
		0x0E,
		0x0E,
		0x0E,
		0x00,
		0x00
};





u8 GOALUR[]=
{
		0x00,
		0x00,
		0x00,
		0x10,
		0x08,
		0x04,
		0x02,
		0x01
};







u8 GOALUL[]=
{
		0x04,
		0x06,
		0x05,
		0x04,
		0x04,
		0x04,
		0x04,
		0x04
};






u8 GOALDR[]=
{
		0x01,
		0x01,
		0x01,
		0x01,
		0x01,
		0x01,
		0x01,
		0x01
};








u8 GOALDL[]=
{
		0x04,
		0x04,
		0x04,
		0x04,
		0x00,
		0x00,
		0x00,
		0x00
};




u8 CUP[]=
{
		0x1F,
		0x1F,
		0x1F,
		0x0E,
		0x0E,
		0x0E,
		0x0E,
		0x1F
};



u8 CUP0[]=
{
		  0x00,
		  0x00,
		  0x00,
		  0x00,
		  0x00,
		  0x00,
		  0x00,
		  0x00
};






u8 AJAYA[]=
{
		0x0E,
		0x0A,
		0x0E,
		0x15,
		0x0E,
		0x04,
		0x0E,
		0x11
};






u8 HR[]=
{
		0x04,
		0x0A,
		0x11,
		0x01,
		0x02,
		0x04,
		0x08,
		0x10
};





u8 HL[]=
{
		0x04,
		0x0A,
		0x11,
		0x10,
		0x08,
		0x04,
		0x02,
		0x01
};



int main(void)
{
	CLCD_voidInit();



	while(1)
	{
		for(u8 i = 0 ; i < 2 ; i++)
		{
			CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_1);
			CLCD_voidSendString((u8*)"mart L Hussein");

			CLCD_voidSendExtraChar(0 , PLAYER , CLCD_ROW_2 , i);
			CLCD_voidSendExtraChar(1 , BALL , CLCD_ROW_2 , i+1);

			CLCD_voidSendExtraChar(2 , GOALUL , CLCD_ROW_1 , CLCD_COL_15);
			CLCD_voidSendExtraChar(3 , GOALUR , CLCD_ROW_1 , CLCD_COL_16);
			CLCD_voidSendExtraChar(4 , GOALDL , CLCD_ROW_2 , CLCD_COL_15);
			CLCD_voidSendExtraChar(5 , GOALDR , CLCD_ROW_2 , CLCD_COL_16);

			_delay_ms(600);
			CLCD_voidSendCommand(CLCD_CLEAR_DISPLAY);

		}

		/////////////////////////////////////////////////////
		for(u8 i = 2 ; i < 3 ; i++)
		{
			CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_1);
			CLCD_voidSendString((u8*)"Hussein");

			CLCD_voidSendExtraChar(0 , PLAYER , CLCD_ROW_2 , i);
			CLCD_voidSendExtraChar(1 , BALL , CLCD_ROW_2 , i+1);

			CLCD_voidSendExtraChar(2 , GOALUL , CLCD_ROW_1 , CLCD_COL_15);
			CLCD_voidSendExtraChar(3 , GOALUR , CLCD_ROW_1 , CLCD_COL_16);
			CLCD_voidSendExtraChar(4 , GOALDL , CLCD_ROW_2 , CLCD_COL_15);
			CLCD_voidSendExtraChar(5 , GOALDR , CLCD_ROW_2 , CLCD_COL_16);

			_delay_ms(600);
			CLCD_voidSendCommand(CLCD_CLEAR_DISPLAY);

		}



		////////////////////////////////////////
		for(u8 i = 3 ; i <5 ; i++)
		{
			CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_1);
			CLCD_voidSendString((u8*)"LA..LA..LA..LA..LA..LA");

			CLCD_voidSendExtraChar(0 , PLAYER , CLCD_ROW_2 , i);
			CLCD_voidSendExtraChar(1 , BALL , CLCD_ROW_2 , i+1);

			CLCD_voidSendExtraChar(2 , GOALUL , CLCD_ROW_1 , CLCD_COL_15);
			CLCD_voidSendExtraChar(3 , GOALUR , CLCD_ROW_1 , CLCD_COL_16);
			CLCD_voidSendExtraChar(4 , GOALDL , CLCD_ROW_2 , CLCD_COL_15);
			CLCD_voidSendExtraChar(5 , GOALDR , CLCD_ROW_2 , CLCD_COL_16);

			_delay_ms(500);
			CLCD_voidSendCommand(CLCD_CLEAR_DISPLAY);

		}
		///////////////////////////////////////////////
		for(u8 i = 6 ; i < 14 ; i++)
		{
			CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_1);
			CLCD_voidSendString((u8*)"OHOOOOOOOOOH");

			CLCD_voidSendExtraChar(0 , PLAYER , CLCD_ROW_2 , i);
			CLCD_voidSendExtraChar(1 , BALL , CLCD_ROW_2 , i+1);

			CLCD_voidSendExtraChar(2 , GOALUL , CLCD_ROW_1 , CLCD_COL_15);
			CLCD_voidSendExtraChar(3 , GOALUR , CLCD_ROW_1 , CLCD_COL_16);
			CLCD_voidSendExtraChar(4 , GOALDL , CLCD_ROW_2 , CLCD_COL_15);
			CLCD_voidSendExtraChar(5 , GOALDR , CLCD_ROW_2 , CLCD_COL_16);

			_delay_ms(450);
			CLCD_voidSendCommand(CLCD_CLEAR_DISPLAY);

		}


		//////////////////////////////////////////////////////

		CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_5);
			CLCD_voidSendString((u8*)"AL AHLY");

			CLCD_voidSendExtraChar(1 , HL , CLCD_ROW_1 , CLCD_COL_2);
			CLCD_voidSendExtraChar(2 , HR , CLCD_ROW_1 , CLCD_COL_3);


			CLCD_voidSendExtraChar(1 , HL , CLCD_ROW_1 , CLCD_COL_13);
			CLCD_voidSendExtraChar(2 , HR , CLCD_ROW_1 , CLCD_COL_14);


			CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_4);
			CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_5);
			CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_6);
			CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_7);
			CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_8);
			CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_9);
			CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_10);
			CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_11);
			_delay_ms(500);


		for(u8 i = 0 ; i < 2; i++)
				{

		CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_12);
		_delay_ms(300);
		CLCD_voidSendExtraChar(4 , CUP0 , CLCD_ROW_2 , CLCD_COL_12);
		_delay_ms(300);

				}
		CLCD_voidSendExtraChar(3 , CUP , CLCD_ROW_2 , CLCD_COL_12);

				_delay_ms(900);
				CLCD_voidSendCommand(CLCD_CLEAR_DISPLAY);


		////////////////////////////////////////////////////////////////



		CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_1);
		CLCD_voidSendString((u8*)"w baqdam Ajaya");

		CLCD_voidSendExtraChar(1 , AJAYA , CLCD_ROW_2 , CLCD_COL_3);

		CLCD_voidSetPosition(CLCD_ROW_2 , CLCD_COL_8);

		CLCD_voidSendString((u8*)"GOALLLLL");

		_delay_ms(2500);
		CLCD_voidSendCommand(CLCD_CLEAR_DISPLAY);







	}
	
	return 0 ;
}

