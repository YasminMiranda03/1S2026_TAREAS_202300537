#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {

    string codigo[] = {
        "int 123numero = 5;",
        "float valor# = 10.5;",
        "if (123numero > valor#) { return 0; }"
    };

    regex reservadas("\\b(if|while|for|int|float|return)\\b");
    regex identificador("[a-zA-Z_][a-zA-Z0-9_]*");
    regex entero("[0-9]+");
    regex real("[0-9]+\\.[0-9]+");
    regex operador("[+\\-*/><=]");
    regex delimitador("[();{}]");

    cout << "TOKEN\t\tLEXEMA\n";

    for(string linea : codigo){

        string palabra="";
        for(char c : linea){

            if(c==' '){
                if(palabra!=""){

                    if(regex_match(palabra,reservadas))
                        cout<<"Reservada\t"<<palabra<<endl;

                    else if(regex_match(palabra,real))
                        cout<<"Real\t\t"<<palabra<<endl;

                    else if(regex_match(palabra,entero))
                        cout<<"Entero\t\t"<<palabra<<endl;

                    else if(regex_match(palabra,identificador))
                        cout<<"Identificador\t"<<palabra<<endl;

                    else
                        cout<<"ERROR\t\t"<<palabra<<endl;

                    palabra="";
                }
            }
            else if(regex_match(string(1,c),operador)){
                cout<<"Operador\t"<<c<<endl;
            }
            else if(regex_match(string(1,c),delimitador)){
                cout<<"Delimitador\t"<<c<<endl;
            }
            else{
                palabra+=c;
            }
        }
    }

    return 0;
}