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
		string _prof_nome; 
        double _nota[30];
        int _falta[10];
        double _media[10];
};

//declarando "cad" como variavel global pra usá-la em todas as funções
	Cadastro _cad;
    int _i = 0;
    
//função pra cadastrar alunos
void cad_alunos(){
       
    int e;
    
     system("cls");
     
     cout<<"\t\t CADASTRO DE ALUNOS \n\n";
     
    
            while(e != 2 ){
            		system("cls");
            		  cout<<"\t\t CADASTRO DE ALUNOS \n";		
                      cout<<"\n\n\t\t digite o nome do aluno: ";
                      cin >> _cad._nome[_i];
                  	  cout<<"\n\n\t\t deseja efetuar outro cadastro: ";
                  	  cout<<"\n\n\t\t escolha 1 - SIM / 2 - NÃO ";
                      cout<<"\t\t "; cin >> e;
                      
                      _i++;
                      if (_i == 10){
                      	cout<<"\n\n turma completada!! ";
                      	cout<<"\n presione enter para voltar ao menu principal\n ";
                      	getch ();
                      	break;
                      }
                 }
				      
     system("cls");  
}

//função pra cadastrar disciplinas
void disciplinas (){
        
        

        
        system("cls");
        
        
        		cout<<"\t\t\n\n digite a sua disciplina: \n\n";        
                cout<<"  disciplina: ";
                cin>>_cad._disciplina;
                cout<<"\t\t\n\n digite o seu nome: ";
                cin >>  _cad._prof_nome;
        
                
        system("cls");
}



