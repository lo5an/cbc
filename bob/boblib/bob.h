#ifndef __BOB_H__
#define __BOB_H__

#include <boards/at91sam7a3-ek/at91sam7a3/AT91SAM7A3.h>

#ifndef BUILD_DATE
#define BUILD_DATE ""
#endif

#define VERSION "BOBV2 BETA2.1"

#define VERSION_STRING (VERSION " " BUILD_DATE)

#define CBOB_VERSION 214

#define MCK 48054857

#define nop()  __asm__ __volatile__("nop")

#define RAMFUNC __attribute__((section(".ramfunc")))

#define BOARD_ADC_FREQ 5000000

// Servo PWM PERIOD
// this will produce a PWM at 50Hz
#define SC_PWM_PERIOD	15000

// Servo PWM Pins
#define PIN_PWM0 {1<<18, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}
#define PIN_PWM1 {1<<19, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}
#define PIN_PWM2 {1<<20, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}
#define PIN_PWM3 {1<<21, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}

// Motor PWM PERIOD
// this will produce about 100kHz PWM
#define MC_PWM_PERIOD	480
#define MC_PID_PERIOD	10			// Loop every 10ms
#define MC_INDUCTION_SPIKE	600		// microsecond delay once motors are turned off

#define MC_POSITION_SCALE 51

// Measuers the battery voltage every MC_PID_PERIOD*n milliseconds
#define BATTV_PERIOD 5

//Motor PWM Pins
#define PIN_PWM4 {1<<22, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}
#define PIN_PWM5 {1<<23, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}
#define PIN_PWM6 {1<<24, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}
#define PIN_PWM7 {1<<25, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}

#define PIN_PWM4_OFF {1<<22, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PWM5_OFF {1<<23, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PWM6_OFF {1<<24, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PWM7_OFF {1<<25, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT}

//Motor Direction Pins
#define PIN_PA26 {1<<26, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_1, PIO_DEFAULT}
#define PIN_PA27 {1<<27, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_1, PIO_DEFAULT}
#define PIN_PA28 {1<<28, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_1, PIO_DEFAULT}
#define PIN_PA29 {1<<29, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_1, PIO_DEFAULT}

// Motor enable pin
#define PIN_PB3 {1<<3, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}

// Motor ADC pins
#define PIN_ADC0_AD0 {1<<14, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC0_AD1 {1<<15, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC0_AD2 {1<<16, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC0_AD3 {1<<17, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC0_AD4 {1<<18, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC0_AD5 {1<<19, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC0_AD6 {1<<20, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC0_AD7 {1<<21, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}

// Analog Sensor ADC Pins
#define PIN_ADC1_AD0 {1<<22, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC1_AD1 {1<<23, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC1_AD2 {1<<24, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC1_AD3 {1<<25, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC1_AD4 {1<<26, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC1_AD5 {1<<27, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC1_AD6 {1<<28, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_ADC1_AD7 {1<<29, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}

// Analog pins to Digital output
#define PIN_PB22_OUT	{1<<22, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB23_OUT	{1<<23, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB24_OUT	{1<<24, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB25_OUT	{1<<25, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB26_OUT	{1<<26, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB27_OUT	{1<<27, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB28_OUT	{1<<28, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB29_OUT	{1<<29, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}

// Digital Input Sensor Pins
#define PIN_PB6  {1<<6,  AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_PB7  {1<<7,  AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_PB8  {1<<8,  AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_PB9  {1<<9,  AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_PB10 {1<<10, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_PB11 {1<<11, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_PB12 {1<<12, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_PB13 {1<<13, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}

// Digital Output Sensor Pins
#define PIN_PB6_OUT  {1<<6,  AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB7_OUT  {1<<7,  AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB8_OUT  {1<<8,  AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB9_OUT  {1<<9,  AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB10_OUT {1<<10, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB11_OUT {1<<11, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB12_OUT {1<<12, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}
#define PIN_PB13_OUT {1<<13, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_0, PIO_DEFAULT}

