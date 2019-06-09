// -*- C++ -*-
// $Id: driver.cpp

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================


#include <iostream>
#include <stdexcept>
#include <typeinfo>
#include <sstream>      // std::istringstream
#include <string>       // std::string
#include "Calculator.h"
#include "Expr_Tree_Builder.h"

int main()
{
	Expr_Tree_Builder builder;
	
	//Calculator object that will convert infix to postfix, and compute result of expression
	Calculator calc(builder);
	
	//Infix expression to be entered by user
	std::string infix;
	
	std::cout << "Enter expression:" << "\n";
	std::getline (std::cin,infix);
	
	while (infix.compare("QUIT") != 0)
	{	
		
		try
		{
			std::cout << "Result is "<< calc.compute (infix) << "\n";
		}
		
		catch (std::exception& e)
		{
			std::cout << "Error! Try again. ";
		} 
		
		std::cout << "Enter expression:" << "\n";
		
		std::getline (std::cin,infix);
	}
	
	return 0;
}
