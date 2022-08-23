#include "theMatrix.h"

void TheMatrix1D::setNodes(const std::vector<utilities::INode*> _vector_nodes) 
{
    if (! std::is_same_v<decltype(_vector_nodes[0]), utilities::Node1D*> ) 
    {
        return; 
        std::cout << "TheMatrix1D::setNodes tries to add nodes in other dimensions" << std::endl;
    }
    
    m_vector_nodes = _vector_nodes;
}

void TheMatrix1D::obtainNearPoints()
{

}