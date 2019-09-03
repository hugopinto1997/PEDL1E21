#include <iostream>
using namespace std;

void zeroes(int matrix[][5]){
    for (int i = 0; i <5 ; ++i) {
        for (int j = 0; j <5 ; ++j) {
            matrix[i][j]=0;
        }
    }
}

void showMatrix(int matrix[][5]){
    for (int i = 0; i <5 ; ++i) {
        for (int j = 0; j <5 ; ++j) {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void fillMatrix(int matrix[][5]){
    for (int i = 0; i <5 ; ++i) {
        int cont = i;
        for (int j = 0; j <5 ; ++j) {
            if(j<cont){
                cout<<"ingrese un numero: ";
                cin>>matrix[i][j];
                cout<<endl;
            }
        }
    }
}

int main() {
    int matrix[5][5];
    zeroes(matrix); //llena de ceros
    fillMatrix(matrix);// pide los datos
    showMatrix(matrix); // muestra la matriz
    return 0;
}