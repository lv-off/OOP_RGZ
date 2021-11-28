#if !defined(EA_84AA100C_B195_4051_9657_087F419925EB__INCLUDED_)
#define EA_84AA100C_B195_4051_9657_087F419925EB__INCLUDED_

class Figure
{

public:
	Figure();
	virtual ~Figure();

	virtual void Draw() =0;
	virtual void GetRawInfo(std::ofstream& out) =0;
	virtual void Load(const char* name) =0;
	virtual void Move(int x, int y) =0;
	virtual void Move(POINT point) =0;
	virtual void Save(const char* name) =0;
	virtual void SetRawInfo(std::istream& inf) =0;

};
#endif