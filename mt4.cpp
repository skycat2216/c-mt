#include<iostream>
#include<math.h>
using namespace std;

int a1;
int b1;
int c1;
int a2;
int b2;
int c2;
float x;
float y;
	
int normal();

int b1eql0();

int b2eql0();

int check();

int main()
{
	cout << "a1x+b1y=c1 \n";
	cout << "a2x+b2y=c2 \n";

	
	
	cout << "�п�J��{��1��x���� \n";
	cin >> a1;
	cout << "�п�J��{��1��y���� \n";
	cin >> b1;
	cout << "�п�J��{��1��c�� \n";
	cin >> c1;
	cout << "�п�J��{��2��x���� \n";
	cin >> a2;
	cout << "�п�J��{��2��y���� \n";
	cin >> b2;
	cout << "�п�J��{��2��c�� \n";
	cin >> c2;
	
	if (a2==0)
	{
		cout << "�X�{���~";
		return 0;
	}
	if (b1==b2 && b2==0)
	{
		cout << "�O����";
		return 0;
	}
	
	
	if (a1/a2==b1/b2)
	{
		if (b1*c2 !=c1*b2)
		{
			normal();
		} 
		else 
		{
			cout << "�L���h�ո�" ;
		}
	}
	else
	{
		check();
	}

return 0;
} 

int normal()
{
	cout << "����\n";
	
	x=(b2*c1-b1*c2)/(a1*b2-b1*a2);
	y=(a2*c1-c2*a1)/(b1*a2-a1*b2);
	
	cout << "x="<< x<<"\n";
	cout << "y="<< y<<"\n";
} 



int b1eql0()
{
	x=a1/c1;
	y=a2*x-c2;
	cout << "x="<< x<<"\n";
	cout << "y="<< y<<"\n";
}

int b2eql0()
{
	x=a2/c2;
	y=a1*x-c1;
	cout << "x="<< x<<"\n";
	cout << "y="<< y<<"\n";
}

int check()
{
	if (b1==0)
	{
		b1eql0();
	}
	if (b2==0)
	{
		b2eql0();
	}
}
