#include "emulator_arduino.h"

Emulator_arduino::Emulator_arduino()
{
    str_led_kit.clear();
}

void Emulator_arduino::set_led(std::string led)
{
    str_led_kit.push_back(led);
}

void Emulator_arduino::print_list_led()
{
    if(str_led_kit.size() == 0){
        cout << "ERROR: print_list_led(): !! You should set LED !!" << endl;
        return;
    }

    for (auto i : str_led_kit) {
        cout << "led: " << i << endl;
    }
}

void Emulator_arduino::sleep_milliseconds(unsigned int _delay)
{
    usleep(_delay*1000);
    system("clear");
}

void Emulator_arduino::print_box_led()
{
    if(str_led_kit.size() == 0 ){
        cout << "ERROR: print_box_led(): !! You should set LED !!" << endl;
        return;
    }

    std::string border_line;
    border_line.push_back(' ');
    for(unsigned long i = 0; i < 3; ++i){
        border_line.push_back('-');
    }
    for(unsigned long i = 0; i < str_led_kit.at(0).size(); ++i){
        border_line.push_back('-');
    }
    for(unsigned long i = 0; i < 3; ++i){
        border_line.push_back('-');
    }
    border_line.push_back(' ');


    std::string word_line;
    word_line.push_back('|');
    for(unsigned long i = 0; i < 3; ++i){
        word_line.push_back(' ');
    }
    for(unsigned long i = 0; i < str_led_kit.at(0).size(); ++i){
        word_line.push_back(' ');
    }
    for(unsigned long i = 0; i < 3; ++i){
        word_line.push_back(' ');
    }
    word_line.push_back('|');

    cout << endl;
    std::string color_font;
    for(unsigned long i = 0; i < str_led_kit.size(); ++i){
        if(str_led_kit.at(i) == "WHITE"){
            color_font = "\033[39m";
        }
        else if(str_led_kit.at(i) == "RED"){
            color_font = "\033[31m";
        }
        else if(str_led_kit.at(i) == "GREEN"){
            color_font = "\033[32m";
        }
        else if(str_led_kit.at(i) == "BLUE"){
            color_font = "\033[94m";
        }
        cout << "\033[49m" << "\033[39m" << "led: " << color_font << str_led_kit.at(i) << endl;
    }

    cout << endl;

    for(unsigned long i = 0; i < str_led_kit.size(); ++i){
        if(str_led_kit.at(i) == "WHITE"){
            color_font = "\033[39m";
        }
        else if(str_led_kit.at(i) == "RED"){
            color_font = "\033[31m";
        }
        else if(str_led_kit.at(i) == "GREEN"){
            color_font = "\033[32m";
        }
        else if(str_led_kit.at(i) == "BLUE"){
            color_font = "\033[94m";
        }
        cout << "\033[49m" << color_font << border_line << endl << word_line << endl << border_line << endl << endl;
    }

    color_font = "\033[39m";
    cout << "\033[49m" << color_font << endl;

    //cout << "\033[49m" << "\033[31m" << border_line << endl << word_line << endl << border_line << endl << endl;
}

void Emulator_arduino::print_box_led(std::string color_led, int state)
{
    if(str_led_kit.size() == 0 ){
        cout << "ERROR: print_box_led(): !! You should set LED !!" << endl;
        return;
    }

    std::string border_line;
    border_line.push_back(' ');
    for(unsigned long i = 0; i < 3; ++i){
        border_line.push_back('-');
    }
    for(unsigned long i = 0; i < color_led.size(); ++i){
        border_line.push_back('-');
    }
    for(unsigned long i = 0; i < 3; ++i){
        border_line.push_back('-');
    }
    border_line.push_back(' ');


    std::string word_line;
    word_line.push_back('|');
    for(unsigned long i = 0; i < 3; ++i){
        word_line.push_back(' ');
    }
    if(state == 0){
        for(unsigned long i = 0; i < color_led.size(); ++i){
            word_line.push_back(' ');
        }
    }
    else if(state == 1){
        word_line += color_led;
    }

    for(unsigned long i = 0; i < 3; ++i){
        word_line.push_back(' ');
    }
    word_line.push_back('|');

    cout << endl;

    std::string color_font;

    if(color_led == "WHITE"){
        color_font = "\033[39m";
    }
    else if(color_led == "RED"){
        color_font = "\033[31m";
    }
    else if(color_led == "GREEN"){
        color_font = "\033[32m";
    }
    else if(color_led == "BLUE"){
        color_font = "\033[94m";
    }
    cout << "\033[49m" << color_font << border_line << endl << word_line << endl << border_line << endl << endl;


    color_font = "\033[39m";
    cout << "\033[49m" << color_font;

    //cout << "\033[49m" << "\033[31m" << border_line << endl << word_line << endl << border_line << endl << endl;
}

void Emulator_arduino::state_high()
{
    if(str_led_kit.size() == 0 ){
        cout << "ERROR: print_box_led(): !! You should set LED !!" << endl;
        return;
    }

    std::string border_line;
    border_line.push_back(' ');
    for(unsigned long i = 0; i < 9; ++i){
        border_line.push_back('-');
    }
    border_line.push_back(' ');


    std::string word_line;
    word_line.push_back('|');
    for(unsigned long i = 0; i < 9; ++i){
        word_line.push_back('|');
    }
    word_line.push_back('|');

    cout << endl;
    std::string color_font;
    for(unsigned long i = 0; i < str_led_kit.size(); ++i){
        if(str_led_kit.at(i) == "WHITE"){
            color_font = "\033[39m";
        }
        else if(str_led_kit.at(i) == "RED"){
            color_font = "\033[31m";
        }
        else if(str_led_kit.at(i) == "GREEN"){
            color_font = "\033[32m";
        }
        else if(str_led_kit.at(i) == "BLUE"){
            color_font = "\033[94m";
        }
        cout << "\033[49m" << "\033[39m" << "led: " << color_font << str_led_kit.at(i) << endl;
    }

    cout << endl;

    for(unsigned long i = 0; i < str_led_kit.size(); ++i){
        if(str_led_kit.at(i) == "WHITE"){
            color_font = "\033[39m";
        }
        else if(str_led_kit.at(i) == "RED"){
            color_font = "\033[31m";
        }
        else if(str_led_kit.at(i) == "GREEN"){
            color_font = "\033[32m";
        }
        else if(str_led_kit.at(i) == "BLUE"){
            color_font = "\033[94m";
        }
        cout << "\033[49m" << color_font << border_line << endl << word_line << endl << border_line << endl << endl;
    }

    color_font = "\033[39m";
    cout << "\033[49m" << color_font << endl;


}

