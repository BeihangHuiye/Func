#include <iostream>
using namespace std;

// �������أ���������ͬ�������б�ͬ�����������͡�˳��

// �������ص�����������
// 1.ͬһ����������
// 2.��������ͬ
// 3.�����б�ͬ�����������͡�˳��

void func()
{
    cout << "func()�ĵ��ã�" << endl;
}

void func(int a)
{
    cout << "func(int a)�ĵ��ã�������" << endl;
    }

int main03()
{
    func();
    func(10);
    system("pause");
    return 0;
}