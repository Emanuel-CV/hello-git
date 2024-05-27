#include <regex>
#include <iostream>
#include <string>

using namespace std;

bool validarPlaca(const string&);

int main()
{
    string placa;

    while (true){
        cout << endl << "Ingrese la placa: ";
        getline(cin, placa);

        if (validarPlaca(placa)){
            cout << endl << "Plava valida";
            break;
        } else{
            cout << endl << "Placa incorrecta";
        }
    }

    return 0;
} 

bool validarPlaca(const string& placa){

    // Regex para las placas
    const regex expReg("[A-Z]{3} \\d{2}[A-G]{1}");

    return regex_match(placa, expReg);
}
