#include <iostream>
#include <locale.h>
#include <iomanip>
#include <windows.h>


using namespace std;

struct infoMaterias
{
	int fezNP2;
	bool passou;
	float NP1; // nota parcial 1
	float NP2; // nota parcial 2
	float NP3; // nota parcial 3
	float NPA; // nota parcial sem NP3

};


void PassouMateria(infoMaterias &aluno)
{
	aluno.passou = false;
	if (aluno.fezNP2 == 2)
	{
		aluno.NP2 = 120 - aluno.NP1; //quanto deve tirar na NP2 para que pegue a média
	}
	else if(aluno.fezNP2 == 1)
	{
		//se ja fez a NP2, atribuir a NP3 quanto ele deve tirar para que pegue média e passe
		aluno.NPA = (aluno.NP1 + aluno.NP2) / 2;
		aluno.NP3 = 100 - aluno.NPA;
		if(aluno.NPA >= 60)
		{
			aluno.passou = true;
		}
	}
}


int main()
{

	setlocale(LC_ALL, "PORTUGUESE");
	int disciplina;
	infoMaterias aluno ={};

	
	cout << "============================================================" << endl;
    cout << "       Programa Auxiliar a Estudantes de Engenharia " << endl;
    cout << "                      - INATEL -                  " << endl;
    cout << "============================================================" << endl << endl;

    // Menu de seleção das matérias
    cout << "   ----------------- DISCIPLINAS:--------------------------" << endl;
    cout << "  ||     (1) Algoritmos e Estruturas de Dados            ||" << endl;
    cout << "  ||     (2) Álgebra e Geometria Analítica               ||"<< endl;
    cout << "  ||     (3) Circuitos Elétricos em Corrente Contínua    ||" << endl;
    cout << "  ||     (4) Matemática Aplicada à Engenharia            ||" << endl;
    cout << "  ||     (5) Química e Ciência dos Materiais             ||" << endl;
	cout << "  ---------------------------------------------------------" << endl<<endl;

    cout << "Informe a disciplina que deseja calcular sua nota: ";
	cin >> disciplina; // selecionar materia

setlocale(LC_ALL, "PORTUGUESE");

	infoMaterias aluno;

	cout << "Programa auxiliar à estudantes de Engenharia - Inatel" << endl
		 << endl;

	// Menu de seleção das materias
	cout << "Disciplinas" << endl;
	cout << "(1) Algoritmos e Estrutura de Dados | " << endl;
	cout << "(2) Álgebra e Geometria Analítica " << endl;
	cout << "(3) Circuitos Elétricos em Corrente Contínua" << endl;
	cout << "(4) Matemática Aplicada à Engenharia" << endl;
	cout << "(5) Química e Ciência dos Materiais" << endl
		 << endl;

	cout << "Qual sua opção? " << endl;
	cin >> aluno.disciplina; // selecionar materia

	if (disciplina == 1)
	{
		system("cls");
		cout << "-------- Algoritmos e Estrutura de Dados -----------" << endl<<endl;

		
	}
	else if (disciplina == 2)
	{
		system("cls");
		cout << "-------- Álgebra e Geometria Analítica --------" << endl << endl;

	}
	else if (disciplina == 3)
	{
		system("cls");
		cout << "-------- Circuitos Elétricos em Corrente Contínua --------" << endl << endl;

	
	}
	else if (disciplina == 4)
	{
		system("cls");
		cout << "-------- Matemática Aplicada à Engenharia --------" << endl<<endl;

		
	}
	else if (disciplina == 5)
	{
		system("cls");
		cout << "-------- Química e Ciência dos Materiais --------" << endl <<endl;
			 

	}
	
	else
	{
		cout << "" << endl;
		cout << "Opção escolhida inválida. Digite novamente:" << endl;
		cin >> disciplina;
	}

	cout << " --- Você já concluiu a NP2? ---" << endl;
	cout << " ||         (1)Sim            ||"<< endl;
	cout << " ||         (2)Não            ||"<< endl;
	cout << " -------------------------------"<< endl<<endl;;
	cout << "Informe a opção escolhida: ";
	
	cin >> aluno.fezNP2;

    system("cls");
	cout << "Insira sua nota da NP1: ";
	cin >> aluno.NP1;

	

	if(aluno.fezNP2==2){
		system("cls");
		PassouMateria(aluno);
		if(aluno.NP2>100){
			cout<<"Você precisa de "<<aluno.NP2<<"Pontos para atingir a média necessária"<<endl;
			cout<<" Será necassário fazer a NP3"<<endl;
		}
		else{
			cout<<"você precisa tirar "<<aluno.NP2<<" Pontos para atingir a média necessária "<<endl;
		}

	}
	if(aluno.fezNP2==1){
		cout << "Insira sua nota da NP2: ";
		cin >> aluno.NP2;
		PassouMateria(aluno);
		if(aluno.passou==true){
			system("cls");
			cout<<"Nota final: "<<aluno.NPA<<endl;
			cout<<" PARÁBENS!!! VOCÊ FOI APROVADO!!! "<<endl;
		}
		else{
			system("cls");
			cout<<"Infelizmente você ficará de NP3...  "<<endl;
			cout<<" Para ser aprovado, você precisa tirar "<<aluno.NP3<<" Pontos ou mais na NP3."<<endl;
		}

	}
	

	return 0;
}