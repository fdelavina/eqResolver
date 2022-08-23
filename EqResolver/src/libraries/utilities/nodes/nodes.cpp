#include "nodes.h"

using namespace utilities;

Node1D::Node1D( float _position_x, 
                float _value          , 
                float _value_der_x_1  ,
                float _value_der_x_2  , 
                float _value_der_x_3  )
{
    m_pos_x = _position_x;
    m_value = _value;

    m_value_der_x_1 = _value_der_x_1; 
    m_value_der_x_2 = _value_der_x_2; 
}

void Node1D::setPosition(const float* _pos)
{
    try
    {
        m_pos_x = _pos[0];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Node1D::setvalue(const float _value)
{
    m_value = _value;
}

void Node1D::setDerivadedValues(const float* _der_values)
{
    try
    {
        m_value_der_x_1 = _der_values[0]; 
        m_value_der_x_2 = _der_values[1]; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}