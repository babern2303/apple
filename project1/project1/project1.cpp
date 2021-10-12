#include <iostream>
#include<ctime>
using namespace std;

int main()
{
	std::cout << "Hello World!\n";
	int a, b, c, random;
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	random = rand() % (999 - 100 + 1) + 100;
	cout << random << endl;
	a = random / 100;
	b = (random / 10) % 10;
	c = random % 10;
	cout << "Число в обратном порядке:" << c << b << a << endl;
    
}
