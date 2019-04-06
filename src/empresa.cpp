#include <iostream>
#include <string>
#include "empresa.h"

/*
	Construtores
*/

Empresa::Empresa()
{
	//Construtor padrão que não faz nada
	totalEmpresas++;
}

Empresa::Empresa(std::string nomeEmp_, std::string cnpj_)
{
	nomeEmp = nomeEmp_;
	cnpj = cnpj_;
	totalEmpresas++;
}

Empresa::~Empresa()
{
	//Destrutor
}

/*
	Metodos Publicos
*/

void Empresa::addFuncionario(Funcionario &funcionario_)
{
	vectorFuncionarios.insert(vectorFuncionarios.begin(), funcionario_);
}

void Empresa::listarFuncionarios()
{
	for(unsigned int i=0;i<vectorFuncionarios.size();i++)
	{
		std::cout << vectorFuncionarios[i] << std::endl; 
	}
}

void Empresa::aplicarAumento(double aumento_)
{
	for (unsigned int i=0; i<vectorFuncionarios.size();i++)
	{
		vectorFuncionarios[i].setAumento(aumento_);
	}	
}

/*
	Métodos Estáticos ou relacionados a atributos estáticos
*/
int Empresa::getTotalEmpresas()
{
	return totalEmpresas;
}