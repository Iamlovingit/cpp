//
// Created by frog on 8/1/18.
//

#ifndef CPP_SINGLETON_H
#define CPP_SINGLETON_H

#include <iostream>
using namespace std;

class Singleton1
{
public:
	static Singleton1* GetInstance()
	{
		if(m_Instance == NULL)
		{
			m_Instance = new Singleton1();
		}
		return m_Instance;
	}

	static void DestoryInstance()
	{
		if(m_Instance != NULL)
		{
			delete m_Instance;
			m_Instance = NULL;
		}
	}

	int getTest()
	{
		return m_Test++;
	}

private:
	Singleton1()
	{
		m_Test = 10;
	}

	static Singleton1* m_Instance;
	int m_Test;
};

#endif //CPP_SINGLETON_H
