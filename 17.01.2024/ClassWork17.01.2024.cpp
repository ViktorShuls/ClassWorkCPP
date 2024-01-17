#include<iostream>
#include<string>
dif

using namespace std;

class Student
{
private:
	string name;
	float ball;

public:
	Student(string name, float ball)
	{
		this->name = name;
		this->ball = ball;
	}
	string getName() const
	{
		return name;
	}

	float getScore() const
	{
		return ball;
	}
	void showInfo() {
		cout << name << " : " << ball << endl;
	}
};
/*class Car {
	
private:
	string color;
	string model;
	float prise;

public:
	Car() {
		cout << "Car create";
	}
	Car(string color, string model)
	{
		this->color = color;
		this->model = model;
	}
	Car(string color, string model, float prise):
	Car(color, model){
		this->prise = prise;
	}

	void setPrise(float prise){
		this->prise = prise;
	}

	void setColor(string color) {
		this->color = color;
	}
	void setModel(string model) {
		this->model = model;
	}
	float getPrise() {
		return prise;
	}
	string getColor() {
		return color;
	}
	string toString() {
		return " |color: " + color + " |model: " + model + " |Prise: " + to_string(prise);
	}
};

Car* getAllCarsWithColor(Car* cars, int size, string color) {

	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (cars[i].getColor() == color) count++;
	}
	Car* buf = new Car[count];
	for (int i = 0, k = 0; i < size; i++)
	{
		if
	}
}

class Garage {

	Car* cars = nullptr;
	int countCars = 0;
};
*/
int main() {

	string names[]{"Vol","Pol","Stol","Gon","Ron","Won","Ston"}
		int countOfStudents=8
/*Car* cars = new Car[4]{Car("Blue","BMW",1000),
							Car("black","Mersedes",2000),
							Car("yello","Toyota",2200),
							Car("brown","Mazda",3300) };

	float maxPrise = cars[0].getPrise();
	int id;
	for (int i = 1; i < 4; i++)
	{
		if (maxPrise < cars[i].getPrise()) {
			maxPrise = cars[i].getPrise();
			id = i;
		}

	}
	cout << cars[id].toString();
	*/
}