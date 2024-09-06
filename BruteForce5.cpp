#include <iostream>
#include <string>
using namespace std;

int main() {
    string strNum;
    unsigned long long num = 665;
    int N, count1 = 0;

    cin >> N;

    while (count1 != N) {
        num += 1;
        strNum = to_string(num);

        int count2 = 0;
        bool found = false;

        for (int i = 0; i < strNum.size(); i++) {
            if (strNum.at(i) == '6') {
                count2++;
                if (count2 >= 3) {
                    found = true;
                    break;
                }
            } else {
                count2 = 0;
            }
        }

        if (found) {
            count1++;
        }
    }
    cout << num << endl;
}