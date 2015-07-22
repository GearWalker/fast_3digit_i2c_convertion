This is an experiment on converting 3 digit number to chars on PIC16 microcontroller.

With fast_3digit_i2c_convertion(); converting integer 999 (Worst case)
Stopwatch cycle count = 425 (26.5625 µs @ 16 MHz)

With itoa()
Stopwatch cycle count = 4453 (278.3125 µs @ 16 MHz)

With sprintf()
Stopwatch cycle count = 3388 (211.75 µs @ 16 MHz)
