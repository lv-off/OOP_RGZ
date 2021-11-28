#if !defined(EA_5DCE2809_97F7_447a_BE30_E98CEDDA48F3__INCLUDED_)
#define EA_5DCE2809_97F7_447a_BE30_E98CEDDA48F3__INCLUDED_

#include "Figure.h"

class Rect : public virtual Figure
{

public:
	Rect();
	virtual ~Rect();

	void Rect(const Rect& rect);
	boolean CheckPoint(POINT point);
	void Draw();
	boolean Equal(Rect& other);
	void GetRawInfo(std::ofstream& out);
	void GetVertexes(POINT* vertexes);
	void Load(const char* name);
	void Move(int x, int y);
	void Move(POINT point);
	void Save(const char* name);
	void Set(POINT* vertexes);
	void SetRawInfo(std::istream& inf);

private:
	POINT _vetexes[4];

	void CheckGeometric();
	void CheckInner(Rect& inRect);
	void CheckInsideWindow();
	int CheckSide(POINT p, int x1, int x2);
	void PrepareBoreder();
	void PrepareFilling();

};
#endif