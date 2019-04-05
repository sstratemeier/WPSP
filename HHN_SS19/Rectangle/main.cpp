#include "Rectangle.h"

int main(int argc, char* args[])
{
	Rectangle rect1;
	rect1.SetPos(1, 1);
	rect1.SetDim(3, 4);

	Rectangle* pRect2 = new Rectangle();
	pRect2->SetPos(0, 0);
	pRect2->SetDim(4, 5);

	rect1.Print();
	pRect2->Print();



}