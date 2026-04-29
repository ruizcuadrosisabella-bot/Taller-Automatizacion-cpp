#include <iostream>

// e^x
double expTaylor(double x, int n) {
    double suma = 1;
    double termino = 1;

    for(int i = 1; i < n; i++) {
        termino = termino * x / i;
        suma = suma + termino;
    }
    return suma;
}

// seno
double senTaylor(double x, int n) {
    double suma = x;
    double termino = x;

    for(int i = 1; i < n; i++) {
        termino = termino * (-1) * x * x / ((2*i)*(2*i+1));
        suma = suma + termino;
    }
    return suma;
}

int main() {
    double x;
    int n;

    std::cout << "Ingrese x: ";
    std::cin >> x;

    std::cout << "Ingrese cantidad de terminos: ";
    std::cin >> n;

    std::cout << "e^x: " << expTaylor(x,n) << std::endl;
    std::cout << "sen(x): " << senTaylor(x,n) << std::endl;

    return 0;
}
