// $Id: Unary_Expr_Node.cpp 

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Unary_Expr_Node
//

#include "Unary_Expr_Node.h"


//
// Unary_Expr_Node (void)
//
Unary_Expr_Node::Unary_Expr_Node (void)
{
}

//
// ~Unary_Expr_Node
//
Unary_Expr_Node::~Unary_Expr_Node (void)
{
}

//
// eval
//
int Unary_Expr_Node::eval (void)
{
	if (this->child_) 
		return this->child_->eval ();
} 