#include "mbed.h"
#include "ultrasonic.h"

Ultrasonic HC_SR04(PA_0,PA_1,"m",1000);

int main(){

    while (true) {
         HC_SR04.print_measurement();
    }
}