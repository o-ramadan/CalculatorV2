// -*- C++ -*-
// $Id: Expr_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_EXPRNODE_H_
#define _CS363_EXPRNODE_H_

/**
 * @class Expr_Node
 *
 * 
 */

class Expr_Node_Visitor;

class Expr_Node
{  
	public:
		///Default constructor
		Expr_Node(void);
		
		///Virtual destructor to enable polymorphic behavior
		virtual ~Expr_Node(void);
	
	
		/// Used to traverse the tree
		virtual void accept (Expr_Node_Visitor & v) = 0;
		

}; 

#endif