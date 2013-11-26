#include <iostream>
#include <fstream>
using namespace std;
int main (){
// abre um arquivo para escrita de nome Teste.txt
ofstream out( "Teste.txt" );
if( !out )
{
cout << "O arquivo não pode ser aberto!";
return 1;
}
out << 10 << " " << 123.23 << endl;
out << "Este é um pequeno arquivo-texto";
// fecha o arquivo
out.close();
}
