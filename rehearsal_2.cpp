#include<iostream>

using namespace std ;

int main(){
	float sum = 0 ;
	float x=0;
	
	cout<<"Enter x : ";
	cin>>x;
	
	if(x==0){
		;
	}
	else{
		while(x>0 or x<0){
			if(x>0){
				sum=sum+x;
			cout<<"Enter x : ";
			cin>>x;
			}
			if(x<0)
			{
				cout<<"Enter x : ";
				cin>>x;
			}
			else{
				;
			}
	}
	}
	
	cout<<"sum = "<<sum ;
	
	return 0 ;
}
