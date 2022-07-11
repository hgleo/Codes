#include <iostream> 
#include <string> 
#include <locale.h> 
#include <stdlib.h> 
int qtde; 
#define TAM qtde 
char resposta; 
using namespace std; 
/* =================================== Estruturas 
===================================================*/ 
typedef struct 
{ 
 int ano; 
}Tdata; 
typedef struct 
{ 
 string nome_banda; 
 string ativa; 
 string musica_favorita; 
 string genero; 
 Tdata ano_lanc; 
}Tmusica; 
/* 
========================================================================================= =========*/ 
/* 
========================================================================================= =========*/ 
/* Funções do Programa */ 
 void cad_pos(Tmusica c[]) 
 { 
 for (int pos = 0; pos < TAM; pos++ ) 
 { 
 cin.ignore(); 
 cout << "Nome da Banda/Artista: "; 
 getline(cin, c[pos].nome_banda); 
 cout << "Nome da faixa: "; 
 getline(cin, c[pos].musica_favorita); 
 cout << "Qual ano que essa música foi lançada: "; 
 cin >> c[pos].ano_lanc.ano; 
 while (c[pos].ano_lanc.ano < 0 || c[pos].ano_lanc.ano > 2021)  { 
 cout << "Ano inválido, insira novamente: "; 
 cin >> c[pos].ano_lanc.ano; 
 } 
 cout << "Qual gênero da música: "; 
 cin.ignore(); 
 getline(cin, c[pos].genero); 
 cout << "Essa Banda/Artista ainda está na ativa? "; 
 getline(cin, c[pos].ativa); 
 cout << endl; 
 system("cls"); 
 } 
 } 
 void exibe_pos(Tmusica c[]) 
 { 
 for (int pos = 0; pos < TAM; pos++ ) 
 { 
 cout << endl << pos + 1 << " Posição " << endl;
 cout << endl << "Nome da Banda/Artista: " << c[pos].nome_banda;  cout << endl << "Nome da música favorita: " << c[pos].musica_favorita;  cout << endl << "Qual ano que essa música foi lançada: " << c[pos].ano_lanc. ano; 
 cout << endl << "Qual gênero da música: " << c[pos].genero;  cout << endl << "Essa Banda/Artista ainda está na ativa? " << c[pos].ativa << endl; 
 } 
 } 
 void exclui(Tmusica c[], int pos) 
 { 
 c[pos].nome_banda = " "; 
 c[pos].musica_favorita = " "; 
 c[pos].ano_lanc.ano = 0; 
 c[pos].genero = " "; 
 c[pos].ativa = " " ; 
 } 
 void edita(Tmusica c[], int pos) 
 { 
 cout << "Como estava anteriormente: " << endl; 
 cout << endl << "Nome da Banda/Artista: " << c[pos].nome_banda;  cout << endl << "Nome da música favorita: " << c[pos].musica_favorita;  cout << endl << "Qual ano que essa música foi lançada: " << c[pos].ano_lanc.ano;  cout << endl << "Qual gênero da música: " << c[pos].genero;  cout << endl << "Essa Banda/Artista ainda está na ativa? " << c[pos].ativa <<  endl; 
 cout << "E como vai ficar: "; 
 cout << endl << " Posição " << pos + 1 << endl; 
 cout << endl << "Nome da Banda/Artista: "; 
 cin.ignore(); 
 getline(cin, c[pos].nome_banda); 
 cout << "Nome da música favorita: "; 
 getline(cin, c[pos].musica_favorita); 
 cout << "Qual ano que essa música foi lançada: "; 
 cin >> c[pos].ano_lanc.ano; 
 cout << "Qual gênero da música: "; 
 cin.ignore(); 
 getline(cin, c[pos].genero); 
 cout << "Essa Banda/Artista ainda está na ativa? "; 
 getline(cin, c[pos].ativa); 
 cout << endl; 
 } 
 void encontra(Tmusica c[]) 
 { 
 string nomemusica; 
 int verifica = 0; 
 system("cls"); 
 cout << "Digite o nome da música: "; 
 cin.ignore(); 
 getline(cin, nomemusica); 
 for (int pos = 0; pos < TAM; pos++) 
 { 
 if(nomemusica == c[pos].musica_favorita) 
 {
 cout << endl << pos + 1 << " Posição " << endl; 
 cout << endl << "Nome da Banda/Artista: " << c[pos].nome_banda;  cout << endl << "Nome da música favorita: " << c[pos].musica_favorita;  cout << endl << "Qual ano que essa música foi lançada: " << c[pos]. ano_lanc.ano; 
 cout << endl << "Qual gênero da música: " << c[pos].genero;  cout << endl << "Essa Banda/Artista ainda está na ativa? " << c[pos]. ativa << endl; 
 verifica++; 
 } 
 } 
 if(verifica == 0) 
 { 
 cout << "Música não encontrada. "; 
 } 
 } 
/* ====================================== Fim das Funções 
===========================================*/ 
/*======================================================================================= ============*/ 
int main() 
{ 
 setlocale(LC_ALL,""); 
 int opcoes; 
 int editar; 
 int exclui_pos; 
 cout << "Bem vindo ao CadastraSonzeras. " << endl; 
 cout << "Digite o total de músicas que deseja adicionar: "; 
 cin >> qtde; 
 system("cls"); 
 Tmusica msc[TAM]; 
 cad_pos(msc); 
 do 
 { 
 cout << endl << "Deseja abrir o menu de opções? (S/N) "; 
 cin >> resposta; 
 if ( resposta == 's' || resposta == 'S') 
 { 
 cout << endl << "O que voce deseja fazer?"; 
 cout << endl << "Opção 1 - Exibir todos os itens cadastrados";  cout << endl << "Opção 2 - Excluir um dado cadastrado";  cout << endl << "Opção 3 - Localizar algum item cadastrado";  cout << endl << "Opção 4 - Editar tudo de algum item cadastrado";  cout << endl << "Opção 5 - Finalizar" << endl; 
 cin >> opcoes; 
 system("cls"); 
 while ((opcoes <= 0) || (opcoes > 5)) 
 { 
 cout << endl << "Opção inválida, insira novamente: ";  cin >> opcoes; 
 } 
 if ( opcoes == 1) 
 { 
 exibe_pos(msc); 
 } 
 else if ( opcoes == 2) 
 {
 exibe_pos(msc); 
 cout << endl << "Insira a posição deseja excluir: ";  cin >> exclui_pos; 
 while ((exclui_pos <= 0) || (exclui_pos > TAM)) 
 { 
 cout << endl << "Posição inválida, insira novamente: ";  cin >> exclui_pos; 
 } 
 exclui_pos = exclui_pos - 1; 
 exclui(msc, exclui_pos); 
 } 
 else if (opcoes == 3) 
 { 
 encontra(msc); 
 } 
 else if (opcoes == 4) 
 { 
 cout << endl << "Insira a posição que deseja cadastrar que deseja editar: "; 
 cin >> editar; 
 while ((editar <= 0) || (editar > TAM)) 
 { 
 cout << endl << "Posição inválida, insira novamente: ";  cin >> editar; 
 } 
 editar = editar - 1; 
 edita(msc, editar); 
 } 
 else if (opcoes == 5) 
 { 
 resposta == 's'; 
 } 
 } 
 else resposta == 'n'; 
 }while(resposta == 's'); 
 return 0; 
}
