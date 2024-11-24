#include <iostream>
using namespace std;

// 占位参数
// 函数声明时，参数列表写一个省略号
// 函数定义时，必须填补完整

void test01(int a, int)
{
    	cout << "test01" << endl;
}

// 占位参数只能放在函数参数列表最后面
// 占位参数也可以有默认值
void test02(int a, int = 10)
{
    	cout << "test02" << endl;
}

int main02()
{
    test01(10, 20);    // 传入的第二个参数函数拿不到
    // test01(10); // 错误，占位参数必须填补完整

    test02(10);

	system("pause");
    return 0;
}