/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mhkos.h
 * Author: 855
 *
 * Created on 17 Μαΐου 2016, 3:33 μμ
 */

#ifndef MHKOS_H
#define MHKOS_H
#include <iostream>
struct mikos{
    int m;
    int cm;
};

mikos operator+(const mikos& a, const mikos& b);

std::ostream& operator <<(std::ostream& os , const mikos&);


#endif /* MHKOS_H */

