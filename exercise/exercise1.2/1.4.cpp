#include<iostream>
// 编写程序来计算两个数的乘积
int main(){
    std::cout << "输入两个数：" << std:: endl;
    int v1 = 1, v2 = 1;
    std:: cin >> v1 >> v2;
    std:: cout << "这两个数的乘积是" << v1 << " * " << v2 << " = " << v1 * v2 << std::endl;
}