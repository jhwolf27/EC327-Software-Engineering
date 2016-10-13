#include "Person.h"
#include <cmath>
#include <iostream>
using namespace std;

Person::Person(double weight, double height, char name[])
{
	weight = 0.0;
	height = 0.0;
	name = "Bob";
}

void Person::setWeight(double weight)
{
	weight = m_weight;
}

double Person::getWeight()
{
	cout << "Insert Weight: " << endl;
	cin >> m_weight;
	return m_weight;
}

void Person::setHeight(double height)
{
	height = m_height;
}

double Person::getHeight()
{
	cout << "Insert Height: " << endl;
	cin >> m_height;
	return m_height;
}

void Person::setName(char name[])
{
	name = m_name;
}

char* Person::getName()
{
	cout << "Insert Name: " << endl;
	cin >> m_name;
	return m_name;
}

double Person::getRatio()
{
	int Ratio = (m_height / m_weight);
	return Ratio;
}
