// $Id: Modulus_Node.cpp 

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Modulus_Node
//

#include "Modulus_Node.h"
#include "Expr_Node_Visitor.h"

//
// Modulus_Node 
//
Modulus_Node::Modulus_Node ()
:	Binary_Expr_Node ( MULTIPLYDIVIDEMODULUSPRECEDENCE )
{
}

//
// ~Modulus_Node
//
Modulus_Node::~Modulus_Node (void)
{
}


//
// accept
//
void Modulus_Node::accept (Expr_Node_Visitor & v)
{
  // COMMENT Although you can put visitation logic in the accept() method,
  // it is strongly recommend you do not do this. This is because it will
  // force all visitors to use the visitation logic defined in the accept
  // method even if they do not want to traverse the structure in this manner.
  
  //ADDRESSED COMMENT visitation logic was moved to visit method
	
	v.Visit_Modulus_Node(*this);
} 

