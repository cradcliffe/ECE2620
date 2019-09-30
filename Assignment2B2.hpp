//
//  B2.hpp
//  Assignment_2
//
//  Created by Christopher Radcliffe on 9/10/19.
//  Copyright © 2019 Christopher Radcliffe. All rights reserved.
//

#ifndef B2_hpp
#define B2_hpp
#include <stdio.h>
#include <iostream>
class B2
{
private: bool b[1];

public: B2(int b0 = 0, int b1 = 0){
    if (b0 == 0) {this->b[0] = false;}
    else {this->b[0] = true;}
    if (b1 == 0) {this->b[1] = false;}
    else {this->b[1] = true;}
}
    
    void print(const char msg[]) const;
    
    void X(int bit){
        if(bit == 0 || bit == 1){
            b[bit] = !b[bit];
        }
        else {std::cout << "You messed up, plese give a value that is either 0 or 1. " << std::endl;}
    };
    int M(int bit){
        if(bit == 0 || bit == 1){
            if(b[bit]){
                return 1;
            }
            else {return 0;}
        }
        else {
            std::cout << "You messed up, plese give a value that is either 0 or 1. " << std::endl;
        }
        return 2;
    } // NOT, measure - bit 1
    
    void CX(int control, int target) {
        if (control == target) {
            std::cout << "You messed up, please give a value that is either 0 or 1." << std::endl;
        }
        else if(b[control] == 1){
            b[target] = !b[target];
        }
        
    }; // controlled-NOT on bit 0 controlled by bit 1
};

#endif /* B2_hpp */
