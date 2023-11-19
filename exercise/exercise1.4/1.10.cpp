#include<iostream>

int main(){
    int val = 10, sum = 0;
    while(val--){
        sum += val;
    }
    std::cout << sum << std::endl;
}