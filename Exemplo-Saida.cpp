#include <iostream>
#include <fstream>
using namespace std;
int main (){
// declaração das variáveis
char ch; // guarda o caractere lido
int i; // guarda o inteiro lido
float f; // guarda o número real lido
char str[80]; // guarda a string lida
// abre um arquivo para leitura de nome Teste.txt
ifstream in( "Teste.txt" );
if( !in )
{
cout << "O arquivo não pode ser aberto!";
return 1;
}
in >> i;
in >> f;
in >> ch;
in >> str;
cout << i << " " << f << " " << ch << endl;
cout << str;
// fecha o arquivo
in.close();
}
