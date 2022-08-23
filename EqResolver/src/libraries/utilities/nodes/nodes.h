#ifndef NODES_H
#define NODES_H

#include <iostream>
#include <vector>

namespace utilities
{


class INode
{
public:
    INode() = default;

    virtual void setPosition(const float* pos) = 0;
    virtual void setvalue(const float _value)
    {
        m_value = _value;
    };

    virtual void setIsBoundary(const bool is_boundary)
    {
        m_is_boundary = is_boundary;
    };

    virtual void setDerivadedValues(const float* der_values) = 0;

protected:
    float m_value;
    bool m_is_boundary;
    
};

class Node1D : public INode
{
public:
    Node1D( float _position_x, 
            float _value          = 0.0, 
            float _value_der_x_1  = 0.0,
            float _value_der_x_2  = 0.0, 
            float _value_der_x_3  = 0.0);
    ~Node1D();

    void setPosition(const float* _pos) override;
    void setvalue(const float _value);
    void setDerivadedValues(const float* _der_values) ;

protected:
    float m_pos_x;

    float m_value_der_x_1; 
    float m_value_der_x_2; 

};

};

#endif 

