//#include <iostream>
//using namespace std;
//int main(){
//    
//   for ( int i = 0;i<6;i++){
//   	for (int j=0;j<=i;j++){
//   		cout<<"*";
//   		
//	   }
//	   cout<<"\n";
//   }
//	return 0;
//}
#include <iostream>
using namespace std;

int main(){
	for(int i= 10;i>0;--i){ //outer for loop
		for(int j=1;j<=i;j++){//inner loop
			cout<<"#";
			
		}
		cout<<"\n";
	}
	return 0;
}
