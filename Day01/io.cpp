#include<iostream> // 告诉编译器 我们想要使用iostream这个库

int main(){
    // 使用输出运算符<<在标准输出中打印消息，其接收两个对象，左边必须是ostream对象，右边的对象则是当前要打印的值。利用该运算符将值打印到标准输出中。
    std::cout << "请输入两个数：" << std::endl;
    int v1 = 0, v2 = 0;
    std:: cin >> v1 >> v2;
    std::cout << "the sum of the two numbers" << v1 << " + " << v2 << " = " << v1 + v2 << std::endl;
    /*
    等价于 
    std::cout << "请输入两个数：";
    std::cout << std::endl;

    endl：是一个被称为操作符的特殊值，写入endl的效果是结束当前行，并将与设备关联的缓冲区中的内容刷新到设备中。缓冲区刷新操作可以保证到目前为止程序所产生的输出
    都真正写入到输入流中，而不是仅仅停留在内存中等待写入流。
    */
    return 0;
}