#include <iostream>
using namespace std;

// 函数重载的坑
// 1.引用作为函数重载的条件

void func(int &a)  // int &a = 10; // 错误，引用必须引用合法的内存空间
{
    cout << "func(int &a)调用" << endl;
    a = 11;
}

void func(const int& a) // const int &a = 10; // 正确，const int &a可以引用常量
{
    cout << "func(const int& a)调用" << endl;
}

// 2.函数重载碰到默认参数
void func2(int a)
{
    cout << "func2(int a)调用" << endl;
}

void func2(int a , int b = 10)
{
    cout << "func2(int a , int b = 10)调用" << endl;
}

int main()
{
    int a = 10;
    func(a);
    cout << a << endl;

    func(10); // 这里调用的是哪个函数？
    // 1.编译器会优先匹配非const引用
    // 2.编译器会自动将const int转换为int
    // 3.所以这里调用的是func(int &a)

    // func2(10); // 这里调用的是哪个函数？
    // 只传一个参数的时候，由于默认参数的存在，编译器无法确定调用哪个函数

    func2(10, 10); // 调用func2(int a , int b = 10)
    
    system("pause");
    return 0;

}


