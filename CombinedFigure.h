#if !defined(EA_B46F39AD_9379_4cbb_9F48_277A41D4C01C__INCLUDED_)
#define EA_B46F39AD_9379_4cbb_9F48_277A41D4C01C__INCLUDED_

#include "FilledFigure.h"
#include "Rect.h"

class CombinedFigure : public FilledFigure
{

public:
	CombinedFigure();
	virtual ~CombinedFigure();

	void CombinedFigure(Figure* figure, Figure* inFigure);
	void Draw();

private:
	Figure* _inFigure;

};
#endif