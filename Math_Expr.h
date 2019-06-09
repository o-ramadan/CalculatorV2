// -*- C++ -*-
// $Id: Math_Expr.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_MATHEXPR_H_
#define _CS363_MATHEXPR_H_

/**
 * @class Math_Expr
 *
 * 
 */
 
class Math_Expr
{
	public:
		Math_Expr(void);
		
		virtual ~Math_Expr(void);
		
		virtual int eval(void) = 0;
	
};
#endif