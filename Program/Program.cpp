#include "stdafx.h"
#include "Stone.h"
#include "Concrete.h"

using namespace std;

int main()
{

#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부애 있는 세부 사항을 숨기고,
	// 필요한 부분만 외부에서 사용할 수 있도록 단순화시키는 작업입니다.

	Stone stone;
	Concrete concrete;

	stone.Describe();

	concrete.Describe();

#pragma endregion



	return 0;
}

