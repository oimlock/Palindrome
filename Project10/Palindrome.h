#pragma once

#include <vector>
namespace oimlock {

class Palindrome {
public:
    Palindrome(unsigned long long n);
    void start();
    unsigned long long out() const;

private:
    bool is_palindrome();
    unsigned long long compose();
    unsigned long long divide(unsigned long long n);

    unsigned long long n_;
    unsigned long long counter_;
    std::vector <int> decimal_;
};

void show_display();

void show_answer(Palindrome p, unsigned long long n);

}
