// -*- C++ -*-
// $Id: Subtract_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_SUBTRACTNODE_H_
#define _CS363_SUBTRACTNODE_H_

/**
 * @class Subtract_Node
 *
 * 
 */

#include "Binary_Expr_Node.h"
 
class Expr_Node_Visitor;
 
class Subtract_Node : public Binary_Expr_Node
{
	public:
		///Copy constructor
		Subtract_Node ();
		
		///Destructor
		~Subtract_Node (void);
		
		virtual void accept(Expr_Node_Visitor & v);
		
};

#endif