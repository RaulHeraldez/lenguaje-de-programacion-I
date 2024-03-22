#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Escribe el primer número: ";
    cin >> num1;
    cout << "Escribe el segundo número: ";
    cin >> num2;
    
    float suma = num1 + num2;
    float resta = num1 - num2;
    float multiplicacion = num1 * num2;
    float division;
    
    if (num2 != 0) {
        division = num1 / num2;
    } else {
        cout << "No se puede dividir por cero." << endl;
        division = 0;
    }
    
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicación es: " << multiplicacion << endl;
    cout << "La división es: " << division << endl;
    
    return 0;
}
