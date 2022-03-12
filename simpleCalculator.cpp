#include <iostream>

double a{0.0};
double b{0.0};

double sum(double x, double y){
    return x + y;
}

double subtract(double x, double y){
    return x - y;
}

double multiply(double x, double y){
    return x*y;
}

double divide(double x, double y){
    if (y != 0){
        return x / y;
    }
    else{
        std::cout << "Division by zero" << '\n';
        return 0.0;
    }
}

int main(){
}