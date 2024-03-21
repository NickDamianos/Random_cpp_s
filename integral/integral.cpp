/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   integral.cpp
 * Author: 855
 *
 * Created on 8 Σεπτεμβρίου 2016, 3:55 μμ
 */
#include <iostream>
using namespace std;

double f(double x){
    return (x + 10) / 5;
}

double integral(double apo,double ws , int akrivia){
    double h = (ws - apo)/akrivia;
    double x0xn = 0;
    double xn_1 = 0;
    
    for (double i = apo; i <= ws; i += h ){
        if (i == apo || i == ws){
            x0xn += f(i); 
        }
        else {
            xn_1 += f(i);
        }
    }
    double I = ((ws - apo)/akrivia) * ((x0xn/2.0) + xn_1);
    
    return I;
}




/*
 * 
 */
int main(int argc, char** argv) {
    cout << integral(0.0 , 1.0 , 1000000);
    return 0;
}

