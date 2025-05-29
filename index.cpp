#include <iostream>
#include <locale.h>
#include <iomanip>


using namespace std;

struct infoMaterias
{
	int fezNP2;
	bool passou = false;
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
		if(aluno.NPA >= 120)
		{
			aluno.passou = true;
		}
	}
}


int main()
{

	setlocale(LC_ALL, "PORTUGUESE");
	int disciplina;
	infoMaterias aluno = {};

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
	cin >> disciplina; // selecionar materia

	if (disciplina == 1)
	{
		cout << "" << endl;
		cout << "Algoritimos e Estrutura de Dados |" << endl
			 << endl;

		
	}
	else if (disciplina == 2)
	{
		cout << "" << endl;
		cout << "Álgebra e Geometria Analítica" << endl << endl;

	}
	else if (disciplina == 3)
	{
		cout << "" << endl;
		cout << "Circuitos Elétricos em Corrente Contínua" << endl << endl;

	
	}
	else if (disciplina == 4)
	{
		cout << "" << endl;
		cout << "Matemática Aplicada à Engenharia" << endl
			 << endl;

		
	}
	else if (disciplina == 5)
	{
		cout << "" << endl;
		cout << "Química e Ciência dos Materiais" << endl
			 << endl;

	}
	
	else
	{
		cout << "" << endl;
		cout << "Opção inválida. Digite novamente." << endl;
		cin >> disciplina;
	}

	cout << "Você já concluiu a NP2? Digite 1 para sim e 2 para não" << endl;
		cin >> aluno.fezNP2;

		
		cout << "Insira sua nota da NP1: ";
		cin >> aluno.NP1;

		PassouMateria(aluno);

	return 0;
}