#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>

#define NMAX 100
// Interfata programului
// La intrare: n - dimensiunea tabloului; La iesire: a - tabloul;
// F - returneaza 1 sau 0 in caz de succes sau insucces
int Citire(int n, int a[]);

// La intrare: n - dimensiunea tabloului, a - tabloul;
void Afisare(int n, int a[], char sir[]);

// La intrare: n - dimensiunea tabloului, a - tabloul;
// F - returneaza minimul;
int Minim(int n, int a[]);

// La intrare: n - dimensiunea tabloului, a - tabloul;
// F - returneaza maximul;
int Maxim(int n, int a[]);

// La intrare: n - dimensiunea tabloului, a - tabloul;
// F - returneaza media;
double Media(int n, int a[]);

// La intrare: n - dimensiunea tabloului, a - tabloul;
// F - returneaza tabloul aranjat;
int Sortare(int n, int a[]);

// La intrare: n - dimensiunea tabloului, a - tabloul;
// F - returneaza tabloul rotit;
int Rotire(int n, int a[]);

// La intrare: n - dimensiunea tabloului, a - tabloul, temp - valoarea adaugata;
// La iesire: n - dimnesiiunea tabloului, a - tabloul modificat;
int Inserare(int *n, int a[], int temp);

// La intrare: n - dimensiunea tabloului, a - tabloul, temp - valoarea adaugata;
// La iesire: n - dimnesiiunea tabloului, a - tabloul modificat, id - indicele;
int Cautare(int n, int a[], int temp);

// La intrare: n - dimensiunea tabloului, a - tabloul, temp - pozitia;
// La iesire: n - dimnesiiunea tabloului, a - tabloul modificat;
int Eliminare(int &n, int a[], int temp);
int Clasificare(int &n, int a[], int temp);
int Generare(int n, int a[]);
using namespace std;

int main()
{
    int n = 10;
    int optiune;
    int temperatura[NMAX] = {5, 19, 16, 17, 13, 32, 25, 18, 30, 22};

    do
    {
        system("cls");
        cout << "\nProiect nr. 3 elaborat de Smoleac Mihai\n";
        cout << "Tema: Temperaturile intro luna calindaristica\n";
        cout << "\n1. De determinat minimul si maximul";
        cout << "\n2. Media";
        cout << "\n3. Sortare";
        cout << "\n4. Rotirea la dreapata sau stanga";
        cout << "\n5. Inserare";
        cout << "\n6. Eliminare";
        cout << "\n7. Clasificare";
        cout << "\n8. Generare";
        cout << "\n0. Stop";
        cout << "\n\n\tAlege (de la 0 la 8) -> ";
        cin >> optiune;
        switch (optiune)
        {
        case 1:
            Afisare(n, temperatura, "initial");
            cout << "\n Cea mai mica temperatura este: " << Minim(n, temperatura);
            cout << "\n Cea mai mare temperatura este: " << Maxim(n, temperatura);
            break;
        case 2:
            Afisare(n, temperatura, "initial");
            cout << "\nMedia temperaturilor este: " << Media(n, temperatura);
            break;
        case 3:
            Afisare(n, temperatura, "initial");
            Sortare(n, temperatura);
            Afisare(n, temperatura, "initial");

            break;
        case 4:
            Afisare(n, temperatura, "initial");
            Sortare(n, temperatura);
            Afisare(n, temperatura, "initial");

            break;
        case 5:
            Afisare(n, temperatura, "initial");
            Sortare(n, temperatura);
            Afisare(n, temperatura, "initial");

            break;
        case 6:
            Afisare(n, temperatura, "initial");
            Sortare(n, temperatura);
            Afisare(n, temperatura, "initial");

            break;
        case 7:
            Afisare(n, temperatura, "initial");
            Sortare(n, temperatura);
            Afisare(n, temperatura, "initial");

            break;
        case 8:
            Afisare(n, temperatura, "initial");
            Sortare(n, temperatura);
            Afisare(n, temperatura, "initial");

            break;
        default:
            break;
        }
        _getch();
    } while (optiune);
    return 0;
}

int Citire(int n, int a[])
{
    return 1;
}

void Afisare(int n, int a[], char sir[])
{
    int i;
    cout << "\n Tabloul de temperatura " << sir << "\n";
    for (i = 0; i < n; i++)
        cout << setw(4) << a[i];
}

int Minim(int n, int a[])
{
    int i, aux;
    aux = a[0];
    for (i = 1; i < n; i++)
        if (a[i] < aux)
            aux = a[i];
    return aux;
}

int Maxim(int n, int a[])
{
    int i, aux;
    aux = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > aux)
            aux = a[i];
    return aux;
}

double Media(int n, int a[])
{
    int i;
    double aux = 0;
    for (i = 0; i < n; i++)
        aux += a[i];
    aux /= n;
    return aux;
}

int Sortare(int n, int a[])
{
    int i, k;
    bool change;
    // Descrescator
    // do
    // {
    //     k++;
    //     change = false;
    //     for (i = 0; i < n; i++)
    //         if (a[i] < a[i + 1])
    //         {
    //             swap(a[i], a[i + 1]);
    //             change = true;
    //         }
    // } while (change);

    // Crescator
    for (k = 0; k < n - 1; k++)
        for (i = k + 1; i < n; i++)
            if (a[i] < a[k])
                swap(a[i], a[k]);
}

int Rotire(int n, int a[])
{
    return 1;
}

int Inserare(int *n, int a[], int temp)
{
    return 1;
}

int Cautare(int n, int a[], int temp)
{
    return 1;
}

int Eliminare(int &n, int a[], int temp)
{
    return 1;
}

int Clasificare(int &n, int a[], int temp)
{
    return 1;
}

int Generare(int n, int a[])
{
    return 1;
}