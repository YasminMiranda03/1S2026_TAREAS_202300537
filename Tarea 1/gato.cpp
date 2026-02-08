#include <iostream>
using namespace std;

class Gato {
private:
    string nombre;
    int edad;
    string color;

public: 
    Gato(string nombre, int edad, string color) {
        this->nombre = nombre;
        this->edad = edad;
        this->color = color;
    }
    void maullar() {
        cout << nombre << " dice: miau" << endl;
    }
    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " anos" << endl;
        cout << "Color: " << color << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    Gato gato1("Luna", 2, "Blanco");
    Gato gato2("Chiquita", 7, "Varios colores");

    gato1.mostrarInfo();
    gato1.maullar();

    gato2.mostrarInfo();
    gato2.maullar();

    return 0;
}
