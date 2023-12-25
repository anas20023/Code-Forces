#include <iostream>
#include <cstring>

int main() {
    char word[110];
    std::cin.getline(word, sizeof(word)); // Using cin.getline() to read a line with spaces

    int cap = 0, lwr = 0, sze = strlen(word);

    for (int i = 0; i < sze; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            cap++;
        } else {
            lwr++;
        }
    }

    /// Change Case LWR < CAP ////

    if (lwr < cap) {
        for (int i = 0; i < sze; i++) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                word[i] -= 32;
            }
        }
    } else if (lwr > cap) {
        for (int i = 0; i < sze; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                word[i] += 32;
            }
        }
    } else if (lwr == cap) {
        for (int i = 0; i < sze; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                word[i] += 32;
            }
        }
    }

    /// Printing the Answer Value ////

    for (int i = 0; i < sze; i++) {
        std::cout << word[i];
    }

    std::cout << std::endl;

    return 0;
}
