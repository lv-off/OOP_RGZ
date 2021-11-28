#if !defined(EA_6F949A38_03BD_492d_9383_128FBC6BCAE1__INCLUDED_)
#define EA_6F949A38_03BD_492d_9383_128FBC6BCAE1__INCLUDED_

#include "Color.h"
#include "Figure.h"

class BorderedFigure
{

public:
	BorderedFigure();
	virtual ~BorderedFigure();

	void BorderedFigure(Figure* figure);
	virtual void Draw();
	Color GetBorderColor();
	int GetBorderType();
	int GetBorderWidth();
	virtual void GetRawInfo(std::ostream& out);
	void Load(const char* str);
	void Save(const char* str);
	void SetBorderColor(int r, int g, int b);
	void SetBorderColor(Color color);
	void SetBorderType(int type);
	void SetBorderWidth(int width);
	virtual void SetRawInfo(std::istream& inf);

protected:
	Color _borderColor;
	int _borderType;
	int _borderWidth;
	Figure* _figure;

	void FixChannel(int& ch);
	void FixColor(Color& c);

};
#endif