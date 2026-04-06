#include <iostream>
#include<cmath> 
#include<string> 
using namespace std;

//enum Year { y2020, y2021, y2022, y2023 };
//enum Month { Jan, Feb, Mar, Api, May, June, July, Aug, Sep, Oct, Nov, Dec };
//class Timedate {
//private:
//	Month month;
//	Year year;
//	int date, hour, second, minute;
//
//public:
//	void set_date(Month m, Year y, int d, int h, int s, int min) {
//		month = m;
//		year = y;
//				hour = h;
//		date = d;
//		minute = m;
//		second = s;
//	}
//	void cout_date() {
//		cout << (int)year + 2020 << '.' << (int)month + 1 << '.' << date <<"\t"<<hour<<':'<<minute<<':'<<second << endl;
//	};
//	friend void cout_date(const Timedate& a);
//};
//void cout_date(const Timedate& a) {
//	cout << (int)a.year + 2020 << '.' << (int)a.month+1 << '.' << a.date << "\t" << a.hour << ':' << a.minute << ':' << a.second << endl;
//};
//int main() {
//	Timedate a;
//	a.set_date(Sep, y2020, 2, 6, 12, 56);
//	cout << "普通函数输出:" << endl;
//	cout_date(a);
//	cout << "成员函数输出:" << endl;
//	a.cout_date();
//	return 0;
//}
//class Rectangle {
//private:
//	double x1, y1;
//	double x2, y2;
//public:
//	Rectangle(double a = 0, double b = 0, double c = 0, double d = 0) {
//		x1 = a;
//		y1 = b;
//		x2 = c;
//		y2 = d;
//	}
//	double area() {
//		double width, height;
//		width = fabs(x2 - x1);
//		height =fabs( y2 - y1);
//		return width * height;
//	}
//	double perimeter() {
//		double width, height;
//		width = fabs(x2 - x1);		height = fabs(y2 - y1);
//		return 2 * (width + height);
//	}
//	friend void R( Rectangle& r);
//};
//void R( Rectangle& r) {
//	cout << "周长为:" << r.area() << "面积为:" << r.perimeter() << endl;
//
//}
//int main() {
//	Rectangle a(2, 3, 7, 9);
//	cout << "周长为:" << a.area() << endl;
//	cout << "面积为:" << a.perimeter() << endl;
//	R(a);
//	return 0;
//}
//#define Pi 3.14
//class Circle {
//private:
//	int radius;
//	double prmeter, area;
//public:
//	Circle(int r = 0) {
//		radius = r;
//		prmeter = 2 * Pi * r;
//		area = Pi * r * r;
//		cout << "area" << ':' << area << "\t" << "perimeter" << ':' << prmeter << endl;
//	}
//	Circle(const Circle& other) {
//		radius = other.radius;
//		prmeter = other.prmeter;
//		area = other.area;
//	}
//};
//int main() {
//	int r;
//	cout << "请输入圆的半径:" << endl;
//	cin >> r;
//	Circle c(r);
//	return 0;
//}

//class Person {
//private:
//	string IdPerson, Name, Sex, Birth;
//	string Address;
//public:
//	Person(string id = "00000", string name = "无", string sex = "无", string birth = "2000-01-01", string add = "无")
//		: IdPerson(id),Name(name),Sex(sex),Birth(birth),Address(add){
//	}
//	Person(const Person& psn) {
//		IdPerson = psn.IdPerson;
//		Name = psn.Name;
//		Sex = psn.Sex;
//		Birth = psn.Birth;
//		Address = psn.Address;
//	}
//	void set() {
//		cout << "录入信息";
//		cout << "请输入身份证号:";
//		cin >> IdPerson;
//		cout << "请输入姓名:";
//		cin >> Name;
//		cout << "请输入性别:";
//		cin >> Sex;
//		cout << "请输入生日:";
//		cin >> Birth;
//		cout << "请输入家庭住址:";
//		cin >> Address;
//	}
//	void show() {
//		cout << "--------人员信息--------" << endl;
//		cout << "身份证号:" << IdPerson << endl;
//		cout << "姓名:" << Name << endl;
//		cout << "性别:" << Sex << endl;
//		cout << "生日:" << Birth << endl;
//		cout << "家庭住址:" << Address << endl;
//	}
//};
//int main() {
//	Person a,b;
//	a.show();
//	b.set();
//	b.show();
//	Person c(b);
//	c.show();
//	return 0;
//}

