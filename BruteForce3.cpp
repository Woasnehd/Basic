#include <iostream>
// #include <limits>
using namespace std;

int main(){
    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    cout << ((c * e) - (b * f)) / ((a * e) - b * d) << " ";
    cout << ((c * d) - (a * f)) / ((b * d) - (a * e)) << endl;

    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cin >> a;
}