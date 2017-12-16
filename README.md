# ESP32-8266-Audio-Spectrum-Display

The ESP8266 variant can display a flat response between 100Hz and 5.2Khz and is limited by the ADC conversion time.

The ESP32 variant, can display a flat response between 50Hz and 20Khz and is less limited by ADC conversion time and uses 512 samples for improved resolution. It could be optimised even further for a wider freqencuy response.

To load the Arduino FFT library:
1. In the IDE menu, select Sketch, Include Library, Manage Libraries, then search for 'FFT'
The correct version is :// https://github.com/kosme/arduinoFFT

Do the same for the SQUIX SSD1306 display driver library.

