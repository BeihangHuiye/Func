#include <iostream>
using namespace std;
int add(int a, int b = 5)
{
	return a + b ;
}
int main01()
{
    cout << add(1) << endl;
	system("pause");
    return 0;

}