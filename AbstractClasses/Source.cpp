#include<iostream>

class Employer
{
protected:
	float salary;
	Employer(float salary) : salary(salary) {}
	virtual void print() = 0;
};

class President : public Employer
{
public:
	President(float salary) : Employer(salary) {}

	void print() override
	{
		std::cout << "President\n" << "salary:" << this->salary << "\n\n";
	}
};

class Manager : public Employer
{
public:
	Manager(float salary) : Employer(salary) {}

	void print() override
	{
		std::cout << "Manager\n" << "salary:" << this->salary << "\n\n";
	}
};

class Worker : public Employer
{
public:
	Worker(float salary) : Employer(salary) {}

	void print() override
	{
		std::cout << "Worker\n" << "salary:" << this->salary << "\n\n";
	}
};

int main()
{
	Worker w(1);
	Manager m(2);
	President p(3);

	w.print();
	m.print();
	p.print();
}