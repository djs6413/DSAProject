// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MAZEWARS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MAZEWARS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MAZEWARS_EXPORTS
#define MAZEWARS_API __declspec(dllexport)
#else
#define MAZEWARS_API __declspec(dllimport)
#endif

// This class is exported from the dll
class MAZEWARS_API CMazeWars {
public:
	CMazeWars(void);
	// TODO: add your methods here.
};

extern MAZEWARS_API int nMazeWars;

MAZEWARS_API int fnMazeWars(void);

const char* team = "Dan and Nash";
MAZEWARS_API char* GetTeam()
{
	return (char*)team;
}

int heightM;
int widthM;
const int** dataM;
MAZEWARS_API void SetMaze(const int** data, int width, int height)
{
	heightM = height;
	widthM = width;
	dataM = data;
}

MAZEWARS_API int** GetMaze(int& width, int& height)
{
	return nullptr;
}


int nextX;
int nextY;
//list<int> positionsX;
//list<int> positionsY;
int index = 0;
MAZEWARS_API void GetNextPosition(int& xpos, int& ypos)
{
	for (size_t i = 0; i < 10; i++)
	{

	}

	nextX = xpos++;
	nextY = ypos++;
}

MAZEWARS_API void SetStart(int xpos, int ypos)
{

}

MAZEWARS_API void GetStart(int& xpos, int& ypos)
{

}

MAZEWARS_API void SetEnd(int xpos, int ypos)
{

}

MAZEWARS_API void GetEnd(int& xpos, int& ypos)
{

}
