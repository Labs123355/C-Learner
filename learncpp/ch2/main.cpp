#include <iostream>
int getInteger();

int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}

/* cd learncpp/ch2 <-- navigate to directory
g++ main.cpp input.cpp -o app
.\app */