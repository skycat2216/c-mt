#include<iostream>
using namespace std;

int main()
{
	cout << "a1x+b1y=c1 \n";
	cout << "a2x+b2y=c2 \n";
	int a1;
	int b1;
	int c1;
	int a2;
	int b2;
	int c2;
	
	
	cout << "�п�J��{��1��x���� \n";
	cin >> a1;
	cout << "�п�J��{��1��y���� \n";
	cin >> b1;
	cout << "�п�J��{��1��c�� \n";
	cin >> c1;
	cout << "�п�J��{��1��x���� \n";
	cin >> a2;
	cout << "�п�J��{��1��x���� \n";
	cin >> b2;
	cout << "�п�J��{��1��x���� \n";
	cin >> c2;
	
	if (a1/a2==b1/b2)
	{
		if (b1/b2 != c1/c2)
		{
			cout << "����";
			
		} 
		else 
		{
			cout << "�L���h�ո�" ;
		}
	}
	else
	{
		cout <<"�L�� \n";
	}

return 0;
} 
