#ifndef PERSON_H
#define PERSON_H
/*
Person();
Person(double weight, double height, char name[]);
void setWeight(double weight);
double getWeight();
void setHeight(double height);
double getHeight();
void setName(char name[]);
char* getName();
double getRatio();
*/
class Person
{
private:
	double m_weight;
	double m_height;
	char m_name[];

	Person() {} //private default constructor

public: 
	Person(double weight, double height, char name[]);


	void setWeight(double weight);
	double getWeight();
	void setHeight(double height);
	double getHeight();
	void setName(char name[]);
	char* getName();
	double getRatio();


};

#endif

