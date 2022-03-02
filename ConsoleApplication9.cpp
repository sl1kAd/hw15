#include <iostream>

using namespace std;


int Ex1(unsigned char* str, unsigned int len)
{
    unsigned int seed = 131313;

    unsigned int hash = 0;

    unsigned int i = 0;

    for (i = 0; i < len; str++, i++)
    {
        hash = (hash * seed) + *str + i;
    }
    return hash;
}

int Ex2(int *coin, const int n, const int maxN) 
{

    int arr[n];

    clearIntArr(arr, n);

    int sum = 0;

    int o = 0;

    for (int i = 0; i < maxN; i++) 
    {
        if ((coin[i] * 2) < 98) 
        {
            sum += coin[i];

            o++;
        }

        if (sum < 98) break;
    }
    return o;
}

void Ex21() 
{
    const int Cmax = 5;

    const int maxN = 98;

    int coin[] = { 50, 10, 5, 2, 1 };

    cout << Ex2(coin, Cmax, maxN);
}

