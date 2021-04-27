#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <chrono>
#include "Palindrome.h"

using std::cin;
using std::cout;
using std::endl;

int main() {    
    unsigned long long n;
    int k = 1;
    for (int i = 0; i < k; ++i) {
        oimlock::show_display();
        cin >> n;
        auto t1 = std::chrono::high_resolution_clock::now(); // timer on
        cout << endl;

        switch (n) {
        case 0:
            cout << "Exit\n";
            return 0;
        case 1:
            system("cls");
            ++k;
            continue;
        default:
            break;
        }

        cout << "Itterations: \n";
        oimlock::Palindrome p(n);
        p.solve();
        auto t2 = std::chrono::high_resolution_clock::now(); 
        int int_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count(); //timer off
        cout << "<< Duration " << int_ms << " ms" << "\n\n";
        ++k;
    }

    return 0;
}