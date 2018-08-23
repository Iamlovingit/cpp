//
// Created by frog on 8/1/18.
//

#include "Singleton.h"
#include <thread>

Singleton1 *Singleton1::m_Instance = nullptr;

int main(int argc, char** argv)
{
	Singleton1* obj = Singleton1::GetInstance();
	std::cout << "test=" << obj->getTest() << std::endl;
	std::cout << "test=" << obj->getTest() << std::endl;
	std::cout << "test=" << obj->getTest() << std::endl;
	return 0;
}