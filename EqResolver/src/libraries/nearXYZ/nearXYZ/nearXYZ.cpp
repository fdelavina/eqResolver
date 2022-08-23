#include "nearXYZ.h"

NearXYZ::NearXYZ(uint8_t _dimension)
{
    m_dimension = _dimension;
    setMatrixDimension();
}

NearXYZ::~NearXYZ()
{
    
}

void NearXYZ::setMatrixDimension()
{
    switch (m_dimension)
    {
    case 1:
        m_matrix = std::make_unique<TheMatrix1D>();
        break;

    case 2:
        m_matrix = std::make_unique<TheMatrix2D>();
        break;
    
    case 3:
        m_matrix = std::make_unique<TheMatrix3D>();
        break;
    
    default:
        m_matrix = std::make_unique<TheMatrix1D>();
        break;
    }
}

void NearXYZ::setPositionX(const std::vector<float> _position_x)
{
    m_matrix->setVectorPositionX(_position_x);
}

void NearXYZ::setPositionY(const std::vector<float> _position_y)
{
    m_matrix->setVectorPositionY(_position_y);
}

void NearXYZ::setPositionZ(const std::vector<float> _position_z)
{
    m_matrix->setVectorPositionZ(_position_z);
}

void NearXYZ::setIsBoundary(const std::vector<unsigned int> _is_boundary)
{
    m_matrix->setVectorIsBoundary(_is_boundary);
}

void NearXYZ::runNearPointsAlgorithm()
{
    if (m_dimension == 1)
    {
        runNearPointsAlgorithm1D();
    }
    else if (m_dimension == 2)
    {
        runNearPointsAlgorithm2D();
    }
    else if (m_dimension == 3)
    {
        runNearPointsAlgorithm3D();
    }
    else
    {

    }
}

void NearXYZ::runNearPointsAlgorithm1D()
{
    int8_t dir_x_0 = 1;
    int8_t dir_x_1 = -1;

    std::vector<float> vector_pos_x = m_matrix->GetVectorPositionX();
    std::vector<unsigned int> vector_is_boundary = m_matrix->getVectorIsBoundary();

    std::vector<float> aux_distance; //set vector for saving distance between nodes
    aux_distance.resize(vector_pos_x.size());

    for(unsigned int i = 0; i<vector_pos_x.size(); i++) //every node
    {
        for(unsigned int j = 0; j<vector_pos_x.size(); j++) //every other node
        {
            if (i==j) continue; //not take into account same node
            if (vector_is_boundary[i] == 0)
            {
                aux_distance[i] = getDistance(vector_pos_x[i], vector_pos_x[j]);
            }
            else if (vector_is_boundary[i] == 1)
            {

            }
            else
            {

            }
        }
        
    }
    
}

void NearXYZ::runNearPointsAlgorithm2D()
{
    
}

void NearXYZ::runNearPointsAlgorithm3D()
{
    
}