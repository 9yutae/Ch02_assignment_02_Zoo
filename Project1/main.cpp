#include "Zoo.h"
#include <iostream>
//#include <vector>  // 필수 기능 과제
#include <cstdlib>
#include <ctime>

using namespace std;

Animal* createRandomAnimal();

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	srand((unsigned int)time(NULL)); // 난수 생성 시드 설정

	unique_ptr<Zoo> zoo(new Zoo());  // 스마트 포인터 사용
	// Zoo* zoo = new Zoo();		 // 원시 포인터 사용

	for (int i = 0;i < 10;i++) {
		zoo->addAnimal(createRandomAnimal());
	}

	zoo->performActions();
	// delete zoo;					 // 원시 포인터 사용 시 메모리 해제

/* 필수 기능 과제
	vector<Animal*> animals;
	for (const auto& w : animals) w->makeSound();
	for (auto w : animals) {
		delete w;
	}

	animals.clear();
*/

	return 0;
}

Animal* createRandomAnimal() {
	int num = rand() % 3;			  // 난수 생성
	if (num == 0) return new Dog();
	else if (num == 1) return new Cat();
	else return new Cow();
}
