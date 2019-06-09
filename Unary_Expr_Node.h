// -*- C++ -*-
// $Id: Unary_Expr_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_UNARYEXPRNODE_H_
#define _CS363_UNARYEXPRNODE_H_

/**
 * @class Unary_Expr_Node
 *
 * 
 */


class Unary_Expr_Node : public Expr_Node 
{
	public:
		Unary_Expr_Node (void);
		
		virtual ~Unary_Expr_Node (void);
		
		virtual int eval (void);
		
	protected:
		Expr_Node * child_;
};

#endif