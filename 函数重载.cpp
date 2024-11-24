#include <iostream>
using namespace std;

// 函数重载：函数名相同，参数列表不同（个数、类型、顺序）

// 函数重载的满足条件：
// 1.同一个作用域下
// 2.函数名相同
// 3.参数列表不同（个数、类型、顺序）

void func()
{
    cout << "func()的调用！" << endl;
}

void func(int a)
{
    cout << "func(int a)的调用！！！！" << endl;
    }

int main03()
{
    func();
    func(10);
    system("pause");
    return 0;
}