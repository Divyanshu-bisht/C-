#include <iostream>
using namespace std;
long long factorial(int n,long long fact){
	if(n==0||n==1.0){
		return n;
	}
	else{
	fact = n * factorial(n-1,fact);
	}
	return fact;
}
int main(){
	int n;
	long long fact=1;
	cout <<"enter number"<< endl;
	cin>>n;
	fact = factorial(n, fact);
	cout<<"factorial is = "<<fact<<endl;
	return 0;
}
