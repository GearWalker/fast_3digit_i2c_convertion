void fast_3digit_i2c_convertion(uint8_t *_buff,uint16_t _value)
{
    _buff[0] = 0;
    _buff[1] = 0;
    _buff[2] = 0;    
    _buff[3] = 0;
    
    if (_value > 99) // convert 3rd digit
    {
        while (_value > 99)
        {
            _value -= 100;
            _buff[0]++;
        } 
    }
    
    if (_value > 9) // convert 2nd digit
    {
        while (_value > 9)
        {
            _value -= 10;
            _buff[1]++;
        }
    }
    
    _buff[0] += 0x30; // charactorize 3rd digit
    _buff[1] += 0x30; // charactorize 2nd digit
    _buff[2] = _value + 0x30; // convert 1st digit and charactorize
}