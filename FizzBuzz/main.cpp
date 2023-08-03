//Juan Manuel González Ascencio
// comando para compilar: g++ main.cpp -o ./app

//Crear un programa que lea los primeros 100 numeros e imprima fizz si es divisible entre 3 y buzz si es divisible entre 5.
#include <bits/stdc++.h>
using namespace std;

int main (){

    for (int i = 1; i <100; i++){
        if (i%3 == 0 and i%5 == 0){
            cout<<"FizzBuzz"<<endl;
        }

        else if (i%3 == 0){
            cout<<"Fizz"<<endl;
        }
        else if (i%5 == 0)
        {
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}