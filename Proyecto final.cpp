#include <iostream>
using namespace std;
class Nodo
{
public:
    string cliente;
    Nodo* siguiente;
public:
    // Constructor 
    Nodo(string dato)
    {
        this->cliente = dato;
        this->siguiente = NULL;

    }
};

class Unir
{
public:
    Nodo* inicio;


    Unir()
    {
        inicio = NULL;

    }

    void agrega(string dato1)
    {
        Nodo* nuevoNodo = new Nodo(dato1);
        if (inicio == NULL)
        {
            inicio = nuevoNodo;
            fin = nuevoNodo;
            return;
        }
        Nodo* temp = inicio;
        Nodo* temp1 = inicio;
        while (temp->siguiente != NULL)
        {
            temp1 = temp;
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;

    }

    void imprime()
    {
        Nodo* temp = inicio;
        if (inicio == NULL)
        {
            cout << "Lista VacÃ­a" << endl;
            return;
        }

        while (temp != NULL)
        {
            if (temp->siguiente == NULL)
            {

                cout << temp->cliente << endl;
                return;
            }
            cout << temp->cliente << endl;
            temp = temp->siguiente;
        }

    }

    void quita()
    {
        Nodo* temp = inicio;
        if (temp->siguiente == NULL)
        {
            inicio = NULL;
            delete(temp);
        }
        else
        {
            inicio = temp->siguiente;
            delete(temp);
        }
    }
};

int main()
{
    std::cout << "Hello World!\n";
    Unir conectalos;
    conectalos.agrega("Cliente 1");
    conectalos.agrega("Cliente 2");
    conectalos.imprime();
    conectalos.quita();
    conectalos.imprime();
    conectalos.quita();
    conectalos.imprime();

}