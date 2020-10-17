#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    int now = 0;
    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {
            now++;
            if (now % 2 != 0) {
                putchar(toupper(input[i]));
            } else {
                putchar(tolower(input[i]));
            }
        } else {
            cout << input[i];
        }
    }
}
