#include <iostream>
using namespace std;

// �������صĿ�
// 1.������Ϊ�������ص�����

void func(int &a)  // int &a = 10; // �������ñ������úϷ����ڴ�ռ�
{
    cout << "func(int &a)����" << endl;
    a = 11;
}

void func(const int& a) // const int &a = 10; // ��ȷ��const int &a�������ó���
{
    cout << "func(const int& a)����" << endl;
}

// 2.������������Ĭ�ϲ���
void func2(int a)
{
    cout << "func2(int a)����" << endl;
}

void func2(int a , int b = 10)
{
    cout << "func2(int a , int b = 10)����" << endl;
}

int main()
{
    int a = 10;
    func(a);
    cout << a << endl;

    func(10); // ������õ����ĸ�������
    // 1.������������ƥ���const����
    // 2.���������Զ���const intת��Ϊint
    // 3.����������õ���func(int &a)

    // func2(10); // ������õ����ĸ�������
    // ֻ��һ��������ʱ������Ĭ�ϲ����Ĵ��ڣ��������޷�ȷ�������ĸ�����

    func2(10, 10); // ����func2(int a , int b = 10)
    
    system("pause");
    return 0;

}


