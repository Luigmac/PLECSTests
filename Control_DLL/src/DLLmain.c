

#include"DllHeader.h"
#include"Transformations.h"

#define x0 aState->inputs[0]
#define x1 aState->inputs[1]
#define x2 aState->inputs[2]

#define y1 aState->outputs[0]
#define y2 aState->outputs[1]
#define y3 aState->outputs[2]
#define y4 aState->outputs[3]
#define y5 aState->outputs[4]

  


Transform  transform;
const float coeff = 1.0f / 3.0f;

DLLEXPORT void plecsSetSizes(struct SimulationSizes *aSizes)
{
    aSizes->numInputs = 3 ;
    aSizes->numOutputs = 5;
    aSizes->numParameters = 0;
    aSizes->numStates = 0;  


}
                
DLLEXPORT void plecsStart(struct SimulationState *aState)
{
    transform = (Transform){0};
}

                                                                     
DLLEXPORT void plecsOutput(struct SimulationState *aState)
{
   
    transform.a = x0;
    transform.b = x1;
    transform.c = x2;


    Transform_abc2AB(&transform, coeff);



    y1 = transform.a;
    y2 = transform.b;
    y3 = transform.c;
    y4 = transform.alpha;
    y5 = transform.beta;
   
}


DLLEXPORT void plecsTerminate(struct SimulationState *aState)
{
 
}