#include <iostream>
#include <vector>

int main(){
    auto i = 1;
    std::vector<int> a = {1,2,3};
    for (std::vector<int>::iterator one = a.begin(); one < a.end(); ++one){
        std::cout << *one << " ";
    }
    std::cout << std::endl;
    //用auto代替vector<int>::iterator，方便。
    for (auto one = a.begin(); one < a.end(); ++one){ 
        std::cout << *one << " ";
    }
    std::cout << std::endl << i;
    return 0;
}