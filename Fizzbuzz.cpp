#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main() 
{
	int n={};
	cout <<"Podaj liczbe do ktorej ma wykonywac sie program Fizzbuzz"
		<<"\n";
	cin >>n;
	for (int i=1; i<n+1 ; i++ )
	{
		//	cout <<i;
		if (i % 3 == 0 && i % 15 !=0)
		{
			cout <<"fizz"<< "\n";
			continue;
		}
		if (i % 5 == 0 && i % 15 !=0)
		{
			cout <<"buzz"<< "\n";
			continue;
		}

		if (i % 15==0)
		{
			cout <<"fizzbuzz"<<"\n";
			continue;
			
		}
		if (i % 3 != 0 || i % 5 != 0 || i % 15 != 0)	
			{
				cout<< i << "\n";
				continue;
			}
}
}






