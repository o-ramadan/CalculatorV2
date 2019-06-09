// $Id: Add_Node.cpp 

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add_Node
//

#include "Add_Node.h"
#include "Expr_Node_Visitor.h"
//
// Add_Node (int)
//
Add_Node::Add_Node ()
:	Binary_Expr_Node ( ADDSUBTRACTPRECEDENCE )
{
}

//
// ~Add_Node
//
Add_Node::~Add_Node (void)
{
}


//
// accept
//
void Add_Node::accept (Expr_Node_Visitor & v)
{
  // COMMENT Although you can put visitation logic in the accept() method,
  // it is strongly recommend you do not do this. This is because it will
  // force all visitors to use the visitation logic defined in the accept
  // method even if they do not want to traverse the structure in this manner.
	
  //ADDRESSED COMMENT visitation logic was moved to visit method
	v.Visit_Addition_Node(*this);
} 


