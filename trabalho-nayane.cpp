// ================= TRABALHO DE PROGRAMAÇÃO  ================= //
//
#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
using std :: ifstream;
using std :: ofstream;

// Estrutura de cadastro do aluno.
struct Cadastro 
{
          string nome[10];
          string disciplina[5];
          double nota[30];
};

void menu_princ(){
        
        int e;
        cout<<"SIA - SISTEMA INTEGRADO ACADEMICO \n";
        
        cout<<"escolha a opcao desejada: \n";
        cout<<"\n";

        cout<<"1 - cadastrar alunos \n";
        cout<<"2 - cadastrar disciplinas \n";
        cout<<"3 - digitar notas \n";
        cout<<"4 - buscar \n";
        cout<<"5 - relatorios \n";
        cout<<"\n ";
        cin>> e;
        
}











//Programa principal.
int main (){



menu_princ();












}
