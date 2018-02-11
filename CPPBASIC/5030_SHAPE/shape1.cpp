/* * * * * * * * * * * * * * * * * * * * * * * * * * * * 
/* HOME  : ecourse.co.kr
/* EMAIL : smkang @ codenuri.co.kr 
/* COPYRIGHT 2018. CODENURI CORP. ALL RIGHTS RESERVED.
/* * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include <iostream>
#include <vector>

class Shape
{

};

class Rect : public Shape
{
public:
	void Draw()
	{
		std::cout << "Rect Draw" << std::endl;
	}
};
class Circle : public Shape
{
public:
	void Draw()
	{
		std::cout << "Circle Draw" << std::endl;
	}
};

int main()
{
	std::vector<Shape*> v1;
	
	while (1)
	{
		int n;
		std::cin >> n;

		if (n == 1)      v1.push_back(new Rect);
		else if (n == 2) v1.push_back(new Circle);
		else if (n == 9)
		{
			for (int i = 0; i < v1.size(); i++)
				v1[i]->Draw(); // error
		}
	}
}

