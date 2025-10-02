#include "fcmapmodel.h"

FCMapModel::FCMapModel(){
}

FCMapModel &FCMapModel::instance()
{
    static FCMapModel instance;
    return instance;
}
