#include <iostream>

using namespace std; //명칭공간 생략가능
namespace NameSpace1 { int a = 10; } // 명칭공간
namespace NameSpace2 { int a = 20; }
int a = 30; // 전역 명칭공간
namespace NameSpace1 { int b = 50; }

int main()
{
    int a = 40;
    std::cout << NameSpace1::a << std::endl; // 표준 C++ 라이브러리의 명칭들이 정의되어 있는 명칭공간
    std::cout << NameSpace2::a << std::endl;
    std::cout << ::a << std::endl; //전역명칭공간에 있는 a를 지칭
    std::cout << a << std::endl; // 지역변수가 없다면 전역 변수 a를 출력
    std::cout << NameSpace1::b << std::endl;
    cout << a << endl; //using을 사용한 명칭공간 생략
    return 0;
}