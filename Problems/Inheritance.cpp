#include <iostream>
using namespace std;

class student
{
	public:
		int score;
};

class c : public student
{
	public:
		int grade;
};

int main()
{
	c obj;
	obj.score = 19;
	obj.grade = 12;
	cout <<"Score: " << obj.score << endl;
	cout << "Grade: " << obj.grade;
	
	return 0;
}