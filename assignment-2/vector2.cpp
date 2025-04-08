#include "vector2.h"
#include "config.h"
#include <cmath>
#include <iostream>

using std::to_string;

vector2::vector2()
{
    m_x = 0;
    m_y = 0;
    m_ex = Expression::radian;
}

vector2::vector2(float x, float y, bool isRadian)
{
    m_x = x;
    m_y = y;
    m_ex = isRadian ? Expression::radian : Expression::degree;
}

vector2::~vector2()
{
}

void vector2::setExpression(Expression ex, bool scaleValues = false)
{
    if(ex == m_ex) return;
    
    ex = m_ex;
    
    if(scaleValues)
    {
        bool toRad = ex == Expression::radian;
        m_x = toRad ? getRad(m_x) : getDeg(m_x);
        m_y = toRad ? getRad(m_y) : getDeg(m_y);
    }
}

void vector2::setValue(float x, float y)
{
    m_x = x;
    m_y = y;
}

void vector2::rotateBy(float r)
{
    float mag = getMag();
    float rot = getUnaffectedRot();
    rot += (m_ex == Expression::radian) ? r : getRad(r);
    
    m_x = std::cos(rot) * mag;
    m_y = std::sin(rot) * mag;
}

void vector2::print()
{
    std::cout << "(" << m_x << ", " << m_y << ")";
}


inline float vector2::getRad(float f)
{
    return f * (3.14159265358979323846 / 180.0);
}

inline float vector2::getDeg(float f)
{
    return f * 180.0 / 3.14159265358979323846;
}

inline float vector2::getMag()
{
    return std::sqrt(m_x*m_x + m_y*m_y);
}

inline float vector2::getUnaffectedRot()
{
    return std::atan2f(m_y, m_x);
}
