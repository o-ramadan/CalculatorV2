// -*- C++ -*-
// $Id: Array.inl 828 2011-02-07 14:21:52Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// max_size
//
template <typename T>
inline
size_t Array <T>::max_size (void) const
{
	return max_size_;
}

//
// slice (size_t)
//
template <typename T>
inline
Array<T> Array<T>::slice (size_t begin) const
{
	return slice(begin, this->cur_size_ - 1);
}