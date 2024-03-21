/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 855
 *
 * Created on 17 Μαΐου 2016, 3:31 μμ
 */

#include <iostream>
#include "mhkos.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    mikos n = {5 , 90} , m = {6 , 30} , rslt;
    
    rslt =  n + m;
    
    cout << rslt;
    return 0;
}

