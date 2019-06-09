// -*- C++ -*-
// $Id: Binary_Expr_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_BINARYEXPRNODE_H_
#define _CS363_BINARYEXPRNODE_H_

/**
 * @class Binary_Expr_Node
 *
 * 
 */
 
#include "Expr_Node.h"

#define ADDSUBTRACTPRECEDENCE (1)
#define MULTIPLYDIVIDEMODULUSPRECEDENCE (2)

class Binary_Expr_Node : public Expr_Node
{
	
	public:
		/// Constructor only accessible by derived classes
		Binary_Expr_Node(int precedence);
		
		///Virtual destructor to enable polymorphic behavior
		virtual ~Binary_Expr_Node(void);
		
		///Precedence getter
		int getPrecedence(void);
		
		///Set children
		void setLeftChild( Expr_Node * left);
		void setRightChild( Expr_Node * right);
		
		///Get children
		Expr_Node * getLeftChild ( void ) const;
		Expr_Node * getRightChild ( void ) const;
		
		
		/// Used to traverse the tree
		virtual void accept (Expr_Node_Visitor & v) = 0;

	private:
		///Precedence of operator contained by the binary node
		int precedence_;

		///Left and right children of binary node
		Expr_Node * left_;
		Expr_Node * right_;

		
};

#endif 