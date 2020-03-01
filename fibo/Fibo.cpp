#include<iostream>
#include<exception>
using namespace std;

int main(int argc, char const *argv[]) {
    int range,n1,n2,n3;
    cout<<"Enter a number : ";
    cin>>range;
    n1 = 0; //ini variable
    n2 = 1;
    n3 = 1;
    for (int i = 0; i < range; i++){
       cout<<n3<<endl;
       n3 = n1 + n2;
       n1 = n2;
       n2 = n3;
    }
  return 0;
}
