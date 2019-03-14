#ifndef __MY_EXAMPLE_INTERFACE_IMPL_H__
#define __MY_EXAMPLE_INTERFACE_IMPL_H__

#include "example.hh"
#include <vector>
#include <string>

class MyExampleInterface_impl : public POA_ExampleInterface
{
	public:
		///////////vector<string> questions;
		//vector<string> answers;
		inline MyExampleInterface_impl(){}
		virtual char * send_message(const char * message);
		virtual void createQA(const char * q, const char * a);

};

#endif // __MY_EXAMPLE_INTERFACE_IMPL_H__
