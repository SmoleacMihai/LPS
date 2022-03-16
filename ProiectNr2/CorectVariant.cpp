#include <iostream>
#define NMAX -2147483647
using namespace std;

bool Par(int nr)
{
    return (nr % 2 == 0);
}

bool ParOptimizat(int n)
{
    return (!(n & 1));
}

// bool Impar(int nr)
// {
//     return (nr % 2 != 0);
// }

bool ParPrinImpar(int n)
{
    return (!(n % 2 != 0));
}

// bool Divizibil(int n, int k)
// {
//     return (n % k == 0);
// }

// bool Prim(int n)
// {
//     for (int k = 2; k <= n / 2; k++)
//     {
//         if (n % k == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// bool Lucas(int n)
// {
//     if ((n = 1) || (n == 3))
//         return true;
//     int a = 1, b = 3, c;
//     c = a + b;
//     while (c < n)
//     {
//         a = b;
//         b = c;
//         c = a + b;
//     }
//     return c == n;
// }

// void CreateRange()
// {
//     cout << "Indicati intervalul [a; b]\n";
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "Intervalul propus este [" << a << "; " << b << "]\n\n";
// }

// void FindFirstNEvenNumbersInRange(int a, int b, int n)
// {
//
//     if (b < a)
//     {
//         for (int i = a; i >= b; i--)
//         {
//             if (count == n)
//                 break;

//             if (Par(i) && (n != count))
//             {
//                 cout << "Numarul " << i << " din intervalul [" << a << "; " << b << "] este par\n\n";
//                 count = count + 1;
//             }
//         }
//     }
//     else
//     {
//         for (int i = a; i <= b; i++)
//         {
//             if (count == n)
//                 break;

//             if (Par(i) && (n != count))
//             {
//                 cout << "Numarul " << i << " din intervalul [" << a << "; " << b << "] este par\n\n";
//                 count = count + 1;
//             }
//         }
//     }
// }

// void FindMaxEvenNumberInRange(int a, int b)
// {
//     int max;
//     max = -NMAX;

//     if (b < a)
//     {
//         for (int i = a; i >= b; i--)
//         {
//             if (ParOptimizat(i))
//             {
//                 if (i > max)
//                     max = i;
//             }
//         }
//     }
//     else
//     {
//         for (int i = a; i <= b; i++)
//         {
//             if (ParOptimizat(i))
//             {
//                 if (i > max)
//                     max = i;
//             }
//         }
//     }

//     cout << "Cel mai mare numar care corespunde conditiei este " << max << "\n\n";
// }

// void FindMinEvenNumberInRange(int a, int b)
// {

//     if (b < a)
//     {
//         for (int i = a; i >= b; i--)
//         {
//             if (Par(i))
//             {
//                 if (i < min)
//                     min = i;
//             }
//         }
//     }
//     else
//     {
//         for (int i = a; i <= b; i++)
//         {
//             if (Par(i))
//             {
//                 if (i < min)
//                     min = i;
//             }
//         }
//     }

//     cout << "Cel mai mic numar care corespunde conditiei este " << min << "\n\n";
// }

int main()
{
    int a, b, n, nr;
    int count;
    count = 0;
    int max;
    max = NMAX;
    cout << "\nProiect nr. 2 elaborat de Smoleac Mihai\n";
    cout << "Tema: Numere pare\n\n";
    // 1.	De verificat dacă numărul nr satisface proprietatea de bază.
    cout << "1.\tnr = ";
    cin >> nr;
    if (Par(nr))
    {
        cout << "nr este par\n\n";
    }
    else
        cout << "nr este impar\n\n";
    // 2. De indicat toate numerele din intervalul [a; b], care satisfac proprietatea de bază.
    cout << "Indicati intervalul [a; b]\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "n = ";
    cin >> n;
    cout << "Intervalul propus este [" << a << "; " << b << "]\n\n";
    cout << "\n2.\t";
    if (b < a)
    {
        for (int i = a; i >= b; i--)
        {
            if (Par(i))
                cout << "Numarul " << i << " din intervalul [" << a << "; " << b << "] este par\n";
            if (i > max)
                max = i;
        }
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            if (Par(i))
                cout << "Numarul " << i << " din intervalul [" << a << "; " << b << "] este par\n";
            if (i > max)
                max = i;
        }
    }
    // 3. De indicat primele n numere, care satisfac proprietatea de bază.
    cout << "\n3.\t";
    if (b < a)
        for (int i = a; i >= b; i--)
        {
            if (count == n)
                break;

            if (Par(i) && (n != count))
            {
                cout << "Numarul " << i << " din intervalul [" << a << "; " << b << "] este par\n";
                count = count + 1;
            }
        }
    else
    {
        for (int i = a; i <= b; i++)
        {
            if (count == n)
                break;

            if (Par(i) && (n != count))
            {
                cout << "Numarul " << i << " din intervalul [" << a << "; " << b << "] este par\n";
                count = count + 1;
            }
        }
        // 4. De indicat toate numerele din intervalul [a; b], care satisfac proprietatea de bază (varianta optimizată)
        cout << "\n4.\t";
        if (b < a)
        {
            for (int i = a; i >= b; i--)
            {
                if (ParOptimizat(i))
                    cout << "Numarul " << i << " din intervalul [" << a << "; " << b << "] este par\n";
            }
        }
        else
        {
            for (int i = a; i <= b; i++)
            {
                if (ParOptimizat(i))
                    cout << "Numarul " << i << " din intervalul [" << a << "; " << b << "] este par\n";
            }
        }

        // 5. De determinat cel mai mare număr, care satisface condiţia indicată.
        cout << "\n\nCel mai mare numar din intervalul dat este " << max;
        return 0;
    }
}