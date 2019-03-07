//
//  Equations.h
//  Projekt_1_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 07/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#ifndef Equations_h
#define Equations_h

class QuadraticEquation{
private:
    double solution1;
    double solution2;
    int a;
    int b;
    int c;
    double delta;
public:
    QuadraticEquation();
    void showEquation();
    void solveEquation();
};

#endif /* Equations_h */
