#include <Windows.h>
#include <vector>

using namespace std;


// 컬렉션 , 컨테이너
// 언리얼 Project - Level - Actor - Component
// 유니티 Project - Scene - GameObject - Component

class Entity
{
public:
	virtual void update() = 0;
};

class Component
{
public:
	void update()
	{

	}
};

class Dog : public Entity
{
public:
	void update()
	{
		// 스켈레톤의 로직
	};
};

// 상속 / 포인터 / 가상함수 ( 옛날 방식 )

// 컴포넌트 구조 프레임워크 제작

Dog d;
Entity* e = &d;
vector<Entity*> gameObject;

#define MS_PER_FRAME 16

int main()
{

	while (true)
	{
		for (auto& Object : gameObject)
			Object->update();
	}
}