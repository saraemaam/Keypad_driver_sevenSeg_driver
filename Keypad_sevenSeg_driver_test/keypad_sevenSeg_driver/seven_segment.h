/****************************************************************
 * Module      :seven Segment
 * File name   :seven_segment.h
 * Description : Seven segment header file
 * Author      : Sarah
 ****************************************************************/

#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include"std_types.h"
#include "gpio.h"

/* Choose here if you are connecting your seven segment using decoder*/
#define SEVEN_SEGMENT_DECODER


#ifndef SEVEN_SEGMENT_DECODER

/* normal seven segment without decoder on etamini32 connected on PortA from PA1-->PA7 */

#define SEVEN_SEG1_2_A_PIN   PIN1_ID
#define SEVEN_SEG1_2_B_PIN   PIN2_ID
#define SEVEN_SEG1_2_C_PIN   PIN3_ID
#define SEVEN_SEG1_2_D_PIN   PIN4_ID
#define SEVEN_SEG1_2_E_PIN   PIN5_ID
#define SEVEN_SEG1_2_F_PIN   PIN6_ID
#define SEVEN_SEG1_2_G_PIN   PIN7_ID



#else

/* seven segment using Decoder */

#define SEVEN_SEGMENT_USING_DECODER_PORT    PORTC_ID

#define SEVEN_SEGMENT_USING_DECODER_PIN0    PIN0_ID
#define SEVEN_SEGMENT_USING_DECODER_PIN1    PIN1_ID
#define SEVEN_SEGMENT_USING_DECODER_PIN2    PIN2_ID
#define SEVEN_SEGMENT_USING_DECODER_PIN3    PIN3_ID

#endif


/* Make seven segment pin's direction as output pins */
void SevenSegment_Init (void);

void SevenSegment_Display(uint8 value);




#endif /* SEVEN_SEGMENT_H_ */
