#include <iostream>

int main() // int : 결과의 자료형; main : 함수의 이름; () : 인수
{
	// 표준 출력 스트림으로 문장을 출력함
	int a;
	std::cout << "나의 첫 번째 C++프로그램" << std::endl; //문장의끝은 ;(세미콜론)
	std::cin >> a;
	std::cout << a << "가 입력되었습니다." << std::endl;
	return 0; // 0이 리턴되면 정상적인 종료로 보통 판단 
}