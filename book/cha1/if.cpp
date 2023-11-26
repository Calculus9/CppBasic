#include<iostream>

int main(){
    int currVal = 0, val = 0; // currval是正在读的值，将新读的值存入val
    if(std::cin >> currVal){
        int cnt = 1; 
        while(std::cin >> val){
            if(val == currVal){
                cnt ++;
            }else{
                std::cout << currVal << "出现了" << cnt << "次" << std::endl;
                cnt = 1;
                currVal = val;
            }
        }
        std::cout << currVal << "出现了" << cnt << "次" << std::endl;
    }
}