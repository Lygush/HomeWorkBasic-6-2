#include "Class.h"

Counter::Counter() {
    number = 1;
}
Counter::Counter(int number) {
    this->number = number;
}
void Counter::add() {
    number += 1;
}
void Counter::sub() {
    number -= 1;
}
int Counter::show() {
    return number;
}