// Micro SD CARD Pins
#define PIN_MCDA2 {1<<13, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}
#define PIN_MCDA3 {1<<14, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}
#define PIN_MCCDA {1<<16, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}
#define PIN_MCCK  {1<<17, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}
#define PIN_MCDA0 {1<<15, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}
#define PIN_MCDA1 {1<<12, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}

#define PINS_SDCARD PIN_MCDA0,PIN_MCDA1,PIN_MCDA2,PIN_MCDA3,PIN_MCCDA,PIN_MCCK

// BATTV_SELECT Pin
#define PIN_PA7 {1<<7, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_1, PIO_DEFAULT}

// Black Button
#define PIN_PB2 {1<<2, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}

// Sensor Voltage rails
#define PIN_PB5 {1<<5, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}
#define PIN_PB4 {1<<4, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_OUTPUT_1, PIO_DEFAULT}

// Chumby SPI
#define PIN_SPI1_NPSC0 {1<<4,  AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}
#define PIN_SPI1_MISO  {1<<8,  AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}
#define PIN_SPI1_MOSI  {1<<9,  AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}
#define PIN_SPI1_SPCK  {1<<10, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_B, PIO_DEFAULT}

#define PINS_SPI1 PIN_SPI1_SPCK,PIN_SPI1_MOSI,PIN_SPI1_MISO,PIN_SPI1_NPSC0

// Serial Port
#define PIN_UART0_RXD {1<<2, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}
#define PIN_UART0_TXD {1<<3, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}

// Chumby Bend
#define PIN_PA6  {1<<6, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT}

// Chumby SS1
#define PIN_PA11  {1<<11, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_OUTPUT_0, PIO_DEFAULT}

// CBC Charge / Chumby Reset
#define PIN_PA5	 {1<<5, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_INPUT, PIO_DEFAULT}

// Accelerometer Int pins
#define PIN_ACCINT1 {1<<0, AT91C_BASE_PIOB, AT91C_ID_PIOB, PIO_INPUT, PIO_DEFAULT}

// Two-Wire Interface
#define	TWCK	400000
#define PIN_TWID  {1<<0, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}
#define PIN_TWICK {1<<1, AT91C_BASE_PIOA, AT91C_ID_PIOA, PIO_PERIPH_A, PIO_DEFAULT}

// Some names for convenience

// Digital Sensor Pins
#define BLACK_BUTTON PIN_PB2

#define DIG0 PIN_PB13
#define DIG1 PIN_PB12
#define DIG2 PIN_PB11
#define DIG3 PIN_PB10
#define DIG4 PIN_PB9
#define DIG5 PIN_PB8
#define DIG6 PIN_PB7
#define DIG7 PIN_PB6

#define DIGITAL_INPUTS DIG0,DIG1,DIG2,DIG3,\
                        DIG4,DIG5,DIG6,DIG7

#define DIG0_OUT PIN_PB13_OUT
#define DIG1_OUT PIN_PB12_OUT
#define DIG2_OUT PIN_PB11_OUT
#define DIG3_OUT PIN_PB10_OUT
#define DIG4_OUT PIN_PB9_OUT
#define DIG5_OUT PIN_PB8_OUT
#define DIG6_OUT PIN_PB7_OUT
#define DIG7_OUT PIN_PB6_OUT

#define DIGITAL_OUTPUTS DIG0_OUT,DIG1_OUT,DIG2_OUT,DIG3_OUT,\
						DIG4_OUT,DIG5_OUT,DIG6_OUT,DIG7_OUT

// Analog pins set as digital outputs
#define ADIG0_OUT PIN_PB22_OUT
#define	ADIG1_OUT PIN_PB23_OUT
#define ADIG2_OUT PIN_PB24_OUT
#define ADIG3_OUT PIN_PB25_OUT
#define ADIG4_OUT PIN_PB26_OUT
#define ADIG5_OUT PIN_PB27_OUT
#define ADIG6_OUT PIN_PB28_OUT
#define ADIG7_OUT PIN_PB29_OUT

#define	ADIGITAL_OUTPUTS ADIG0_OUT,ADIG1_OUT,ADIG2_OUT,ADIG3_OUT,\
						 ADIG4_OUT,ADIG5_OUT,ADIG6_OUT,ADIG7_OUT

