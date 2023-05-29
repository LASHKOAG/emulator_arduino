#ifndef EMULATOR_ARDUINO_H
#define EMULATOR_ARDUINO_H

#include <iostream>
#include <string>
#include <unistd.h>
#include <list>
#include <vector>

//Цвета в терминале
//https://habr.com/ru/companies/first/articles/672464/

using namespace std;

class Emulator_arduino
{
public:
    Emulator_arduino();

    void set_led(std::string led);

    void print_list_led();

    void sleep_milliseconds(unsigned int _delay);

    void print_box_led();
    void print_box_led(std::string color_led, int state);


    void state_high();

//    void state_low(std::string);
//    void digitalWrite(std::string, int);

//    void make_border_line(std::string*, std::string);
//    void make_word_line(std::string*, std::string, int state_led);

//    void print_box_led(std::string user_led_color, const std::string* str_border, const std::string* str_word);

//    void test_running_light_while(const unsigned int delay_blink_ms);



private:
    const int HIGH{1};
    const int LOW{0};
    const int left_add_line{3};
    const int right_add_line = left_add_line;

    std::vector<std::string>str_led_kit;


};

#endif // EMULATOR_ARDUINO_H
