#include <vector>
#include <memory>

#include "../controlMatrix/theMatrix.h"

class NearXYZ
{
public:
    NearXYZ(uint8_t _dimension) ;
    ~NearXYZ();

public:
//public method
    void setPositionX(const std::vector<float> _position_x);
    void setPositionY(const std::vector<float> _position_y);
    void setPositionZ(const std::vector<float> _position_z);
    void setIsBoundary(const std::vector<unsigned int> _is_boundary);

    void runNearPointsAlgorithm();
//public attr

private:
//private method
    void setMatrixDimension();
    void runNearPointsAlgorithm1D();
    void runNearPointsAlgorithm2D();
    void runNearPointsAlgorithm3D();
//private variable
    uint8_t m_dimension ;
    std::unique_ptr<ITheMatrix> m_matrix = std::make_unique<ITheMatrix>();
};