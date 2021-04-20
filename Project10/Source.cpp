#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include "Palindrome.h"

using std::cin;
using std::cout;

int main() {    
    unsigned long long n;
    int k = 1;
    for (int i = 0; i < k; ++i) {
        oimlock::show_display();
        cin >> n;
        if (n == 0) {
            cout << "Exit\n";
            return 0;
        }
        if (n == 1) {
            system("cls");
            ++k;
            continue;
        }
        cout << "Itterations: \n";
        oimlock::Palindrome p(n);
        p.start();
        oimlock::show_answer(p, n);
        ++k;
    }

    return 0;
}