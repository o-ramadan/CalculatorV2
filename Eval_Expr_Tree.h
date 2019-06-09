// -*- C++ -*-
// $Id: Eval_Expr_Tree.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_EVALEXPRTREE_H_
#define _CS363_EVALEXPRTREE_H_

/**
 * @class Eval_Expr_Tree
 *
 * 
 */

#include "Expr_Node_Visitor.h"
#include "Stack.h"

class Eval_Expr_Tree : public Expr_Node_Visitor 
{
	public:
		Eval_Expr_Tree (void);
		
		virtual ~Eval_Expr_Tree (void);
		
		// Methods for visiting concrete nodes
		virtual void Visit_Addition_Node (const Add_Node & node);
		virtual void Visit_Subtraction_Node (const Subtract_Node & node);
		virtual void Visit_Multiplication_Node (const Multiply_Node & node);
		virtual void Visit_Division_Node (const Divide_Node & node);
		virtual void Visit_Modulus_Node (const Modulus_Node & node);
		virtual void Visit_Number_Node (const Number_Node & node);
		
		int getResult (void) const;
		
	private:
		int result_;		
		
		//Accumulated numbers as a result of recursion (to be used in arithmetic calculation)
		Stack <int> numStack_;
};

#endif