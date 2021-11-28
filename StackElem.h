#if !defined(EA_A4DCD71C_6564_471d_BABA_D6DDD506D1A7__INCLUDED_)
#define EA_A4DCD71C_6564_471d_BABA_D6DDD506D1A7__INCLUDED_

#include "CombinedFigure.h"
#include "FilledFigure.h"
#include "BorderedFigure.h"
#include "Figure.h"
#include "Rect.h"

template<Class Type>
class StackElem
{

public:
	StackElem() {

	}

	virtual ~StackElem() {

	}
	Type* data;
	StackElem* next;

};
#endif