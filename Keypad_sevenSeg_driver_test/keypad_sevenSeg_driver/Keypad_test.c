/*****************************************************************
 Name        : Keypad driver test
 Author      : Sarah
 Description : Test the keypad driver with 7-segment on Proteus

 ********************************************************************/
#include "keypad.h"
#include "seven_segment.h"

int main(void)
{
	uint8 key;

	SevenSegment_Init();


	while(1){
		/* Get the pressed button from keypad */
		key = KEYPAD_getPressedKey();

		if((key >= 0) && (key <= 9))
		{
			SevenSegment_Display(key); /* display the key number on the 7-segment */
		}

	}
}



