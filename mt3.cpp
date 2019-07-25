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
	
	
	cout << "請輸入方程式1的x項值 \n";
	cin >> a1;
	cout << "請輸入方程式1的y項值 \n";
	cin >> b1;
	cout << "請輸入方程式1的c值 \n";
	cin >> c1;
	cout << "請輸入方程式1的x項值 \n";
	cin >> a2;
	cout << "請輸入方程式1的x項值 \n";
	cin >> b2;
	cout << "請輸入方程式1的x項值 \n";
	cin >> c2;
	
	if (a1/a2==b1/b2)
	{
		if (b1/b2 != c1/c2)
		{
			cout << "有解";
			
		} 
		else 
		{
			cout << "無限多組解" ;
		}
	}
	else
	{
		cout <<"無解 \n";
	}

return 0;
} 
