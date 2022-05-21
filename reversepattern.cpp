#include<iostream>
using namespace std;

void rhpp(int n){
        for(int i=n;i>0;i--){
        	for(int j =i;j>0;j--){
        		cout<<"*";
        		
			}
			cout<<endl;
		}
}
int main(){
	int num;
	cout<< "Enter the level of pattern : "<<endl;
	cin>>num;
	rhpp(num);
	cout<<endl;
}
