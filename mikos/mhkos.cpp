/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mhkos.h"

mikos operator+(const mikos& first, const mikos& b){
    mikos rVal;
    rVal.m = first.m + b.m;
    rVal.cm = first.cm + b.cm;    
    if (rVal.cm > 99){
        rVal.m++;
        rVal.cm -= 100;
    }    
    return rVal;
}

std::ostream& operator <<(std::ostream& os , const mikos&){
    return os << mikos.m << ' ' << 'm ' << 'and' << mikos.cm << ' cm ;


}