// Analog Sensor Pins
#define ANG0 PIN_ADC1_AD0
#define ANG1 PIN_ADC1_AD1
#define ANG2 PIN_ADC1_AD2
#define ANG3 PIN_ADC1_AD3
#define ANG4 PIN_ADC1_AD4
#define ANG5 PIN_ADC1_AD5
#define ANG6 PIN_ADC1_AD6
#define ANG7 PIN_ADC1_AD7

#define ANALOG_SENSORS ANG0,ANG1,ANG2,ANG3,ANG4,ANG5,ANG6,ANG7

// Power on the sensor voltage rails
#define SENS_VEN   PIN_PB4	// Vcc enable pin
#define SENS_VSTAT PIN_PB5	// Vcc overload status indicator

// Battv sensor
#define BATTV_SELECT PIN_PA7

#define SENSORS DIGITAL_INPUTS,ANALOG_SENSORS,BATTV_SELECT,SENSOR_POWER

// Servo Pins
#define SERVO0 PIN_PWM0
#define SERVO1 PIN_PWM1
#define SERVO2 PIN_PWM2
#define SERVO3 PIN_PWM3

#define SERVOS SERVO0,SERVO1,SERVO2,SERVO3

// Motor Pins
#define MC_PWM0 PIN_PWM4
#define MC_PWM1 PIN_PWM5
#define MC_PWM2 PIN_PWM6
#define MC_PWM3 PIN_PWM7

#define MC_PWM MC_PWM0,MC_PWM1,MC_PWM2,MC_PWM3

#define MC_PWM0_OFF PIN_PWM4_OFF
#define MC_PWM1_OFF PIN_PWM5_OFF
#define MC_PWM2_OFF PIN_PWM6_OFF
#define MC_PWM3_OFF PIN_PWM7_OFF

#define MC_PWM_OFF MC_PWM0_OFF,MC_PWM1_OFF,\
                   MC_PWM2_OFF,MC_PWM3_OFF

#define MC_DIR0 PIN_PA26
#define MC_DIR1 PIN_PA27
#define MC_DIR2 PIN_PA28
#define MC_DIR3 PIN_PA29

#define MOEN PIN_PB3

#define MC_DIR MC_DIR0,MC_DIR1,MC_DIR2,MC_DIR3,MOEN

#define MADC0 PIN_ADC0_AD1
#define MADC1 PIN_ADC0_AD0
#define MADC2 PIN_ADC0_AD2
#define MADC3 PIN_ADC0_AD3
#define MADC4 PIN_ADC0_AD4
#define MADC5 PIN_ADC0_AD5
#define MADC6 PIN_ADC0_AD6
#define MADC7 PIN_ADC0_AD7

#define MADC MADC0,MADC1,MADC2,MADC3,\
             MADC4,MADC5,MADC6,MADC7
	
             
#define MOTORS MADC,MC_DIR,MC_PWM_OFF

// Chumby Pins
#define CHUMBY_RESET PIN_PA5
#define CHARGING	 PIN_PA5
#define CHUMBY_BEND  PIN_PA6
#define CHUMBY_SS1   PIN_PA11

#define CHUMBY_SPCK  PIN_SPI1_SPCK
#define CHUMBY_MOSI  PIN_SPI1_MOSI
#define CHUMBY_MISO  PIN_SPI1_MISO
#define CHUMBY_NPSC0 PIN_SPI1_NPSC0

#define CHUMBY CHUMBY_RESET,CHUMBY_BEND,CHUMBY_SPCK,\
               CHUMBY_MOSI,CHUMBY_MISO,CHUMBY_NPSC0,CHUMBY_SS1

// UART/TWI Pins
#define SERIAL_RXD   PIN_UART0_RXD
#define SERIAL_TXD   PIN_UART0_TXD
#define TWI_SDA          PIN_TWID
#define TWI_SCL          PIN_TWICK

#define COMMS SERIAL_RXD,SERIAL_TXD,TWI_SDK,TWI_SCL

void BobInit();
void BobTest();

#endif
