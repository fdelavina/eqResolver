#ifndef THEMATRIX_H
#define THEMATRIX_H

#include <vector>
#include <memory>

#include "utilities/nodes/nodes.h"

class ITheMatrix
{
public:
    ITheMatrix() = default;

    //setters
    virtual void setNodes(const std::vector<utilities::INode*> _vector_nodes) = 0;

    //getters
    std::vector<utilities::INode*>  GetNodes() const 
    {
        return m_vector_nodes;
    };

    utilities::INode*  getNearPoint1() const 
    {
        return near_point_1;
    };

    utilities::INode*  getNearPoint2() const 
    {
        return near_point_2;
    };

private:

protected:
    //methods
    virtual void obtainNearPoints() = 0;
    //attr
    std::vector<utilities::INode*> m_vector_nodes;

    utilities::INode* near_point_1;
    utilities::INode* near_point_2;

};

class TheMatrix1D : public ITheMatrix
{
public:
    TheMatrix1D() = default;

    //setters

    void setNodes(const std::vector<utilities::INode*> _vector_nodes) override;

    virtual void setNearPoint1(const std::vector<unsigned int> _vector_near_1) ;
    virtual void setNearPoint2(const std::vector<unsigned int> _vector_near_2) ;

    //getters

    virtual std::vector<unsigned int>  getNearPoint1() ;
    virtual std::vector<unsigned int>  getNearPoint2() ;

protected:
     void obtainNearPoints() override;
};


#endif