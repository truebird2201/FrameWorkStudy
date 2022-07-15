#include <Windows.h>
#include <vector>

using namespace std;


// �÷��� , �����̳�
// �𸮾� Project - Level - Actor - Component
// ����Ƽ Project - Scene - GameObject - Component

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
		// ���̷����� ����
	};
};

// ��� / ������ / �����Լ� ( ���� ��� )

// ������Ʈ ���� �����ӿ�ũ ����

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