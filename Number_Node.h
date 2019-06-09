// -*- C++ -*-
// $Id: Number_Node.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_NUMBERNODE_H_
#define _CS363_NUMBERNODE_H_

/**
 * @class Number_Node
 *
 * 
 */
 
#include "Expr_Node.h"


class Expr_Node_Visitor;

class Number_Node : public Expr_Node
{
	
public:

	///Copy constructor
	Number_Node ( int n);
	
	///Destructor
	~Number_Node (void);
	
	///Accessor
	int getNumber(void) const;
	
	virtual void accept(Expr_Node_Visitor & v);
	
private:
	
	///Number to be pushed onto stack
	int n_;
};

#endif