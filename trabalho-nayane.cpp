// ================= TRABALHO DE PROGRAMAÇÃO  ================= //
//
#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
using std :: ifstream;
using std :: ofstream;

// Estrutura de cadastro do aluno.
struct Cadastro
{
          string matricula;
          string nome;
          string disciplina;
          double nota;
};

void menu_princ(){
	
	int e;
	cout<<"SIA - SISTEMA INTEGRADO ACADEMICO \n";
	
	cout<<"escolha a opcao desejada: \n";
	cout<<"\n";

	cout<<"1 - matricular aluno \n";
	cout<<"2 - digitar notas \n";
	cout<<"3 - busca \n";
	cout<<"4 - relatorios \n";
	cout<<"\n ";
	cin>> e;
	
}


//obs: essa parte do codigo ficou complicada, vou ver depois o q posso fazer pra melhorar, se tu souber,
//tenta ai.

//void mat () {
	
//	Cadastro cadastromat;
//	cadastromat.nome [50];
//	cadastromat.matricula [50];
	
//	int i,e;
//	ofstream matriculas ("regmat.txt");
	
	
//		cout<<"digite o nome completo: ";	
//	  	cin >> cadastromat.nome [1];
//		cout<<"\n ";
//		cout<<"digite o numero da matricula: ";
//		cin >> cadastromat.matricula [1];
		//cout<<"\n -------------------- \n";
	//	cout<<"deseja efetuar outra matricula? \n";
	//	cout<<"1 - sim 2 - não ";
	//	cin >> e;
	
		
//	matriculas.close();
	

//}








//Programa principal.
int main (){



menu_princ();












}
