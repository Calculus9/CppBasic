// 解释下面程序片段是否合法
#include<iostream>
int main(){
    int v1 = 0, v2 = 0;
    // 不合法，C++中以分号作为语句的结尾，在这里面即上面第一句为我们的语句了，这之后都是新的语句。
    // 那么在这其中<<需要接受两个对象，而在这其中它并没有左侧对象ostream
    /*
    std::cout << "The sum of " << v1;
            << " and " << v2;
            << " is " << v1 + v2 << std::endl;
    */
}
