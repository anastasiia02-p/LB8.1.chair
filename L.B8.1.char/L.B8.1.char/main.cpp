#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

// Функція для підрахунку кожного символа з "BASIC" в рядку
void countBASICCharacters(const char* str, int* counts) {
    const char* BASIC = "BASIC";
    for (int i = 0; i < strlen(BASIC); i++) {
        counts[i] = 0;
        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == BASIC[i]) {
                counts[i]++;
            }
        }
    }
}

// Функція для заміни кожного "BASIC" на "Delphi"
char* replaceBASICwithDelphi(const char* str) {
    const char* target = "BASIC";
    const char* replacement = "Delphi";
    size_t newSize = strlen(str) * 2 + 1; 
    char* result = new char[newSize];
    int pos1 = 0;
    *result = '\0';

    while (true) {
        const char* p = strstr(str + pos1, target);
        if (!p) break;

        int pos2 = p - str;
        strncat(result, str + pos1, pos2 - pos1);
        strcat(result, replacement);
        pos1 = pos2 + strlen(target);
    }

    strcat(result, str + pos1);
    return result;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    // Підрахунок символів з "BASIC"
    int counts[5];
    countBASICCharacters(str, counts);

    cout << "Character counts for 'BASIC':" << endl;
    cout << "B: " << counts[0] << endl;
    cout << "A: " << counts[1] << endl;
    cout << "S: " << counts[2] << endl;
    cout << "I: " << counts[3] << endl;
    cout << "C: " << counts[4] << endl;

    // Заміна "BASIC" на "Delphi"
    char* modifiedStr = replaceBASICwithDelphi(str);
    cout << "Modified string: " << modifiedStr << endl;

    delete[] modifiedStr;
    return 0;
}
