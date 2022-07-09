// ---------------------------------------------------------------- //
// Arduino Ultrasoninc Distance Sensor (HC-SR04)
// Using Arduino IDE 1.8.16
// Tested on 05 Jul 2022
// ---------------------------------------------------------------- //

//=================================================================
// Drivers & Libraries
//=================================================================
#include "stdio.h"
/*
   @todo - add codes to include library header
*/


//=================================================================
//  Pins Definition
//=================================================================
/*
   @todo - define pins for ultrasonic & buzzer
*/
#define echo_pin 17 // attach pin A2 Arduino to pin Echo of HC-SR04
#define trig_pin 16 // attach pin A3 Arduino to pin Trig of HC-SR04
#define buzz_pin 15 // attach pin A1 Arduino tp pin Vcc of buzzer

//=================================================================
//  Variables Declaration
//=================================================================
/*
   @todo (ultrasonic) - declare variables for distance calculation
*/



/*
   @todo - oled display (SSD1306), add codes to declare display instance
*/


//=================================================================
// LED blink
//=================================================================
void led_blink()
{
  // On for 100msec
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  // Off for 100msec
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

//=================================================================
//  Trigger pulse & measure travel time
//=================================================================
void trigger_measure()
{
  /**
      @todo (ultrasonic) - add codes to write a trigger pulse & wait to receive the echo pulse
  */
  
  
}

//=================================================================
//  Calculate distance
//=================================================================
void calculate_distance()
{
  // Calculating the distance
  /**
      @todo (ultrasonic) - add codes to calculate distance
  */
  
}

//=================================================================
//  Write distance to OLED display
//=================================================================
void draw(void)
{
  /**
      @todo (oled display) - add codes to display text
  */
  
  
}

//=================================================================
//  
//=================================================================
void play_tone(void)
{
  
  
}

//=================================================================
//  System Initialization
//=================================================================
void setup(void) 
{
  // Configure I/O pins
  /**
      @todo - add codes to configure pins as input or output
  */
  pinMode(LED_BUILTIN, OUTPUT);  // Set pin LED_BUILTIN as an output

  // Serial monitor setup (baudrate: 9600)
  Serial.begin(9600);
  Serial.println("Ultrasonic Distance Sensor");
  Serial.println("with Arduino UNO R3");
}

//=================================================================
//  Logic Execution
//=================================================================
void loop(void) {

  // Comment off led_blink(), for faster response on ultrasonic distance measurement
  // LED blink
  led_blink();

  // Trigger ultrasonic pulse and measure duration
  trigger_measure();

  // Calculate distance based on lapsed interval
  calculate_distance();

  /**
      @todo - add new logic here
  */
  
  delay(50);
}