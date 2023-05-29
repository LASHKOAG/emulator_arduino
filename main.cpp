#include "emulator_arduino.h"

//ToDo
//make different colors
//blue, orange, yellow, etc

//Цвета в терминале
//https://habr.com/ru/companies/first/articles/672464/

const unsigned int delay_blink_ms = 500;

//const int HIGH = 1;
//const int LOW = 0;

int main()
{
    Emulator_arduino* emulator = new Emulator_arduino();

    emulator->set_led("WHITE");
    emulator->set_led("RED");
    emulator->set_led("GREEN");
    emulator->set_led("BLUE");

    emulator->print_list_led();

    emulator->print_box_led();

    emulator->sleep_milliseconds(3000);

    emulator->state_high();



    if(emulator != nullptr){
        delete emulator;
    }


    return 0;
}
