// -*- C++ -*-
// $Id: Divide_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_DIVIDENODE_H_
#define _CS363_DIVIDENODE_H_

/**
 * @class Divide_Node
 *
 * 
 */

#include "Binary_Expr_Node.h"

class Expr_Node_Visitor;
 
class Divide_Node : public Binary_Expr_Node
{
	public:
		///Copy constructor
		Divide_Node ();
		
		///Destructor
		~Divide_Node (void);
		
		virtual void accept(Expr_Node_Visitor & v);
	
};

#endif