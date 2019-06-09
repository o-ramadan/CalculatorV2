// -*- C++ -*-
// $Id: Multiply_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_MULTIPLYNODE_H_
#define _CS363_MULTIPLYNODE_H_

/**
 * @class Multiply_Node
 *
 * 
 */

#include "Binary_Expr_Node.h"
 
class Expr_Node_Visitor;
 
class Multiply_Node : public Binary_Expr_Node
{
	public:
		///Copy constructor
		Multiply_Node ();
		
		///Destructor
		~Multiply_Node (void);
		
		virtual void accept(Expr_Node_Visitor & v);
		

};

#endif