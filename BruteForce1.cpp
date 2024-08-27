#include <iostream>
#include <vector>
// #include <limits>
using namespace std;

int main(){
    vector<int> v;
    int N, M, num = 0;

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        int a;
        cin >> a;

        v.push_back(a);
    }

    for(int i = 0; i < v.size() - 2; i++){
        for(int j = i + 1; j < v.size() - 1; j++){
            for(int k = j + 1; k < v.size(); k++){
                int temp = v.at(i) + v.at(j) + v.at(k);

                if(temp == M){
                    num = temp;
                    i = v.size();
                    j = v.size();
                    k = v.size();
                }
                else if(temp > M){
                    continue;
                }
                else{
                    if(temp > num) num = temp;
                }
            }
        }
    }

    cout << num << endl;

    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cin >> N;
}