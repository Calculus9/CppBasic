#include<iostream>

int main(){
    int sum = 0;
    // 初始化语句、循环条件、表达式
    for(int i = 0; i <= 10; i++){
        sum += i;
    }
    std::cout << sum << std::endl;
}