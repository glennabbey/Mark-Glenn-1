#include <iostream>
using namespace std;

int main()
{
	double mark;
	cout << "Enter mark:";
	cin >> mark;
	if (mark >= 80 && mark <= 100)
	{
	cout <<"it is Grade A";
	}
	else if (mark >= 70 && mark <= 79)
	{
	cout <<"It is Grade B+";
	}
	else if (mark >=70 && mark <=74)
	{
	cout <<"It is Grade B";
	}
	else if (mark >=65 && mark <=69)
	{
	cout <<"It is Grade C+";
	}
	else if (mark >=60 && mark <=64)
	{
	cout <<"It is Grade C";
	}
	else if (mark >=55 && mark <=59)
	{
	cout <<"It is Grade D+";
	}
	else if (mark >= 50 && mark <=54)
	{
	cout <<"It is Grade D";
	}
	else if (mark >= 45 && mark <=49)
	{
	cout <<"It is Grade E";
	}
	else if (mark >=0 && mark<=44)
	{
	cout <<"It is Grade F";
	}
	return 0;
}

# Mark Glenn 1
