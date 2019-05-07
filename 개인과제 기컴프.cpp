#include <stdio.h>
#include <CoalaMOD.h>
#include <iostream>
#define SWAP(x,y) {int t = x; x = y; y = t;}
#pragma comment(lib, "CoalaMOD.lib")

int main()
{
	int sx, sy, sz, ex, ey, ez;
	scanf_s("%d %d %d %d %d %d", &sx, &sy, &sz, &ex, &ey, &ez);
	
	BlockID a = createBlock(BLOCK_STONE);

	if (sx < ex) SWAP(sx, ex);
	if (sy < ey) SWAP(sy, ey);
	if (sz < ez) SWAP(sz, ez);

	for (int i=ex; sx >= i; i++) {
		for (int j=ey; sy >= j; j++) {
			for (int k=ez; sz >= k; k++)
				locateBlock(a, i, j, k);
		}
	}
}