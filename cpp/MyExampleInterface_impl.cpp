#ifndef __MY_EXAMPLE_INTERFACE_IMPL_H__
#define __MY_EXAMPLE_INTERFACE_IMPL_H__

#include "example.hh"
#include <vector>
#include <string>

using namespace std;

class MyExampleInterface_impl : public POA_ExampleInterface
{
	public:
	    vector<string> questions;
		vector<string> answers;
		short randomIndex;

		inline MyExampleInterface_impl(){}
		virtual void newQuestion(const char * q, const char * a);
		virtual char * getRandomQuestion();
		virtual char * answerQuestion(const char * userAnswer);

		virtual void setRandomIndex();
		virtual void removeQuestion(const short index);
		virtual char * getQuestion(const short index);
		virtual short getSize();
};

#endif // __MY_EXAMPLE_INTERFACE_IMPL_H__