//class Complex {
//private:
//	double real;
//	double imag;
//public:
//	Complex(double r=0,double i=0):real(r),imag(i){}
//	Complex operator-(const Complex& c) {
//		return Complex(real - c.real, imag - c.imag);
//	}
//	Complex operator-=(const Complex& c){
//		real -= c.real;
//		imag -= c.imag;
//		return *this;
//	}
//	Complex operator*=(const Complex& c) {
//		double new_r = real * c.real - imag * c.imag;
//		double new_i = real * c.imag + imag * c.real;
//		return Complex(new_r,new_i);
//	}
//	Complex operator/=(const Complex& c) {
//		double deno = c.real * c.real + c.imag * c.imag;
//		double new_r = (real * c.real - imag * c.imag)/deno;
//		double new_i = (real * c.imag + imag * c.real)/deno;
//		return Complex(new_r, new_i);
//	}
//	Complex& operator++() {
//		real++;
//		imag++;
//		return *this;
//	}
//	Complex operator++(int) {
//		Complex temp = *this;
//		real++;
//		imag++;
//		return temp;
//	}
//	void print() {
//		cout << real << (imag >= 0 ? "+" : " ") << imag << "i" << endl;
//	}
//};
//int main() {
//	Complex c1(3, 4), c2(5, 6);
//	Complex c3 = c2 - c1;
//	c3.print();
//	c1 -= c2;
//	c1.print();
//	Complex c5(1, 2), c4(2, 3);
//	c5 *= c4;
//	c5.print();
//	c2 /= c4;
//	c2.print();
//	Complex c6(2, 3);
//	c6++;
//	(++c6).print();
//	(c6++).print();
//	c6.print();
//	return 0;
//}





//#define Pi 3.14
//class Circle {
//public:
//	double radius;
//public:
//	Circle() {
//		radius = 0;
//		cout << "无参构造函数被调用" << endl;
//	}
//	Circle(int r) {
//		radius = r;
//		cout << "有参构造函数被调用" << endl;
//	}
//	Circle(Circle& r) {
//		radius = r.radius;
//		cout << "复制构造函数被调用" << endl;
//	}
//	~Circle() {
//		cout << "析构函数被调用" << endl;
//	}
//	double getR() {
//		return radius;
//	}
//	double	area() {
//		return radius * radius * Pi;
//	}
//	double perimeter() {
//		return 2 * radius * Pi;
//	}
//};
//class Cylinder {
//private:
//	Circle cir;
//	double h;
//public:
//	Cylinder() {
//		cir=0;
//		h = 0;
//		cout << "无参构造函数被调用" << endl;
//	}
//	Cylinder(double r, double height) {
//		cir = r;
//		h = height;
//		cout << "有参构造函数被调用" << endl;
//	}
//	Cylinder(Cylinder& cy) {
//		cir = cy.cir;
//		h = cy.h;
//		cout << "复制构造函数被调用" << endl;
//	}
//	~Cylinder() {
//		cout << "析构函数被调用" << endl;
//	}
//	double volume() {
//		return cir.area()*h;
//	}
//	double sur_area() {
//		return 2 * cir.area() + 2 * cir.perimeter() * h;
//	}
//	void show() {
//		cout << "底面半径=" << cir.getR() << "高度=" << h << "表面积=" << sur_area() << "体积=" << volume() << endl;
//
//	}
//};
//int main() {
//	Cylinder cy1(3, 2);
//	cy1.show();
//
//	Cylinder  cy2(4, 3);
//	cy2.show();
//	Cylinder cy3(cy2);
//	cy3.show();
//	return 0;
//}

class RMB {
private:
	int yuan;
	int jiao;
	int fen;
public:
	RMB(int y=0,int j=0,int f=0):yuan(y),jiao(j),fen(f){}
	operator float() {
		return yuan + jiao * 0.1f + fen * 0.01f;
	}
	void display() {
		cout<<yuan << "圆"<<jiao << "角"<<fen << "分" << endl;

	}
};
int main() {
	RMB r(2, 4, 1);
	r.display();
	cout << "转换后为" << float(r);
	return 0;
}
