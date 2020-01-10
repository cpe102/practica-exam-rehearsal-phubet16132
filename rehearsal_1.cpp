#include<iostream>
#include<string>

using namespace std ;

int main() {
	float s=0;
	string n="";
	
	cout<<"What is your name ? : ";
	cin>> n ;
	cout<<"What is your GPA ? : ";
	cin>>s ;
	
	if (s>=3.5)
	{
		cout<<n<<" Inw Jrim Jrim!!!";
	}
	else
	{
		cout<<"Try harder, "<<n;
	}
	
	return 0 ;
}
