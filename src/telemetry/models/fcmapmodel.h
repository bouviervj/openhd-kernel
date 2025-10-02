#ifndef FCMAPMODEL_H
#define FCMAPMODEL_H


//
// This model extends the fcmavlinksystem model for map-specific features
// R.n it only exposes the flght path as a coordinate points such that we can draw the corresponding Poly Line in qml
//
class FCMapModel
{
public:
    explicit FCMapModel();
    // singleton for accessing the model from c++
    static FCMapModel& instance();
};

#endif // FCMAPMODEL_H
