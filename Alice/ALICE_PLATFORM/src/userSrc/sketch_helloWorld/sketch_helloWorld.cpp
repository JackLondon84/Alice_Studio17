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


vec A(5, 0, 0);
list<vec> A_pts;
float inc = 0.005;

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

	vec tangent;
	// Random path
	//tangent.x = ofRandom(-0.5, 0.5);
	//tangent.y = ofRandom(-0.5, 0.5);

	tangent.x = A.y * 0.01;
	tangent.y = A.x * -0.01;
	vec Anew = A + tangent;
	A = Anew;
	int num_of_pts = A_pts.size();
	if (num_of_pts % 10 == 0) {
		inc = inc * -1.0;
	}

	A = A *(1.0 + inc);

	A_pts.push_back(A);


	for (auto pt : A_pts)
	{
		drawPoint(pt);
	};

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
