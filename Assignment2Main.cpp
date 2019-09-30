//
//  main.cpp
//  Assignment_2
//
//  Created by Christopher Radcliffe on 9/10/19.
//  Copyright © 2019 Christopher Radcliffe. All rights reserved.
//

#include <iostream>
#include "B2.hpp"

int main()
{
    B2 b00(0,0);
    b00.print("Values");
    if(b00.M(0) == 0){
        std::cout <<"    the M(0) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b00.M(1) == 0){
        std::cout <<"    the M(1) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    b00.CX(0,1);
    if(b00.M(0) == 0){
        std::cout <<"    after CX(0, 1) the M(0) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b00.M(1) == 0){
        std::cout <<"    after CX the M(1) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    b00.X(1);
    if(b00.M(0) == 0){
        std::cout <<"    after X(1) the M(0) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b00.M(1) == 1){
        std::cout <<"    after X(1) the M(1) = 1. Success"<< std::endl<< " " << std::endl;
    } else { std::cout << "    The code failed"<< std::endl << " " << std::endl;}

    
    
    B2 b01(0,1);
    b01.print("Values");
    if(b01.M(0) == 0){
        std::cout <<"    the M(0) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b01.M(1) == 1){
        std::cout <<"    the M(1) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    b01.CX(0,1);
    if(b01.M(0) == 0){
        std::cout <<"    after CX(0, 1) the M(0) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b01.M(1) == 1){
        std::cout <<"    after CX the M(1) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    b01.X(1);
    if(b01.M(0) == 0){
        std::cout <<"    after X(1) the M(0) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b01.M(1) == 0){
        std::cout <<"    after X(1) the M(1) = 0. Success"<< std::endl<< " " << std::endl;
    } else { std::cout << "    The code failed"<< std::endl << " " << std::endl;}

    

    
    B2 b10(1,0);
    b10.print("Values");
    if(b10.M(0) == 1){
        std::cout <<"    the M(0) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b10.M(1) == 0){
        std::cout <<"    the M(1) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    b10.CX(0,1);
    if(b10.M(0) == 1){
        std::cout <<"    after CX(0, 1) the M(0) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b10.M(1) == 1){
        std::cout <<"    after CX the M(1) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    b10.X(1);
    if(b10.M(0) == 1){
        std::cout <<"    after X(1) the M(0) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b10.M(1) == 0){
        std::cout <<"    after X(1) the M(1) = 0. Success"<< std::endl<< " " << std::endl;
    } else { std::cout << "    The code failed"<< std::endl << " " << std::endl;}
    
    B2 b11(1,1);
    b11.print("Values");
    if(b11.M(0) == 1){
        std::cout <<"    the M(0) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b11.M(1) == 1){
        std::cout <<"    the M(1) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    b11.CX(0,1);
    if(b11.M(0) == 1){
        std::cout <<"    after CX(0, 1) the M(0) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b11.M(1) == 0){
        std::cout <<"    after CX the M(1) = 0. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    b11.X(1);
    if(b11.M(0) == 1){
        std::cout <<"    after X(1) the M(0) = 1. Success"<< std::endl;
    } else { std::cout << "    The code failed"<< std::endl;}
    if(b11.M(1) == 1){
        std::cout <<"    after X(1) the M(1) = 1. Success"<< std::endl<< " " << std::endl;
    } else { std::cout << "    The code failed"<< std::endl << " " << std::endl;}

    

    
    
}
