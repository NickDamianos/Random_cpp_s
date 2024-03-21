/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 855
 *
 * Created on 14 Ιουλίου 2016, 6:19 μμ
 */

#include <iostream>

using namespace std;

void piramida(int ypsos){

    for (int i = 0 ; i < ypsos; i++){
        for (int j = (ypsos - i); j > 0 ; j--){
            cout << " ";
        }
        for(int g = 0; g < (2 * (i+1));g++){
            cout << "*";
        }
        cout << endl;
    }
}
/*
 * 
 */
int main(int argc, char** argv) {
    int x;
    cin >> x;
    piramida(x);
    
    return 0;
}

