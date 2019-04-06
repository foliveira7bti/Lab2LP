#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
#include <vector>
#include "funcionario.h"

class Empresa
{
public:
	//Atributos Publicos
	std::string nomeEmp;
	std::string cnpj;

	std::vector<Funcionario> vectorFuncionarios;


	//Construtores e Destrutores Publicos
	Empresa();
	Empresa(std::string nomeEmp_, std::string cnpj_);
	~Empresa();

	//Metodos Publicos

	void addFuncionario(Funcionario &funcionario_);
	void listarFuncionarios();
	void aplicarAumento(double aumento_);

	//Atributos ou métodos estaticos
	static int totalEmpresas;
	static int getTotalEmpresas();
};

#endif