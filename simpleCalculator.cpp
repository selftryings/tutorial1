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
    char op;
    double x{0.0};
    double y{0.0};

    std::cout << "Select an operation; +, -, /, *, m" << '\n' && std::cin >> op;
    std::cout << "Give two values" << '\n' && std::cin >> x && std::cin >> y;

    switch(op){
        case '+':
            return sum(x,y);
            break;
        case '-':
            return subtract(x,y);
            break;
        case '*':
            return multiply(x,y);
        case '/':
            return divide(x,y);
    }

}