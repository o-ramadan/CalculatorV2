// $Id: Number_Node.cpp 

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.


#include "Number_Node.h"
#include "Expr_Node_Visitor.h"

//
// Number_Node
//

Number_Node::Number_Node ( int n)
:	n_ (n)
{
}

//
// ~Number_Node
//
Number_Node::~Number_Node (void)
{
}

//
//	getNumber
//
int Number_Node::getNumber(void) const
{
	return n_;
}

//
// accept
//
void Number_Node::accept (Expr_Node_Visitor & v)
{
	v.Visit_Number_Node(*this);
} 









