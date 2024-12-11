#include <iostream>
using namespace std;
int main(){
	int num,sum=0,i=1;
	cout<<"Enter the value"<<endl;
	cin>>num;
	while(i<= num){
		sum=sum+i;
		i++;
	}
	cout<<"Sum is "<<sum<<endl;
	return 0;
}
