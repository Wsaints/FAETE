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
          string nome[5];
          string disciplina[5];
          double nota;
};

void cad_alunos(){
       
	   
	  //Cadastro cad;
	  string nome[5];
          string disciplina[5];
          double nota;
    
     
    ofstream calunos ("cadastro.txt", ios::app);
	    for(int i = 0; i<5; i++){
	    
      	cout<<"digite o nome do aluno: ";
      	cin >> nome[i];
		  
		  
		 }
    
    //calunos.write((char*)sizeof(cad_alunos));    
    calunos.close();
        
        
}







//Programa principal.
 main (){

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




switch (e ) {
	
case 1 
	:cad_alunos();	
	break;
	
	
	
	
	
	
	
	
	
	
	
}





}
