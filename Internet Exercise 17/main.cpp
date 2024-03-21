#include <iostream>
//#include <fstream>

using namespace std;

bool prime (int x){
    for (int i = 2 ; i < x ; i++){
        if (x%i == 0){
            return false;
        }
    }
    return true;
}

int xc (long int f){
    int temp; //return
    int metritis = 0 , i=2;
    while (metritis != f){
        if (prime(i)){
            metritis++;
            temp=i;
        }
        i++;
    }
   return temp; 
}
int main(int argc, char** argv) {
    cout <<"Hello!! Which prime number you  want ?"<< endl;
    unsigned long int x ;
    cin >> x;
    cout << "The "<< x <<"th prime number is: " << xc(x);
    
    return 0;
}

