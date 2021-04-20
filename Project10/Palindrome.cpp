#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "Palindrome.h"

using std::cin;
using std::cout;
using std::endl;

namespace oimlock {

Palindrome::Palindrome(unsigned long long n) : n_(n), counter_(1), initial_n_ (n) {}

void Palindrome::solve() {
    divide(n_);
    unsigned long long m = compose();
    cout << std::setw(2) << std::setfill('0')
        << counter_ << "  " << n_ << " + " << m << " = " << n_ + m << endl;
    n_ += m;
    ++counter_;
    if (counter_ == 3501) {
        cout << "\n<< The Palindromic number of " << initial_n_  
            << " after 3500 itterations has not been found\n";
        return;
    }
    if (!is_palindrome()) {
        solve();
    }
    else {
        show_answer();
    }
}

unsigned long long Palindrome::out() const {
    return n_;
}

bool Palindrome::is_palindrome() {
    divide(n_);
    for (int i = 0; i < decimal_.size() / 2; ++i) {
        if (decimal_[i] != decimal_[decimal_.size() - 1 - i]) {
            decimal_.clear();
            return false;
        }
    }
    return true;
}

unsigned long long Palindrome::compose() {
    unsigned long long n = 0;
    for (int i = 0; i < decimal_.size(); ++i) {
        n += decimal_[i] * pow(10, i);
    }
    decimal_.clear();
    return n;
}

unsigned long long Palindrome::divide(unsigned long long n) {
    if (n / 10 == 0) {
        decimal_.push_back(n % 10);
        reverse(decimal_.begin(), decimal_.end());
        return 0;
    }
    decimal_.push_back(n % 10);
    return divide(n / 10);
}

void Palindrome::show_answer() {
    cout << "\n<< The Palindrom of " << initial_n_ << " is ";
    cout << out() << "\n\n";
}

void show_display() {
    cout <<
        "- Insert any number to get its palindromic number \n"
        "- Insert '0' to quit \n"
        "- Insert '1' to clear the screen\n"
        "--------------------------------------------------------\n"
        ">> ";
}

}