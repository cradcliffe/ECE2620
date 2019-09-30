//
//  Point.cpp
//  Assignment_1
//
//  Created by Christopher Radcliffe on 9/10/19.
//  Copyright © 2019 Christopher Radcliffe. All rights reserved.
//
//  This code was written for ECE 2620. It was assignment 1. The tasks are listed below.
//

#include "Point.hpp"
#include <iostream>
#include <iostream>

int main()
{
    int numberOfTests;
    std::cout << "How many tests are requested?: ";
    std::cin >> numberOfTests; //value for how many times the code loop will run and therefore how many times the code will be tested
    
    
    Point a1[numberOfTests]; //creating two arrays of random point values long enough for each test
    Point a2[numberOfTests];
    
    
    
    int i;
    for(i=0; i<numberOfTests; i++){
        std::cout << "Test number: " << i+1 << std::endl << "With values: " << std::endl;
        
        std::cout << "  "; a1[i].print("p1");//print the values of a1 and a2 for this test
        
        std::cout << "  "; a2[i].print("p2");
        
        
        std::cout << "      distance = " << a1[i].distance(a2[i]) << std::endl;//the distance between a1 and a2 for this test
        
        std::cout << "      angle = " << a1[i].angle(a2[i]) << std::endl;//the angle between a1 and a2
        
        std::cout << "      magnitude of p1 = " << a1[i].magnitude() << std::endl;//the distance a1 is from (0,0)
        
        std::cout << "      magnitude of p2 = " << a2[i].magnitude() << std::endl;//the distance a2 is from (0,0)
        
        std::cout << "      angle of p1 = " << a1[i].angle() << std::endl;//the angle a1 is from (0,0) directed in the positive x axis
        
        std::cout << "      angle of p2 = " << a2[i].angle() << std::endl;//the angle a1 is from (0,0) directed in the positive x axis
        
        std::cout << "      area circle of p1 = " << a1[i].area() << std::endl;//the area of a1 using its magnitiude as the radius
        
        std::cout << "      area circle of p2 = " << a2[i].area() << std::endl;//the area of a1 using its magnitiude as the radius
    }
    
}

/**
 ** Add functions to the 2D Point class (Point/ or Point.cc) so that the following calls will work:
 **
 ** p.distance(q) returns distance between two points p and q
 **
 ** p.angle(q)    returns angle in radians between p and q (search "dot product")
 **
 ** p.magnitude() returns distance of p from the origin
 **
 ** p.angle()     returns angle in radians of p from the x axis
 **
 ** p.area()      eturns area of circle with radius p.magnitude()
 ** Add statements to main() to test the functions and display the results.
 **
 **/
