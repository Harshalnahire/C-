////Patterns problem
//
//#include <iostream>
//using namespace std;
//
//void halfPyramidPattern1(int n)
//{
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//void halfPyramidPattern2(int n)
//{
//    for (int i = n; i >= 1; i--) {
//        for (int j = i; j > 0; j--) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//void halfPyramidPattern3(int n)
//{
//    for (int i = 1; i <= n; i++) {
//        for (int k = n - i; k > 0; k--) {
//            cout << " ";
//        }
//        for (int j = 1; j <= i; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//
//void halfPyramidPattern4(int n)
//{
//    for (int i = n; i >= 1; i--) {
//        for (int k = n - i; k > 0; k--) {
//            cout << " ";
//        }
//        for (int j = i; j > 0; j--) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int num;
//    cout << "Enter number of levels of the pattern :" << endl;
//    cin >> num;
//    halfPyramidPattern1(num);
//    cout << endl;
//    halfPyramidPattern2(num);
//    cout << endl;
//    halfPyramidPattern3(num);
//    cout << endl;
//    halfPyramidPattern4(num);
//
//    return 0;
//}

#include <iostream>
using namespace std;


void hpp(int n)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
        
}
int main(){
	int num;
	cout<< "Enter the level of pattern :" << endl;
	cin>>num;
	hpp(num);
    cout << endl;
    return 0;
    
}

