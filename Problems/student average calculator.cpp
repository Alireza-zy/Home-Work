#include <iostream>
using namespace std;

char gradeFunction(double avg)
{
	if(avg >= 90)
		return 'A';
	else if(avg >= 80)
		return 'B';
	else if(avg >= 70)
		return 'C';
	else if(avg >= 60)
		return 'D';
	else
		return 'F';
}

int main()
{
	int grade;
	double sum = 0;
	int count;
	double avg;
	cout << "How many grades(1-5)? ";
	cin >> count;
	
	if(count < 1 || count > 5)
	{
		cout << "Invalid number.";
		return 1;
	}
	for(register int i = 1; count >= i; i++)
	{
		cout << "Enter grade " << i << ": ";
		cin >> grade;
		sum += grade;
	}
	
	avg = sum / count;
	cout << "Average: " << avg << endl;
	cout << "Letter grade: " << gradeFunction(avg);
	
	return 0;
}