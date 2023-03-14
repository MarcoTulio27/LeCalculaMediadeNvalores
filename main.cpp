#include <iostream>

using namespace std;


int LeCalculaMedia(int n){
    float valor;
    float soma = 0;
    for(int i = 0; i<n; i++){
        cout << "Digite um valor real: ";
        cin >> valor;
        soma = soma + valor;    // ou soma +=valor;     soma acumulando os n valores

    }
    return soma/n;
}

int main()
{
    int n;
    float media;

    cout << "Digite a quantidade de valores a serem lidos: ";
    cin >> n;

    media = LeCalculaMedia(n);
    cout << "Media dos valores digitados: " << media << endl;
    //ou LeCalculaMedia(n)<<endl;
    return 0;
}
