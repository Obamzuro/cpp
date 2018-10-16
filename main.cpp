#include <iostream>
class Bla
{
	int x;
public:
	Bla(int x) : x(x) {std::cout << "x" << std::endl;}
	Bla() : x(0) {std::cout << "y" << std::endl;}
};

int main()
{
	Bla *mas[3];
	int i = 0;
	while (i < 3)
	{
		mas[i] = new Bla(4);
		++i;
	}
}
