// -*- C++ -*-
// $Id: Modulus_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_MODULUSNODE_H_
#define _CS363_MODULUSNODE_H_

/**
 * @class Modulus_Command
 *
 * 
 */

#include "Binary_Expr_Node.h"
 
class Expr_Node_Visitor;
 
class Modulus_Node : public Binary_Expr_Node
{
	public:
		///Copy constructor
		Modulus_Node ();
		
		///Destructor
		~Modulus_Node (void);
				
		virtual void accept(Expr_Node_Visitor & v);
};

#endif