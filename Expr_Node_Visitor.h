// -*- C++ -*-
// $Id: Expr_Node_Visitor.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_EXPRNODEVISITOR_H_
#define _CS363_EXPRNODEVISITOR_H_

/**
 * @class Expr_Node_Visitor
 *
 * 
 */
 
#include "Add_Node.h" 
#include "Subtract_Node.h" 
#include "Multiply_Node.h" 
#include "Divide_Node.h" 
#include "Modulus_Node.h" 
#include "Number_Node.h" 


class Expr_Node_Visitor
{
	protected:
		 
	
	public:
		Expr_Node_Visitor (void);
		virtual ~Expr_Node_Visitor (void);
		
		// Methods for visiting concrete nodes
		virtual void Visit_Addition_Node (const Add_Node & node) = 0;		
		
		virtual void Visit_Subtraction_Node (const Subtract_Node & node) = 0;
		
		virtual void Visit_Multiplication_Node (const Multiply_Node & node) = 0;
		
		virtual void Visit_Division_Node (const Divide_Node & node) = 0;
		
		virtual void Visit_Modulus_Node (const Modulus_Node & node) = 0;
		
		virtual void Visit_Number_Node (const Number_Node & node) = 0;

};

#endif