//
//  point.hpp
//  ECE-2620
//
//  Created by Christopher Radcliffe on 9/10/19.
//  Copyright © 2019 Christopher Radcliffe. All rights reserved.
//
// This code was written for ECE 2620. It was assignment 1. The tasks are listed below.
//

#ifndef point_hpp
#define point_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
const double PI = atan(1)*4;//Defines values of pi

class Point //these points are based on a cartesian grid system
{
private: double x, y;//the x and y coordinates
    
private: Point(double x, double y) {//creates a point at (x,y) if given these values
    this->x = x; this->y = y;
}

public: Point(){//if given no values create a random point
    this->x = rand() % 100;
    this->y =rand() % 100;
}
    
    void print(const char msg[]) {//creates a standard print statement to view the (x,y) point
        std::cout << msg << ": (" << x << "," << y << ")" << std::endl;
    }
    
    double distance (Point p) {//p.distance(q) returns distance between two points p and q
        double dx = this->x - p.x, dy = this->y - p.y;//determines the distance in the x and y direction between the two points
        
        return hypot(dx,dy);//returns the calculated distance between the two points
    }
    
    double angle (Point p){//p.angle(q) returns angle in radians between p and q (search
        
        return atan2(this->y - p.y, this->x - p.x);//returns the calculated angle between the two points
    
    }
    
    double magnitude() {//p.magnitude() returns distance of p from the origin
        
        return hypot(this->x, this->y);
        
    }
    
    double angle(){//p.angle()     returns angle in radians of p from the x axis
        
        return atan2(this->y, this->x);
        
    }
    
    double area() {//p.area()      eturns area of circle with radius p.magnitude()
        
        return pow(this->magnitude(),2)*PI;
        
    }
};
#endif /* point_hpp */
