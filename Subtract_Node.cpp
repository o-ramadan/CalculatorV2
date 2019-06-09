// $Id: Subtract_Node.cpp 

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Subtract_Node
//

#include "Subtract_Node.h"
#include "Expr_Node_Visitor.h"

//
// Subtract_Node
//
Subtract_Node::Subtract_Node ()
:	Binary_Expr_Node ( ADDSUBTRACTPRECEDENCE )
{
}

//
// ~Subtract_Node
//
Subtract_Node::~Subtract_Node (void)
{
}

//
// accept
//
void Subtract_Node::accept (Expr_Node_Visitor & v)
{
  // COMMENT Although you can put visitation logic in the accept() method,
  // it is strongly recommend you do not do this. This is because it will
  // force all visitors to use the visitation logic defined in the accept
  // method even if they do not want to traverse the structure in this manner.
  
  //ADDRESSED COMMENT visitation logic was moved to visit method
	
	v.Visit_Subtraction_Node(*this);
} 

