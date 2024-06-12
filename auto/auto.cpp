#include <iostream>
#include <vector>
using namespace std;
int main(){
    auto i = 1;
    vector<int> a = {1,2,3};
    for (vector<int>::iterator one = a.begin(); one < a.end(); ++one){
        cout << *one << " ";
    }
    cout << endl;
    //用auto代替vector<int>::iterator，方便。
    for (auto one = a.begin(); one < a.end(); ++one){ 
        cout << *one << " ";
    }
    cout << endl << i;
    return 0;
}