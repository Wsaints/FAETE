// ================= TRABALHO DE PROGRAMAÇÃO  ================= //
//
#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string>
#include<fstream>
#include<windows.h>
#include<float.h>
using namespace std;
using std :: ifstream;
using std :: ofstream;

// Estrutura de cadastro do aluno 

struct Cadastro{

        char nome[20]; 
        char nota1[3];
        char nota2[3];
        char nota3[3];
        int id;
        char email [50];
          
};



    
//função pra cadastrar alunos
void cad_alunos(){
       
    int e;
    Cadastro cadt;
    fstream cad;
    
     
     
     cout<<"\t\t CADASTRO DE ALUNOS \n\n";
     
			  cad.open("arquivo.dat",(ios :: binary | ios :: out) );
            do{
            		system("cls");
            		  cout<<"\t\t CADASTRO DE ALUNOS \n";		
                      cout<<"\n\n\t\t digite o nome do aluno: ";
                      cin >> cadt.nome;
                      cout<<"\n\t\t digite a idade: ";
                      cin>> cadt.id;
                       cout<<"\n\t\t digite a email: ";
                      cin>> cadt.email;
                  	  cad.write((char*)&cadt, sizeof(Cadastro) );
                  	   cout<<"\n\n\t\t deseja efetuar outro cadastro: ";
                  	  cout<<"\n\n\t\t escolha 1 - SIM / 2 - NÃO ";
                      cin >> e;
                      }while(e  != 2 );
                 
				 system("cls");     
                 cad.close ();
				      
      
}




void notas (){

		Cadastro cadt;
    	fstream cad;
        char e;
         
		 system ("cls"); 
		  
		 
         cad.open("arquivo.dat",(ios :: binary | ios :: in) );
    
         while (!cad.eof ()){
         cad.read( (char*)&cadt, sizeof(Cadastro) );
		 cout<<"\n "<<cadt.nome;
        }
        
            
     cad.close ();
         
             
	 cad.open("nota.dat",(ios :: binary | ios :: out) );
			while (e != 'n'){
			
    	cout<<"\n\n\t\t digite um nome: ";    
    	cin>> cadt.nome;
             	
        	cout<<"\n\t\t digite a 1ª nota: ";
			cin>> cadt.nota1;
			cout<<"\n\t\t digite a 2ª nota: ";
			cin>> cadt.nota2;
			cout<<"\n\t\t digite a 3ª nota: ";
			cin>> cadt.nota3;
        	cad.write((char*)&cadt, sizeof(Cadastro) );
        	cout<<"\n\n\t\t deseja cadastrar notas de outro aluno? s/n: ";
        	cin >> e;
        	system("cls");
        }
		

	getch ();    	
	system("cls");
	cad.close ();	
}





 void listar_alunos (){
 
        int i;           
           	Cadastro cadt;
           fstream cad;
           
           system("cls");
           cout<<"\t\t LISTA DE ALUNOS MATRICULADOS ";
           
            cad.open("arquivo.dat",(ios :: binary | ios :: in) );
       		while (!cad.eof() ){
       		
       		cad.read( (char*)&cadt, sizeof(Cadastro) );	
       		cout<<"\n nome: "<<cadt.nome; 
			cout<<"\n idade: "<<cadt.id;
    		cout<<"\n email: "<<cadt.email;
       		}
	   getch ();
	   cad.close ();
	   system("cls");
	   }
       
void listar_notas () {
	Cadastro cadt;
    fstream cad;
	int i;
	
	system ("cls");
	 cad.open("nota.dat",(ios :: binary | ios :: in) );
		
		while (!cad.eof() ){	
		cad.read( (char*)&cadt, sizeof(Cadastro) );	
		cout<<"\n\t\t nome: "<<cadt.nome; 
			cout<<"\n\t\t 1ª nota: "<< cadt.nota1;
			cout<<"\n\t\t 2ª nota: "<< cadt.nota2;
			cout<<"\n\t\t 3ª nota: "<<cadt.nota3;
      }
     getch ();
	 cad.close (); 
	 system ("cls");
}




int main (){
int e;

        while(e!=5){
        
        cout<<"\t\t SIA - SISTEMA INTEGRADO ACADEMICO \n\n\n";
        
        

        cout<<"\t\t 1 - cadastrar alunos \n";
        cout<<"\t\t 2 - digitar notas \n";
        cout<<"\t\t 3 - listar alunos \n";
        cout<<"\t\t 4 - listar notas  \n ";
        cout<<"\t\t 5 - sair";
        cout<<"\n\n\t\t escolha a opcao desejada: \n";
        
       cout<<"\t\t "; cin>> e;




switch (e) {
        
case 1 :
        cad_alunos();        
        break;
case 2:
     notas ();
break;        
case 3:
     listar_alunos ();  
break;        
        
case 4:
	  listar_notas ();    
break;

case 5: break;
        
default:{
        cout<<"\n\n escolha errada!! \n\n";
        cout<<"\n\n pressione uma opção válida!! \n\n";
        getch ();
        system("cls");
}

                
                
}

}

	
	
	
	
	
	
	
	
}


  
    

		
     
