#pragma once

#include <stdio.h>
#include <thrust/random.h>
#include <cuda.h>
#include <cmath>

namespace Nbody {
void initSimulation(int N);
float stepSimulation(float dt, int threadsPerBlock);
void copyPlanetsToVBO(float *vbodptr);

void endSimulation();
}
