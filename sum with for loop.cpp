#include <iostream>
using namespace std;
intmain(){
	int n,sum=0;
	cout<<"Enter the value"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<"Sum is = "<<sum<<endl;
	return 0;
}
