/**
   Marlin 3D Printer Firmware
   Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]

   Based on Sprinter and grbl.
   Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
#error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "ROBOMB"
#endif

#ifndef DEFAULT_MACHINE_NAME
  #define DEFAULT_MACHINE_NAME "Robo R2"
#endif

#ifndef DEFAULT_SOURCE_CODE_URL
  #define DEFAULT_SOURCE_CODE_URL "https://github.com/WheresWaldo/Marlin_for_R2"  //[BH]
#endif

#define IS_ROBOR2

#define LARGE_FLASH true

//
// Limit Switches
//
#define X_MIN_PIN     3
#ifndef X_MAX_PIN
  #define X_MAX_PIN   2
#endif
#define Y_MIN_PIN    15
#define Y_MAX_PIN    14
#define Z_MIN_PIN    19
#define Z_MAX_PIN    18

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  32
#endif

//
// Steppers
//
#define X_STEP_PIN      54
#define X_DIR_PIN       55
#define X_ENABLE_PIN    38
#define X_CS_PIN        53

#define Y_STEP_PIN      60
#define Y_DIR_PIN       61
#define Y_ENABLE_PIN    56
#define Y_CS_PIN        49

#define Z_STEP_PIN      46
#define Z_DIR_PIN       48
#define Z_ENABLE_PIN    62
#define Z_CS_PIN        40

#define E0_STEP_PIN     26
#define E0_DIR_PIN      28
#define E0_ENABLE_PIN   24
#define E0_CS_PIN       42

//#define E1_STEP_PIN     36
//#define E1_DIR_PIN      34
//#define E1_ENABLE_PIN   30
//#define E1_CS_PIN       44

//
// Temperature Sensors
//
#define TEMP_0_PIN     13   // ANALOG NUMBERING default 13
#define TEMP_1_PIN     15   // ANALOG NUMBERING default 15p
#define TEMP_BED_PIN   14   // ANALOG NUMBERING default 14

//
// Heaters / Fans
//
#ifndef MOSFET_D_PIN
  #define MOSFET_D_PIN    -1
#endif
#ifndef RAMPS_D8_PIN
  #define RAMPS_D8_PIN     8
#endif
#ifndef RAMPS_D9_PIN
  #define RAMPS_D9_PIN     9
#endif
#ifndef RAMPS_D10_PIN
  #define RAMPS_D10_PIN   10
#endif

#define HEATER_0_PIN      RAMPS_D10_PIN  // Hotend
#define HEATER_1_PIN      RAMPS_D9_PIN   // Hotend
#define HEATER_BED_PIN    RAMPS_D8_PIN   // BED

//
// Misc. Functions
//
#define SDSS			53
#define LED_PIN			 5  // [BH] robo default was 13
#define CASE_LIGHT_PIN	44  // MUST BE HARDWARE PWM (2, 3, 4, 5, 6, 7, 8, 9, 10, 44, 45) 


#ifndef FILWIDTH_PIN
  #define FILWIDTH_PIN  -1  // ANALOG NUMBERING NOT USING IN C2
#endif

// define digital pin 4 for the filament runout sensor. Use the RAMPS 1.4 digital input 4 on the servos connector
#define FILRUNOUT_PIN    45

#define CONTROLLER_FAN_PIN   6  // Pin used for the fan to cool controller (FAN1)
#define FAN_PIN              7
#define PS_ON_PIN           -1


#define LCD_PINS_RS       16
#define LCD_PINS_ENABLE   17
#define LCD_PINS_D4       23
#define LCD_PINS_D5       25
#define LCD_PINS_D6       27
#define LCD_PINS_D7       29

#define BEEPER_PIN        37

#define BTN_EN1           31
#define BTN_EN2           32
#define BTN_ENC           35

#define SD_DETECT_PIN     49
#define KILL_PIN          41

// I2C based DAC
#define DAC_STEPPER_CURRENT

// Channels available for DAC, For RoboMainboard 2.1.8 and up there are 4
#define DAC_STEPPER_ORDER      {2,3,0,1}
#define DAC_STEPPER_SENSE      0.1  // sense resistors on RoboMainboard stepper circuit are .1 value
#define DAC_STEPPER_ADDRESS    0
#define DAC_STEPPER_MAX     4096    // was 5000 but max allowable value is actually 4096
#define DAC_STEPPER_VREF       1    // internal Vref, gain 2x = 4.096V
#define DAC_STEPPER_GAIN       0    // value of 1 here sets gain of 2
//#define DAC_DISABLE_PIN     69    // set low to enable DAC
#define DAC_OR_ADDRESS      0x00

#define INA19x_Input_pin      63    //Analog pin A9, current sensor for draw from Raspi
