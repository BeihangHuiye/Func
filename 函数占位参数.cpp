#include <iostream>
using namespace std;

// ռλ����
// ��������ʱ�������б�дһ��ʡ�Ժ�
// ��������ʱ�����������

void test01(int a, int)
{
    	cout << "test01" << endl;
}

// ռλ����ֻ�ܷ��ں��������б������
// ռλ����Ҳ������Ĭ��ֵ
void test02(int a, int = 10)
{
    	cout << "test02" << endl;
}

int main02()
{
    test01(10, 20);    // ����ĵڶ������������ò���
    // test01(10); // ����ռλ�������������

    test02(10);

	system("pause");
    return 0;
}