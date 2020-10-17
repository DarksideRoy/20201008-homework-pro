#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int i[5] = {1, 3, 5, 7, 9};
    int j[5] = {1, 2, 3, 4, 5};

    vector<int> result1(10);
    vector<int>::iterator it;
    it = set_intersection(i, i + 5, j, j + 5, result1.begin());
    result1.resize(it - result1.begin());
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i] << " ";
    }
    cout << "\n";

    vector<int> result2(10);
    it = set_union(i, i + 5, j, j + 5, result2.begin());
    result2.resize(it - result2.begin());
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i] << " ";
    }
    cout << "\n";

    vector<int> result3(10);
    it = set_difference(i, i + 5, j, j + 5, result3.begin());
    result3.resize(it - result3.begin());
    for (int i = 0; i < result3.size(); i++) {
        cout << result3[i] << " ";
    }
}
