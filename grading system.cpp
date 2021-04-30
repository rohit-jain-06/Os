#include <iostream>
using namespace std;

int main()
{
	int m;
	cout<<"Enter your marks:\n";
	cin>>m;
	if (m<25)
	{
		cout<<"F"<<"\n";
	}
	else if(m>=25 && m<45)
	{
	 cout<<"E"<<"\n";
	}
		else if(m>=45 && m<50)
	{
	 cout<<"D"<<"\n";
	}
		else if(m>=50 && m<60)
	{
	 cout<<"C"<<"\n";
	}	else if(m>=60 && m<80)
	{
	 cout<<"B"<<"\n";
	}	else if(m>=80 && m<100)
	{
	 cout<<"A"<<"\n";
	}
	else{
		cout<<"Invalid marks\n";
	}
	return 0;
}
