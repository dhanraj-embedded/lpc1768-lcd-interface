# LPC1768 LCD Interface (16x2 – 8-bit Mode)

## About the Project
This project demonstrates interfacing a 16x2 character LCD with the LPC1768 development board using GPIO pins.  
The LCD is initialized in 8-bit mode and a single character is displayed on the screen.

This project helped me understand GPIO control, LCD command timing, and hardware–software interaction.

## Hardware Used
- LPC1768 Development Board  
- 16x2 Character LCD  
- Potentiometer for LCD contrast  
- External 5V supply for LCD  

## LCD Pin Mapping
- RS → P0.10  
- EN → P0.11  
- RW → GND  
- D0–D7 → P0.15 to P0.22  

## How It Works
- GPIO pins are configured as outputs  
- Required power-up delay is given  
- LCD initialization commands are sent  
- Character data is written to the LCD  
- The character appears on the display  

## Output
- A character is successfully displayed on the LCD

## What I Learned
- Configuring GPIO pins on LPC1768  
- Difference between LCD command and data  
- Importance of delays in LCD initialization  
- Debugging embedded C programs  

## Future Work
- Convert LCD interface to 4-bit mode  
- Display strings instead of a single character  
- Use UART input to display data on LCD  
