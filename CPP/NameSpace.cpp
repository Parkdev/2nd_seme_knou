#include <iostream>

using namespace std; //��Ī���� ��������
namespace NameSpace1 { int a = 10; } // ��Ī����
namespace NameSpace2 { int a = 20; }
int a = 30; // ���� ��Ī����
namespace NameSpace1 { int b = 50; }

int main()
{
    int a = 40;
    std::cout << NameSpace1::a << std::endl; // ǥ�� C++ ���̺귯���� ��Ī���� ���ǵǾ� �ִ� ��Ī����
    std::cout << NameSpace2::a << std::endl;
    std::cout << ::a << std::endl; //������Ī������ �ִ� a�� ��Ī
    std::cout << a << std::endl; // ���������� ���ٸ� ���� ���� a�� ���
    std::cout << NameSpace1::b << std::endl;
    cout << a << endl; //using�� ����� ��Ī���� ����
    return 0;
}