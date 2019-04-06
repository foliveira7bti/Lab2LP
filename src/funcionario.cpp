#include <iostream>
#include <string>
#include <ostream>
#include "funcionario.h"

/*
	Construtores
*/

Funcionario::Funcionario()
{
	//Construtor padrão que não faz nada
	totalFuncionarios++;
}

Funcionario::Funcionario(std::string nome_, double salario_)
{
	nome = nome_;
	salario = salario_;
	totalFuncionarios++;
}

Funcionario::~Funcionario()
{
	//Destrutor
}

/*
	Getters and Setters
*/


std::string Funcionario::getNome()
{
	return nome;
}

void Funcionario::setNome(std::string nome_)
{
	nome = nome_;
}

double Funcionario::getSalario()
{
	return salario;
}

void Funcionario::setSalario(double salario_)
{
	salario = salario_;
}

/*
	Sobrecargas e outros métodos
*/

//Método de Aumento. Recebe um valor e multiplica pelo salário para realizar o aumento.
//Por falta de checagens, recomenda-se utilizar valores decimais como 1.2 para ter, por exemplo
//um aumento de 20%
void Funcionario::setAumento(double aumento_)
{
	salario = salario * aumento_;
}

std::ostream& operator<< (std::ostream &o, Funcionario func){
	o << func.getNome() << " " << func.getSalario();
	return o;
}

/*
	Metodos Estáticos
*/

int Funcionario::getTotalFuncionarios()
{
	return totalFuncionarios;
}
