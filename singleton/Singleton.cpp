//
// Created by frog on 8/1/18.
//

#include "Singleton.h"
Singleton1 *Singleton::m_Instance = NULL;

int main(int argc, char** argv)
{
	Singleton1* obj = Singleton1::GetInstance();
	std::cout << "test=" << obj->getTest() << std::endl;
	return 0;
}