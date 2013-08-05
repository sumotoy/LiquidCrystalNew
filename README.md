LiquidCrystalNew
================

A better universal alphanumeric LCD library for Arduino and Teensy 2,3.
This library it's basically LiquidCrystal440 http://code.google.com/p/liquidcrystal440/

Features

. Commands are almost the same of the original LiquidCrystal library.

. Can drive 2 chip displays (usually large 4x40 type).

. Can be used with a microchip GPIO to save processor pin.

. It's faster and has better timing of many other library I've used before.

. setCursor uses RAM location.

. 16x4, 4x40 handled correctly.

. Linewrap.


I choosed microchip MCP GPIOs because the SPI version has a feature called HAEN that 
allow you to wire a max of 8 chips on the same 3,4 pins (all must using HAEN of course),
this it's extreme useful in many cases. You can also choose I2C version that use just 2 pin.

MCP23s08/MCP23008 connections

        computer side              LCD side
                           
        sck (13)  -> [|--U--|] <- +5v
        mosi (12) -> [|     |] <- background led driver out
        miso (nc) -> [|     |] <- D7
        adrs*     -> [|     |] <- D6
        adrs*     -> [|     |] <- D5
        +5V-(10k)--> [|     |] <- D4
        CS (10)   -> [|     |] <- E
        nc        -> [|     |] <- RS
        gnd       -> [|_____|] <- EN2 (if needed)
