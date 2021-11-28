#if !defined(EA_34E02B3F_FDC2_4d50_A763_7883380E3563__INCLUDED_)
#define EA_34E02B3F_FDC2_4d50_A763_7883380E3563__INCLUDED_

#include "BorderedFigure.h"
#include "Color.h"

class FilledFigure : public BorderedFigure
{

public:
	virtual ~FilledFigure();

	void FilledFigure(Figure* figure);
	void FilledFigure(Figure* figure);
	void FilledFigure();
	void Draw();
	Color GetFillColor();
	int GetFillType();
	virtual void GetRawInfo(std::ostream& out);
	void SetFillColor(int r, int g, int b);
	void SetFillColor(Color color);
	void SetFillType(int Type);
	virtual void SetRawInfo(std::istream& inf);

private:
	Color _fillColor;
	int _fillType;

};