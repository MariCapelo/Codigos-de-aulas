#include <bits/stdc++.h>


using namespace std;


int main()
{
    cout << "Quantidade numeros" << endl;
    int n;
    cin >> n;
    int v[n];
    cout << "Digite os numeros" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
   
    // Media aritimetica
    float x, M;
    for(int i = 0; i < n; i++)
    {
        x += v[i];
    }
    M = x/n;
    cout << "Media aritimetica: " << M << endl;
    cout << endl;
   
    //Media Geometrica
    x = v[0];
    for(int i = 1; i < n; i++)
    {
        x = x * v[i];
    }
    float b = 1.0/n;
    float z = pow(x,b);
    cout << "Media Geometrica: " << z << endl << endl;
   
    //Media Harmonica
    for(int i = 0; i < n; i++)
    {
        x = x + (1.0/v[i]);
    }
    float a = n / x;
    cout << "Media Harmonica: " << a << endl << endl;
   
    //Variancia
    x = 0;
    for(int i = 0; i < n; i++)
    {
        x += pow(v[i]-M,2);
    }
    float V1 = x/(n-1);


    cout << "Variancia: " << V1 << endl;
    cout << endl;
   
    //Desvio Padrao
    cout << "Desvio Padrao: " << pow(V1, 0.5) << endl;
    return 0;
}
