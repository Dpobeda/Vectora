#include<iostream>
#include<string>
#include<vector>
#include<iterator> // ��� ������ � ����������� (�� ���� ����������).

class Person
{
private:
	std::string _name;
	int _age;
public:
	Person(std::string name, int age) : _name(name), _age(age) {}

	std::string GetName() 
	{
		return _name;
	}

	void ShowData()
	{
		std::cout << "Name: " << _name << '\n';
		std::cout << "Age: " << _age << '\n';
	}
};

int main()
{
	// ������ � Vectory.
	/*
	std::vector <int> vec = { 1, 10, 20 }; // �� ���� ��������.
	vec.push_back(5); // ������� � ����� �����.
	vec.size(); // ����� ������.
	vec.pop_back(); // ������� ��������� �������.
	vec.begin(); // ����� ������ �����.
	vec.end(); // ������� ��������� �����.
	vec.erase(vec.begin() + 2); // ��� ������� ��������� ������ � �������.
	vec.at(0) = 10; // ������ ����� ������� ������.
	*/

	// ������� Vectora.
	/*
	std::vector <int> vec = { 1, 10, 20 }; // �� ���� ��������.
	for (int i = 0; i < vec.size(); ++i)
		std::cout << vec.at(i) << " ";
	*/
	
	// ������� Vectora.
	/*
	std::vector <int> vec = { 1, 10, 20 };
	std::vector <int>::iterator it;
	it = vec.begin();
	
	// std::cout << *it;
	
	// for (const auto& it : vec)
		// std::cout << it << ' ';
	
	vec.erase(it);

	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << ' ';
	*/
	
	Person *person1 = new Person ("Dyain Skala ", 56) ;
	Person *person2 = new Person("Dominic Torreta", 59);
	Person *person3 = new Person("Conor Brayn", 36);

	std::vector < Person* > people;
	std::vector <Person*>::const_iterator it;
	// std::vector < std::string >:: iterator it; // ����� ��� � �����.
	// auto it = names.begin();
	people.push_back(person1);
	people.push_back(person2);
	people.push_back(person3);

	for (it = people.begin(); it != people.end(); ++it)
		(*it)->ShowData();
	delete(person1);
	delete(person2);
	delete(person3);

	
	/*
	for (const auto& it : names)
		std::cout << it;
	
	for (it = names.begin(); it != names.end(); ++it)
	*/

	/*
	std::vector <Person> people;
	std::vector <Person>::iterator it;
	people.push_back(person1);
	people.push_back(person2);
	people.push_back(person3);

	for (int i = 0; i < people.size(); ++i)
	{
		people.at(i).ShowData();
	}
	*/
	return 0;
}