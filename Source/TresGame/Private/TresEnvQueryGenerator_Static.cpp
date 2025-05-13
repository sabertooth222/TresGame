#include "TresEnvQueryGenerator_Static.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryGenerator_Static::UTresEnvQueryGenerator_Static() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->center = UEnvQueryContext_Querier::StaticClass();
}

