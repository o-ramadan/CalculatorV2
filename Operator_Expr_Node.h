// -*- C++ -*-
// $Id: Operator_Expr_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_OPERATOREXPRNODE_H_
#define _CS363_OPERATOREXPRNODE_H_

/**
 * @class Operator_Expr_Node
 *
 * 
 */

#include "Expr_Node.h"
#include "Expr_Node_Visitor.h" 

class Expr_Node_Visitor;

class Operator_Expr_Node : public Expr_Node
{
	public:
		Operator_Expr_Node (void);
		
		///Destructor
		virtual ~Operator_Expr_Node (void);
		
		/// Used to traverse the tree
		virtual void accept (Expr_Node_Visitor & v) = 0;

};

#endif	