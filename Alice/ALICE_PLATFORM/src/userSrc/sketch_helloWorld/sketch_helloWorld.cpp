#define _MAIN_

#ifdef _MAIN_

#include "main.h"
#include "MODEL.h"
#include <array>
#include <memory>
#include<time.h>
#include<experimental/generator> 

using namespace std;
using namespace std::experimental;
#include "sketch_spatialBinning\spatialBin.h"


///////// ----------------------------------------- model - view - controller (MVC) paradigm / pattern / template  ----------------- ////////////////////////////// 
/////////////////////////// model  ///////////////////////////////////////////




void setup()
{
	
}

void update(int value)
{


}

/////////////////////////// view  ///////////////////////////////////////////

void draw()
{


	backGround(0.75);
	drawGrid(20);

	float radius = 10;
	for (float param = 0.0; param < 2.0; param += 0.1)
	{
		float x = radius* cos(PI *param);
		float y = radius* sin(PI *param);
		drawPoint(vec(x, y, 0));

		// Move the circle from the origin
		//x += 10;
		//y += 10;
	}

	
}

/////////////////////////// control  ///////////////////////////////////////////
void mousePress(int b, int state, int x, int y)
{
}

void mouseMotion(int x, int y)
{
}

void keyPress(unsigned char k, int xm, int ym)
{

	


}





#endif // _MAIN_
