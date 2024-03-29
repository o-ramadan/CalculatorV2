// -*- C++ -*-
// $Id: Expr_Builder.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_EXPRBUILDER_H_
#define _CS363_EXPRBUILDER_H_

/**
 * @class Expr_Builder
 *
 * 
 */
 
#include "Math_Expr.h" 
#include <sstream> 
#include <map>
 class Expr_Builder 
{
	protected:
		Expr_Builder(void);
		virtual ~Expr_Builder(void);
	
	public:
	
		virtual void start_expression (void) = 0;
		virtual void end_expression (void) = 0;
		
		virtual void build_number (int n) = 0;
		virtual void build_add_operator (void) = 0;
		virtual void build_subtract_operator (void) = 0;
		virtual void build_multiply_operator (void) = 0;
		virtual void build_divide_operator (void) = 0;
		virtual void build_modulus_operator (void) = 0;

		virtual void build_open_parenthesis (std::istringstream& s) = 0;
		virtual void build_close_parenthesis (void) = 0;
		
		virtual void build_variable(std::string var, std::map < std::string, int > variables) = 0;
		
		// get the current expression
		virtual Math_Expr * get_expression (void) = 0;
		

};

#endif