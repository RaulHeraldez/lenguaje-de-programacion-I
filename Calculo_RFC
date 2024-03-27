#include <iostream>
#include <string>
using namespace std;

class RFCGenerator {
private:
    string nombres;
    string apellidoPaterno;
    string apellidoMaterno;
    string fechaNacimiento;

public:
    RFCGenerator(string nombres, string apellidoPaterno, string apellidoMaterno, string fechaNacimiento)
        : nombres(nombres), apellidoPaterno(apellidoPaterno), apellidoMaterno(apellidoMaterno), fechaNacimiento(fechaNacimiento) {}

    string calcularRFC() {
        string rfc;

        // Primeros 2 caracteres: primera letra del apellido paterno y primera vocal interna
        rfc += apellidoPaterno[0];
        for (int i = 1; i < apellidoPaterno.length(); ++i) {
            if (esVocal(apellidoPaterno[i])) {
                rfc += apellidoPaterno[i];
                break;
            }
        }

        // Tercera posición: inicial del apellido materno o X si no existe
        rfc += (apellidoMaterno.empty() ? 'X' : apellidoMaterno[0]);

        // Cuarta posición: inicial del primer nombre o X si no existe
        rfc += (nombres.empty() ? 'X' : nombres[0]);

        // Quinta y sexta posición: últimos dos dígitos del año de nacimiento
        rfc += fechaNacimiento.substr(8, 2);

        // Séptima y octava posición: mes de nacimiento
        rfc += fechaNacimiento.substr(3, 2);

        // Novena y décima posición: día de nacimiento
        rfc += fechaNacimiento.substr(0, 2);

        return rfc;
    }

private:
    bool esVocal(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};

int main() {
    string nombres, apellidoPaterno, apellidoMaterno, fechaNacimiento;

    // Captura de datos del empleado
    cout << "Ingrese nombres: ";
    getline(cin, nombres);
    cout << "Ingrese el apellido paterno: ";
    getline(cin, apellidoPaterno);
    cout << "Ingrese el apellido materno: ";
    getline(cin, apellidoMaterno);
    cout << "Ingrese la fecha de nacimiento (formato DD/MM/YYYY): ";
    getline(cin, fechaNacimiento);

    // Creación del objeto RFCGenerator con los datos proporcionados
    RFCGenerator empleado(nombres, apellidoPaterno, apellidoMaterno, fechaNacimiento);

    // Cálculo y muestra del RFC
    cout << "RFC: " << empleado.calcularRFC() << endl;

    return 0;
}
