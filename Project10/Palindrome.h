#pragma once

#include <vector>
namespace oimlock {

class Palindrome {
public:
    Palindrome(unsigned long long n);
    void solve();
    unsigned long long out() const;


private:
    bool is_palindrome();
    unsigned long long compose();
    unsigned long long divide(unsigned long long n);
    void show_answer();

    unsigned long long n_;
    int initial_n_;
    unsigned long long counter_;
    std::vector <int> decimal_;
};

void show_display();



}
