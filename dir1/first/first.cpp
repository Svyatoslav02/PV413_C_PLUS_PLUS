
#include <iostream>
using namespace std;

class ITSTEP {
protected:
	string Academyname;

public:
	explicit ITSTEP() {}
	explicit ITSTEP(string Academyname) {
		this->Academyname = Academyname;
	}

	void show() {
		cout << "Academyname: " << Academyname;
	}
};

class Manager {
protected:
	int id;
	string course;
public:
	explicit Manager() {}
	explicit Manager(string course, int id) {
		this->course = course;
		this->id = id;
	}
	void show_() {
		cout << " Course: " << course << " id: " << id;
	}
};

class Student : ITSTEP, Manager {
private:
	string student_name;
	string last_name;
public:
	explicit Student(string Academyname, string course, int id, string student_name, string last_name) : ITSTEP(Academyname),
		Manager(course, id)
	{
		this->student_name = student_name;
		this->last_name = last_name;
	}

	void show_student() {
		show();
		show_();
		cout << " Name: " << student_name << " last name: " << last_name << endl;
	}
};


class Engine {
protected:
	int speed;
	int power;
	string type;
public:
	Engine() {}
	Engine(int speed, int power, string type) {
		this->speed = speed;
		this->power = power;
		this->type = type;
	}
	void showEngine() {
		cout << "Speed: " << speed << endl;
		cout << "Power: " << power << endl;
		cout << "Type: " << type << endl;
	}
	int getSpeed() {
		return speed;
	}
	int getPower() {
		return power;
	}
	string getType() {
		return type;
	}
	void setSpeed(int speed) {
		this->speed = speed;
	}
	void setPower(int power) {
		this->power = power;
	}
	void setType(string type) {
		this->type = type;
	}
};
class Wheels {
protected:
	int radius;
	int count;
	int year;
public:
	Wheels() {}
	Wheels(int radius, int count, int year) {
		this->radius = radius;
		this->count = count;
		this->year = year;
	}
	void showWheels() {
		cout << "Radius: " << radius << endl;
		cout << "Count: " << count << endl;
		cout << "Year: " << year << endl;
	}
	int getRadius() {
		return radius;
	}
	int getCount() {
		return count;
	}
	int getYear() {
		return year;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	void setCount(int count) {
		this->count = count;
	}
	void setYear(int year) {
		this->year = year;
	}
};
class Brand {
protected:
	string brand;
public:
	Brand() {}
	Brand(string brand) {
		this->brand = brand;
	}
	void showBrand() {
		cout << "Brand: " << brand << endl;
	}
	string getBrand() {
		return brand;
	}
	void setBrand(string brand) {
		this->brand = brand;
	}
};
class Car : Engine, Wheels, Brand {
private:
	string model;
public:
	Car(string model, int speed, int power, string type, int radius, int count, int year, string brand) : Engine(speed, power, type), Wheels(radius, count, year), Brand(brand) {
		this->model = model;
	}
	void showCar() {
		cout << "Model: " << model << endl;
		showEngine();
		showWheels();
		showBrand();
	}
	string getModel() {
		return model;
	}
	void setModel(string model) {
		this->model = model;
	}
	friend ostream& operator<<(ostream& cout, Car& obj) {
		cout << "Model: " << obj.getModel() << endl;
		cout << "Speed: " << obj.getSpeed() << endl;
		cout << "Power: " << obj.getPower() << endl;
		cout << "Type: " << obj.getType() << endl;
		cout << "Radius: " << obj.getRadius() << endl;
		cout << "Count: " << obj.getCount() << endl;
		cout << "Year: " << obj.getYear() << endl;
		cout << "Brand: " << obj.getBrand() << endl;
		return cout;
	}
};


int main()
{

	Car car1("A6", 250, 300, "Diesel", 18, 4, 2021, "Audi");
	cout << car1 << endl;


}
//int main()
//{
//   
//	Student obj("IT STEP", "Programming", 15, "Mark", " bobi");
//	obj.show_student();
//
//
//}

