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

// Estrutura de cadastro do aluno 

struct Cadastro{

        string _nome[10];
        string _disciplina; 
        double _nota[30];
};

//declarando "cad" como variavel global pra usá-la em todas as funções
Cadastro _cad;


//função pra cadastrar alunos
void cad_alunos(){
       
        
    
     system("cls");
            for(int i = 0; i<10; i++){
            
                      cout<<"digite o nome do aluno: ";
                      cin >> _cad._nome[i];
                  
                  
                 }     
              system("cls");  
}

//função pra cadastrar disciplinas
void disciplinas (){
        
        

        
        system("cls");
        cout<<"digite a sua disciplina: \n\n";
        
    
                
                cout<<" - disciplina: ";
                cin>>_cad._disciplina;
                
        
                
        system("cls");
}



// função pra cadastrar notas
void notas (){


        
        string nome[10];
        int e;
        int i;
        
        system("cls");
        
        for ( i = 0; i<10;i++){
                
                cout<<i<<" - aluno: "<<_cad._nome[i]<<"\n ";        
                
        
        }

    cout<<"escolha um aluno ";
        cin>> e;
    cout<<"\n \n";
    

           if(e == 0){
                   
                   for ( i = 0; i<3; i++){
                           
                           cout<<"digite a nota: ";
                           cin >> _cad._nota[i];
                           
                   }
                   
                   
           }
                
           
           
           if(e == 1){
                   
                   for (i = 3; i<6; i++){
                           
                           cout<<"digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           
   if(e == 2){
                   
                   for (i = 6; i<9; i++){
                           
                           cout<<"digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }        
           
           if(e == 3){
                   
                   for (i = 9; i<12; i++){
                           
                           cout<<"digite a nota: ";
                           cin >> _cad._nota[i];
                           
                   }
                   
                   
           }
           
           
           if(e == 4){
                   
                   for (i = 12; i<15; i++){
                           
                           cout<<"digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           if(e == 5){
                   
                   for (i = 15; i<18; i++){
                           
                           cout<<"digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           if(e == 6){
                   
                   for (i = 18; i<21; i++){
                           
                           cout<<"digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           
           if(e == 7){
                   
                   for (i = 21; i<24; i++){
                           
                           cout<<"digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           if(e == 8){
                   
                   for (i = 24; i<27; i++){
                           
                           cout<<"digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           if(e == 9){
                   
                   for (i = 27; i<30; i++){
                           
                           cout<<"digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           
           system("cls");
           
   } 
   
   void busca (){
 
	int i,e;   	
   	
   	system("cls");
   	
   	cout<<"           MENU DE BUSCAS \n\n\n";
   	cout<<"1-  procurar alunos \n";
   	cout<<"2 - mostrar notas \n";
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	system ("cls");
   	
   }


        



//Programa principal.
 main (){
         
         string nome[10];
          string disciplina[3];

int e;

        while(e!=6){
        
        cout<<"SIA - SISTEMA INTEGRADO ACADEMICO \n";
        
        cout<<"escolha a opcao desejada: \n";
        cout<<"\n";

        cout<<"1 - cadastrar alunos \n";
        cout<<"2 - cadastrar disciplina \n";
        cout<<"3 - digitar notas \n";
        cout<<"4 - buscar \n";
        cout<<"5 - relatorios \n";
        cout<<"6 - sair";
        cout<<"\n ";
        cin>> e;




switch (e) {
        
case 1 :
        cad_alunos();        
        break;
case 2:
        disciplinas ();
break;        
case 3:
        notas ();
break;        
        
case 4:
busca();
break;

case 6: break;        
default:{
	cout<<"\n\n escolha errada!! \n\n";
	cout<<"\n\n pressione uma opção válida!! \n\n";
	getch ();
}

        
        
        
                
}

}



}