// função pra cadastrar notas
void notas (){


        int e;
        int i;
        
        system("cls");
        
        for ( i = 0; i<10;i++){
                
                cout<<"\t"<<i<<" - aluno: "<<_cad._nome[i]<<"\n ";        
                
        
        }

    cout<<"\n\n\t\t escolha um aluno ";
        cin>> e;
    cout<<"\n \n";
    

           if(e == 0){
                   
                   for ( i = 0; i<3; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >> _cad._nota[i];
                           
                   }
                   
                   
           }
                
           
           
           if(e == 1){
                   
                   for (i = 3; i<6; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           
           if(e == 2){
                   
                   for (i = 6; i<9; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }        
           
           if(e == 3){
                   
                   for (i = 9; i<12; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >> _cad._nota[i];
                           
                   }
                   
                   
           }
           
           
           if(e == 4){
                   
                   for (i = 12; i<15; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           if(e == 5){
                   
                   for (i = 15; i<18; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           if(e == 6){
                   
                   for (i = 18; i<21; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           
           if(e == 7){
                   
                   for (i = 21; i<24; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           if(e == 8){
                   
                   for (i = 24; i<27; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           if(e == 9){
                   
                   for (i = 27; i<30; i++){
                           
                           cout<<"\n\t\t digite a nota: ";
                           cin >>  _cad._nota[i];
                           
                   }
                   
                   
           }
           
           
           system("cls");
           
   } 
   
   // busca por nome, ele mostra como resultado o nome e as notas do aluno
   void busca (){
 
        int i,j;           
           string nome;
           
           system("cls");
           
           cout<<"    \n\n\t\t       MENU DE BUSCAS \n\n\n";
           cout<<"\t\t  digite o nome do aluno: ";
           cin >> nome;
           
           for (i=0;i<10;i++){
           
           
           if (nome == _cad._nome[i]){
                   
                   cout<<"\n\n\t\t aluno: "<<_cad._nome[i]<<"\n";
                   
                   
                    if(i == 0){
                   j = 1;
                   for ( i = 0; i<3; i++){
                           
                           cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
                   
           getch ();        
           }
                
           
           
           if(i == 1){
                   j = 1;
                   for (i = 3; i<6; i++){
                           
                          cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                          j++;  
                   }
                   
            getch ();     
           }
           
           
           if(i == 2){
                   j = 1;
                   for (i = 6; i<9; i++){
                           
                         cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           j++;
                   }
                   
              getch ();      
           }        
           
           if(i == 3){
                   j = 1;
                   for (i = 9; i<12; i++){
                           
                          cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           j++; 
                   }
                   
              getch ();   
           }
           
           
           if(i == 4){
                   j = 1;
                   for (i = 12; i<15; i++){
                           
                           cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                            j++;
                   }
                   
              getch ();      
           }
           
           if(i == 5){
                   j = 1;
                   for (i = 15; i<18; i++){
                           
                           cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                            j++;
                   }
                   
               getch ();  
           }
           
           if(i == 6){
                   j = 1;
                   for (i = 18; i<21; i++){
                           
                          cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           j++; 
                   }
                   
             getch ();    
           }
           
           
           if(i == 7){
                   j = 1;
                   for (i = 21; i<24; i++){
                           
                          cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           j++; 
                   }
                   
              getch ();      
           }
           
           if(i == 8){
                   j = 1;
                   for (i = 24; i<27; i++){
                           
                    cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";     
                           j++; 
                   }
                   
                                
               getch ();     
           }
           
           if(i == 9){
                   j = 1;
                   for (i = 27; i<30; i++){
                           
                           cout<<"\n\n"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           j++;  
                           
                   }
                   
                 getch (); 
           }
           
                   
           
                 
           }
           
           
   }
           
           
           
           
           system ("cls");
           
   }
    //função pra atualizar o numero de faltas dos alunos
    void faltas () {
    	
     int e;
        int i;
        
        system("cls");
        cout<<"\n\n\t\t DIARIO DE FALTAS \n\n";
        
        for ( i = 0; i<10;i++){
                
                cout<<i<<"\n\t\t - aluno: "<<_cad._nome[i]<<"\n ";        
                
        
        }

    	cout<<"escolha um aluno ";
        cin>> e;
    	cout<<"\n \n";
     	
     	switch (e){
     		
     	case 0:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[0]<<" \n\n";
			cin>> _cad._falta[0];
	
		break;	
     		
     	case 1:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[1]<<" \n\n";
			cin>> _cad._falta[1];
	
		break;		
     		
     		
     	case 2:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[2]<<" \n\n";
			cin>> _cad._falta[2];
	
		break;		
     		
     		
     	case 3:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[3]<<" \n\n";
			cin>> _cad._falta[3];
	
		break;		
     		
     	case 4:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[4]<<" \n\n";
			cin>> _cad._falta[4];
	
		break;	
		
		case 5:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[5]<<" \n\n";
			cin>> _cad._falta[5];
	
		break;	
		
		case 6:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[6]<<" \n\n";
			cin>> _cad._falta[6];
	
		break;	
			
     		
     		case 7:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[7]<<" \n\n";
			cin>> _cad._falta[7];
	
		break;	
     	
		 case 8:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[8]<<" \n\n";
			cin>> _cad._falta[8];
	
		break;		
     	
		 case 9:
			cout<<"\n\n\t\t digite o numero de faltas do aluno "<<_cad._nome[9]<<" \n\n";
			cin>> _cad._falta[9];
	
		break;	
		 
		 
		 
		 	
     	}
    	
    	
    	
    	
    	
	system ("cls");
   	
    }
    //essa é um função chamada no menu de relatórios, serve para a opção: relatório individual
    //onde se mostra a situação de um aluno por vez
     void relatorio_ind (){
    	int i,e;
    	system ("cls");
    for ( i = 0; i<10;i++){
                
                cout<<i<<"\n\t\t - aluno: "<<_cad._nome[i]<<"\n ";        
                
        
        }

    	cout<<"escolha um aluno ";
        cin>> e;
    	cout<<"\n \n";
     		
    	
    	 if(e == 0){
                   
                   _cad._media[0] = 0;
                   for ( i = 0; i<3; i++){
                           
                    _cad._media[0] = _cad._media[0] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[0] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[0]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[0]/3<<"\n ";
			      
			       _cad._media[0] = _cad._media[0]/3;
			      
			      if (_cad._media[0] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[0] < 7 && _cad._media[0] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[0] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[0];
               }
               
              getch ();      
           }
                
           
           
           if(e == 1){
                   
                   _cad._media[1] = 0;
                   for (i = 3; i<6; i++){
                           
                      _cad._media[1] = _cad._media[1] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[1] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[1]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[1]/3<<"\n ";
			      
			       _cad._media[1] = _cad._media[1]/3;
			       
			      if (_cad._media[1] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[1] < 7 && _cad._media[1] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[1] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[1];
               }
               
              getch ();      
           }  
                   
                   
           
           
       
       
           if(e == 2){
                   _cad._media[2] = 0;
                   for (i = 6; i<9; i++){
                           
                           _cad._media[2] = _cad._media[2] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[2] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[2]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[2]/3<<"\n ";
			      
			       _cad._media[2] = _cad._media[2]/3;
			       
			      if (_cad._media[2] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[2] < 7 && _cad._media[2] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[2] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[2];
               }
               
              getch ();      
           }
                   
                   
                   
           
           if(e == 3){
           	
                   _cad._media[3] = 0;
                   for (i = 9; i<12; i++){
                          _cad._media[3] = _cad._media[3] + _cad._nota[i]; 
                           
                   }
                   
                   if(_cad._falta[3] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[3]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[3]/3<<"\n ";
			      
			       _cad._media[3] = _cad._media[3]/3;
			       
			      if (_cad._media[3] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[3] < 7 && _cad._media[3] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[3] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[3];
               }
                       
                   
                   
            getch ();        
           }
           
           
           if(e == 4){
                   
                   _cad._media[4] = 0;
                   for (i = 12; i<15; i++){
                           
                       _cad._media[4] = _cad._media[4] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[4] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[4]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[4]/3<<"\n ";
			      
			       _cad._media[4] = _cad._media[4]/3;
			       
			      if (_cad._media[4] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[4] < 7 && _cad._media[4] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[4] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[4];
               }
               
                   
              getch ();      
           }
           
           if(e == 5){
                    _cad._media[5] = 0;
                   for (i = 15; i<18; i++){
                           
                        _cad._media[5] = _cad._media[5] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[5] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[5]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[5]/3<<"\n ";
			      
			       _cad._media[5] = _cad._media[5]/3;
			       
			      if (_cad._media[5] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[5] < 7 && _cad._media[5] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[5] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[5];
               }
                   
             getch ();       
                   
           }
           
           if(e == 6){
           	
                   _cad._media[6] = 0;
                   for (i = 18; i<21; i++){
                           
                     _cad._media[6] = _cad._media[6] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[6] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[6]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[6]/3<<"\n ";
			      
			       _cad._media[6] = _cad._media[6]/3;
			       
			      if (_cad._media[6] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[6] < 7 && _cad._media[6] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[6] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[6];
               }
                   
                   
                   
             getch ();       
           }
           
           
           if(e == 7){
                   
                   _cad._media[7] = 0;
                   for (i = 21; i<24; i++){
                           
                            _cad._media[7] = _cad._media[7] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[7] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[7]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[7]/3<<"\n ";
			      
			       _cad._media[7] = _cad._media[7]/3;
			       
			      if (_cad._media[7] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[7] < 7 && _cad._media[7] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[7] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[7];
               }
                   
                   
                   
            getch ();        
           }
           
           if(e == 8){
                   
                   _cad._media[8] = 0;
                   for (i = 24; i<27; i++){
                           
                            _cad._media[8] = _cad._media[8] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[8] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[8]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[8]/3<<"\n ";
			      
			       _cad._media[8] = _cad._media[8]/3;
			       
			      if (_cad._media[8] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[8] < 7 && _cad._media[8] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[8] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[8];
               }
                   
                   
                   
             getch ();       
           }
           
           if(e == 9){
           	
                   _cad._media[9] = 0;
                   for (i = 27; i<30; i++){
                           
                            _cad._media[9] = _cad._media[9] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[9] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[9]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[9]/3<<"\n ";
			      
			       _cad._media[5] = _cad._media[9]/3;
			       
			      if (_cad._media[9] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[9] < 7 && _cad._media[9] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! ";
			      	
			      }
			      
			     if (_cad._media[9] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! ";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[9];
               }
                   
                   
                   
              getch ();     
           }
           
           	
   	
    	 
    	system("cls");
    	 
    }
    
//e a outra função chamada na opção relatorios, esse mostra o quadro geral de todos os alunos de um só vez
void relatorio_geral (){
	
	int i,j;
	
	system("cls");
	cout<<"\t\t\n\n RESUMO GERAL \n\n ";
	cout<<"\n\n professor: "<<_cad._prof_nome<<"\n";
	cout<<"\n\n disciplina: "<<_cad._disciplina<<" \n\n";
	
	
 
                   
                   _cad._media[0] = 0;
                   for ( i = 0; i<3; i++){
                           
                    _cad._media[0] = _cad._media[0] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[0] < 15){
                   
               			 j = 1;
                   for ( i = 0; i<3; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
               	
                  		
            
               
			      	cout<<"\t\t aluno: "<<_cad._nome[0]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[0]/3<<"\n ";
			      
			       _cad._media[0] = _cad._media[0]/3;
			      
			      if (_cad._media[0] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[0] < 7 && _cad._media[0] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[0] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[0];
               }
               
               
           
                   
                   _cad._media[1] = 0;
                   for (i = 3; i<6; i++){
                           
                      _cad._media[1] = _cad._media[1] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[1] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[1]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[1]/3<<"\n ";
			      	
			      	
			      	 j = 1;
                   for ( i = 3; i<6; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      	
			      	
			      	
			       _cad._media[1] = _cad._media[1]/3;
			       
			      if (_cad._media[1] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[1] < 7 && _cad._media[1] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[1] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas ";
               		cout<<"faltas "<<_cad._falta[1];
               }
               
                
             
                    
           
                   _cad._media[2] = 0;
                   for (i = 6; i<9; i++){
                           
                           _cad._media[2] = _cad._media[2] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[2] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[2]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[2]/3<<"\n ";
			      	
			      	 j = 1;
                   for ( i = 6; i<9; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      	
			      
			       _cad._media[2] = _cad._media[2]/3;
			       
			      if (_cad._media[2] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[2] < 7 && _cad._media[2] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[2] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas \n\n";
               		cout<<"faltas "<<_cad._falta[2];
               }
               
     
    
           	
                   _cad._media[3] = 0;
                   for (i = 9; i<12; i++){
                          _cad._media[3] = _cad._media[3] + _cad._nota[i]; 
                           
                   }
                   
                   if(_cad._falta[3] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[3]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[3]/3<<"\n ";
			      	
			      	 j = 1;
                   for ( i = 9; i<12; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      	
			      	
			      
			       _cad._media[3] = _cad._media[3]/3;
			       
			      if (_cad._media[3] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[3] < 7 && _cad._media[3] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[3] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas \n\n";
               		cout<<"faltas "<<_cad._falta[3];
               }
                       
                   
        
        
                   
                   _cad._media[4] = 0;
                   for (i = 12; i<15; i++){
                           
                       _cad._media[4] = _cad._media[4] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[4] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[4]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[4]/3<<"\n ";
			      	
			      	 j = 1;
                   for ( i = 12; i<15; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      	
			      
			       _cad._media[4] = _cad._media[4]/3;
			       
			      if (_cad._media[4] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[4] < 7 && _cad._media[4] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[4] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas \n\n ";
               		cout<<"faltas "<<_cad._falta[4];
               }
               
                   
                 
           
           
           
                    _cad._media[5] = 0;
                   for (i = 15; i<18; i++){
                           
                        _cad._media[5] = _cad._media[5] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[5] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[5]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[5]/3<<"\n ";
			      	
			      	 j = 1;
                   for ( i = 15; i<18; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      
			       _cad._media[5] = _cad._media[5]/3;
			       
			      if (_cad._media[5] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[5] < 7 && _cad._media[5] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[5] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas \n\n";
               		cout<<"faltas "<<_cad._falta[5];
               }
                   
                  
    
           	
                   _cad._media[6] = 0;
                   for (i = 18; i<21; i++){
                           
                     _cad._media[6] = _cad._media[6] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[6] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[6]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[6]/3<<"\n ";
			      	
			      	 j = 1;
                   for ( i = 18; i<21; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      	
			      	
			      	
			      
			       _cad._media[6] = _cad._media[6]/3;
			       
			      if (_cad._media[6] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! ";
			      	
			      }
			      if (_cad._media[6] < 7 && _cad._media[6] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[6] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas \n\n";
               		cout<<"faltas "<<_cad._falta[6];
               }
                   
                   
                
           
                
                   _cad._media[7] = 0;
                   for (i = 21; i<24; i++){
                           
                            _cad._media[7] = _cad._media[7] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[7] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[7]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[7]/3<<"\n ";
			      	
			      	 j = 1;
                   for ( i = 21; i<24; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      	
			      	
			      	
			      
			       _cad._media[7] = _cad._media[7]/3;
			       
			      if (_cad._media[7] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[7] < 7 && _cad._media[7] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[7] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas \n\n";
               		cout<<"faltas "<<_cad._falta[7];
               }
                   
                     
           
           
           
                   
                   _cad._media[8] = 0;
                   for (i = 24; i<27; i++){
                           
                            _cad._media[8] = _cad._media[8] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[8] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[8]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[8]/3<<"\n ";
			      	
			      	 j = 1;
                   for ( i = 24; i<27; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      	
			      
			       _cad._media[8] = _cad._media[8]/3;
			       
			      if (_cad._media[8] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[8] < 7 && _cad._media[8] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[8] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas \n\n";
               		cout<<"faltas "<<_cad._falta[8];
               }
                   
                   
            
           	
                   _cad._media[9] = 0;
                   for (i = 27; i<30; i++){
                           
                            _cad._media[9] = _cad._media[9] + _cad._nota[i]; 
                    
                           
                   }
                   
                   if(_cad._falta[9] < 15){
                   
               
			      	cout<<"\t\t aluno: "<<_cad._nome[9]<<"\n ";
			      	cout<<"\t\t media: "<<_cad._media[9]/3<<"\n ";
			      	
			      	 j = 1;
                   for ( i = 27; i<30; i++){
                           
                           cout<<"\n\t\t"<<j<<"  nota: "<<_cad._nota[i]<<"\n";
                           
                           j++;
                   }
			      	
			      
			       _cad._media[5] = _cad._media[9]/3;
			       
			      if (_cad._media[9] >= 7){
			      	cout<<"\n\t\t aluno aprovado!! \n\n";
			      	
			      }
			      if (_cad._media[9] < 7 && _cad._media[9] >= 4){
			      	cout<<"\n\t\t aluno de prova final!! \n\n";
			      	
			      }
			      
			     if (_cad._media[9] < 4){
			      	cout<<"\n\t\t aluno de reprovado!! \n\n";
			      	
			      }
				 
				
			      
               }
               else{
               	
               		cout<<"\n\t\t aluno reprovado por faltas \n\n";
               		cout<<"faltas "<<_cad._falta[9];
               }
                   
                   
				   
		 getch ();    
    	system("cls");
    	
}
  
    
    //e essa é a função de relatórios, onde mostra as funções citadas acima
    void relatorios (){
    	
    	int e;
    	
    system("cls");
		
    	cout<<"\n\n\t\t MENU DE RELATORIOS ";
		cout<<"\n\n\t\t 1 - relatorio individual \n";
		cout<<"\t\t 2 - relatorio geral \n";
		cout<<"\n\n\t\t escolha uma opção: "; cin>> e; cout<<"\n";
	
	switch (e) {
		
	case 1:
	     relatorio_ind ();
	break;	
	case 2: 
	relatorio_geral ();
	break;	
		
			
	}
	
	
	

    	system("cls");
    }
    
   
         

        

//Programa principal.
int main (){
         
         
int e;

        while(e!=7){
        
        cout<<"\t\t SIA - SISTEMA INTEGRADO ACADEMICO \n\n\n";
        
        

        cout<<"\t\t 1 - cadastrar alunos \n";
        cout<<"\t\t 2 - cadastrar disciplina \n";
        cout<<"\t\t 3 - digitar notas \n";
        cout<<"\t\t 4 - buscar \n";
        cout<<"\t\t 5 - atualizar faltas \n";
        cout<<"\t\t 6 - relatorios \n";
        cout<<"\t\t 7 - sair ";
        cout<<"\n\n\t\t escolha a opcao desejada: \n";
        
       cout<<"\t\t "; cin>> e;




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

case 5:
       faltas (); 
break;        
    
case 6: 
relatorios ();
break;

case 7: break;
        
default:{
        cout<<"\n\n escolha errada!! \n\n";
        cout<<"\n\n pressione uma opção válida!! \n\n";
        getch ();
        system("cls");
}

                
                
}

}



}
