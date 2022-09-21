#include <iostream>
#include <windows.h>
#include <wingdi.h>

using namespace std;

int main() {
	HDC dc = GetDC(NULL);
	COLORREF pixelCol = GetPixel(dc, 20, 20);
	ReleaseDC(NULL, dc);
	
	cout<<GetRValue(pixelCol);

	return 0;

}
