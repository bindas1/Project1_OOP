//
//  main.cpp
//  Projekt_1_Bartlomiej_Binda
//
//  Created by Bartłomiej Binda on 05/03/2019.
//  Copyright © 2019 Bartłomiej Binda. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

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

QuadraticEquation::QuadraticEquation(){
    cout << "Input coefficients a, b and c: " << endl;
    cin >> a >> b >> c;
}

void QuadraticEquation::showEquation(){
    cout << "Your quadratic equation: " << endl;
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    }

void QuadraticEquation::solveEquation(){
    cout << "Solving the equation: " << endl;
    if(a == 0){
        if(b == 0 && c == 0)
            cout << "Infinite number of solutions" << endl;
        else if(b == 0 && c != 0)
            cout << "There is no solution to the equation! " << endl;
        else{
            solution1 = -double(c)/b;
            cout << "Your solution equals: " << solution1 << endl;
        }
    }
    else{
        delta = b*b-4*a*c;
        if(delta < 0)
            cout << "There is no solution in rational numbers to the equation! " << endl;
        else{
            solution1 = (-b-sqrt(delta))/(2*a);
            if(delta==0)
                cout << "Your only solution equals: " << solution1 << endl;
            else{
                solution2 = (-b+sqrt(delta))/(2*a);
                cout << "Solutions to this equation equal: " << solution1 << " and " << solution2 << endl;
            }
        }
    }
}
    
int main(int argc, const char * argv[]) {
    QuadraticEquation eq1;
    eq1.showEquation();
    eq1.solveEquation();
    return 0;
}
