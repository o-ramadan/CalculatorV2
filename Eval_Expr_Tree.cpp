// $Id: Eval_Expr_Tree.cpp 

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Eval_Expr_Tree
//

#include "Eval_Expr_Tree.h"


//
// Eval_Expr_Tree
//
Eval_Expr_Tree::Eval_Expr_Tree (void)
:	numStack_ ()
{
}

//
//	~Eval_Expr_Tree
//
Eval_Expr_Tree::~Eval_Expr_Tree (void)
{
}

//
//	Visit_Addition_Node
//
void Eval_Expr_Tree::Visit_Addition_Node(const Add_Node & node)
{
	if (nullptr != node.getLeftChild() )
		node.getLeftChild()->accept(*this);
	
	if (nullptr != node.getLeftChild() )
		node.getRightChild()->accept(*this);
	
	int n2 = this->numStack_.top();
	this->numStack_.pop();
	
	int n1 = this->numStack_.top();
	this->numStack_.pop();
	
	this->result_ = n1 + n2;
	
	this->numStack_.push( result_ );
}

//
//	Visit_Subtraction_Node
//
void Eval_Expr_Tree::Visit_Subtraction_Node(const Subtract_Node & node)
{
	if (nullptr != node.getLeftChild() )
		node.getLeftChild()->accept(*this);
	
	if (nullptr != node.getLeftChild() )
		node.getRightChild()->accept(*this);
	
	int n2 = this->numStack_.top();
	this->numStack_.pop();
	
	int n1 = this->numStack_.top();
	this->numStack_.pop();
	
	this->result_ = n1 - n2;
	
	this->numStack_.push( result_ );
}

//
//	Visit_Multiplication_Node
//
void Eval_Expr_Tree::Visit_Multiplication_Node(const Multiply_Node & node)
{
	if (nullptr != node.getLeftChild() )
		node.getLeftChild()->accept(*this);
	
	if (nullptr != node.getLeftChild() )
		node.getRightChild()->accept(*this);
	
	int n2 = this->numStack_.top();
	this->numStack_.pop();
	
	int n1 = this->numStack_.top();
	this->numStack_.pop();
	
	this->result_ = n1 * n2;
	
	this->numStack_.push( result_ );
}

//
//	Visit_Division_Node
//
void Eval_Expr_Tree::Visit_Division_Node(const Divide_Node & node)
{	
	if (nullptr != node.getLeftChild() )
		node.getLeftChild()->accept(*this);
	
	if (nullptr != node.getLeftChild() )
		node.getRightChild()->accept(*this);
	
	int n2 = this->numStack_.top();
	this->numStack_.pop();
	
	int n1 = this->numStack_.top();
	this->numStack_.pop();
	
	this->result_ = n1 / n2;
	
	this->numStack_.push( result_ );
}

//
//	Visit_Modulus_Node
//
void Eval_Expr_Tree::Visit_Modulus_Node(const Modulus_Node & node)
{
	if (nullptr != node.getLeftChild() )
		node.getLeftChild()->accept(*this);
	
	if (nullptr != node.getLeftChild() )
		node.getRightChild()->accept(*this);
	
	int n2 = this->numStack_.top();
	this->numStack_.pop();
	
	int n1 = this->numStack_.top();
	this->numStack_.pop();
	
	this->result_ = n1 % n2;
	
	this->numStack_.push( result_ );
}

//
//	Visit_Number_Node
//
void Eval_Expr_Tree::Visit_Number_Node(const Number_Node & node)
{
	this->numStack_.push( node.getNumber() );
	
	this->result_ = node.getNumber();
}

//
//	result
//
int Eval_Expr_Tree::getResult(void) const
{
	return this->result_; 
}