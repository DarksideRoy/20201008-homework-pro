#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string book[n];
    int price[n];
    for (int i = 0; i < n; i++) {
        cin >> book[i];
        cin >> price[i];
    }

    string temp1;
    int temp2;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (price[i] > price[j]) {
                temp1 = book[i];
                book[i] = book[j];
                book[j] = temp1;
                temp2 = price[i];
                price[i] = price[j];
                price[j] = temp2;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (price[i] == price[j]) {
                if (book[j] < book[i]) {
                    temp1 = book[i];
                    book[i] = book[j];
                    book[j] = temp1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << book[i] << " " << price[i] << "\n";
    }
}
