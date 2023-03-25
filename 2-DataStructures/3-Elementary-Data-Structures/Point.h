#include <Point-interface.h>
#include <cstdlib>

float distance(point a, point b)
{
	float dx = a.x - b.x, dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}

float randFloat() {
    float r = 0.0 + static_cast <float> (rand())
        / (static_cast <float> (RAND_MAX / (4.0)));
    return r;
}