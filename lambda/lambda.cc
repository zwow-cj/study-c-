#include <iostream>

//编译器通过将lambda识别成class类进行编译，一般将body部分识别为operator重载

int main(){
    auto a = 1;
    auto b = 2.2;
    auto sum = [=]{return a+b;};//使用捕获列表，对应class的private成员
    auto subtraction = [](auto a, auto b){return a-b;};//基本的lambda表达式
    auto i = sum();
    std::cout << i;
    auto j = subtraction(a, b);
    std::cout <<std::endl << j;
    auto change = [&](){a++;};//引用调用 (只传递地址，更加高效， 减少内存的使用)
    change();
    std::cout <<std::endl<< a <<std::endl;
    return 0;
}