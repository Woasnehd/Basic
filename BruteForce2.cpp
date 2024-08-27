#include <iostream>
// #include <limits>
using namespace std;

int main(){
    bool b = false;
    int N, sum = 0;

    cin >> N;

    for(int i = 1; i < N; i++){
        int temp = i;
        sum += i;
        while(temp){
            sum += (temp % 10);
            temp /= 10;
        }

        if(sum == N){
            cout << i << endl;
            b = true;
            break;
        }
        else sum = 0;
    }

    if(!b) cout << "0" << endl;

    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cin >> N;
}