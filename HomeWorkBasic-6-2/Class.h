#pragma once

class Counter {
private:
    int number{};
public:
    Counter();
    Counter(int number);
    void add();
    void sub();
    int show();
};
