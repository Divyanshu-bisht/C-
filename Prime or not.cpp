#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value"<<endl;
	cin>>n;
	int i=2;
	if(n==2){
			cout<<"Prime Number"<<endl;
		}
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not a Prime Number"<<endl;
			break;
		}
		else{
			cout<<"Prime Number"<<endl;
		break;
		}
	}
	return 0;
}
