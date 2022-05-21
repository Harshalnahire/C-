//#include<iostream>
//using namespace std;
//
//int main(){
//	int num;
//	cout<<" Enter thr level of pattern :"<<endl;
//	cin>>num;
//	for(int i=1;i<=num;i++){
//		for(int k=num-i;k>0;k--)
//		cout<<" ";
//		for(int j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//		}
//}

#include <iostream>
using namespace std;
int main(){
	int num;
	cout<< "Enter the level of Pattern you want : "<<endl;
	cin>>num;
	for(int i=1;i<num;i++){
		for(int k=num-i;k>0;k--)
		cout<<" ";
		for(int j=1;j<=i;j++){
			cout<<'#';
		}
		cout<<endl;
		
	}
	return 0;
}
