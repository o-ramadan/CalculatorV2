// -*- C++ -*-
// $Id: Add_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_ADDNODE_H_
#define _CS363_ADDNODE_H_

/**
 * @class Add_Node
 *
 * 
 */

#include "Binary_Expr_Node.h"

class Expr_Node_Visitor;

class Add_Node : public Binary_Expr_Node
{
	public:
		///Copy constructor
		Add_Node (void);
		
		///Destructor
		~Add_Node (void);
		
		virtual void accept(Expr_Node_Visitor & v);

};

#endif