//#include<iostream> //This is an integer type of array
//using namespace std;
//int main(){
//	int a[4] = {1,2,4,8};
//	for(int i=0;i<4;i++){
//		cout<<a[i]<<endl;
//	}
//}
//
 
//#include<iostream>
//using namespace std;
//int main(){
//	char a[7]={'H','A','R','S','H','A','L'};
//	for(int i=0;i<7;i++){
//		cout<<a[i]<<endl;
//	}
//}
#include<iostream>
using namespace std;
int main(){
	int a[10];
	cout<< "Enter the values in the array :"<<endl;
	for (int i=0;i<10;i++){
		cin>>a[i];
	} 
	cout<<"The values enter by you are :"<<endl;
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
}	
