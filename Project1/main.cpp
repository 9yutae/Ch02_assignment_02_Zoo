#include "Zoo.h"
#include <iostream>
//#include <vector>  // �ʼ� ��� ����
#include <cstdlib>
#include <ctime>

using namespace std;

Animal* createRandomAnimal();

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	srand((unsigned int)time(NULL)); // ���� ���� �õ� ����

	unique_ptr<Zoo> zoo(new Zoo());  // ����Ʈ ������ ���
	// Zoo* zoo = new Zoo();		 // ���� ������ ���

	for (int i = 0;i < 10;i++) {
		zoo->addAnimal(createRandomAnimal());
	}

	zoo->performActions();
	// delete zoo;					 // ���� ������ ��� �� �޸� ����

/* �ʼ� ��� ����
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
	int num = rand() % 3;			  // ���� ����
	if (num == 0) return new Dog();
	else if (num == 1) return new Cat();
	else return new Cow();
}
