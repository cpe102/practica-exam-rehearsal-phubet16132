#include <iostream>
#include <string>
//Write compress() here.
using namespace std;

string conpress(string N){
	  	
	  	string sum="";
	  	int count =0 ;
	  	
	  	while(count<N.size())
	  	{
	  		sum=sum+N[count];
	  		count=count+3;
	  		
		  }
		
	  
		return sum ;
	}
	
int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
