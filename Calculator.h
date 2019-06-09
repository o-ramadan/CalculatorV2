// -*- C++ -*-
// $Id: Calculator.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_CALCULATOR_H_
#define _CS363_CALCULATOR_H_

/**
 * @class Calculator
 *
 * 
 */

#include "Array.h"
#include "Stack.h"
#include "Expr_Builder.h"
#include <sstream>     			 // std::istringstream
#include <string>       		// std::string
#include <cstring> 				// size_t definition
#include "Math_Expr.h"
#include <exception>
#include <memory>
 
class Calculator
{
	public:
		
		///Copy constructor
		Calculator (Expr_Builder & builder);
		
		///Destructor
		~Calculator (void);
		
		bool parse_expr (const std::string & infix);
		
		int compute(const std::string & infix);
		
		std::string deleteTrailingSpaces( const std::string & ) const;
		
		void detect_vars ( const std::string & );
		
	private:
		Expr_Builder & builder_;
		
		//Map for storing variable values
		std::map < std::string, int >  variables;
		
};
#endif