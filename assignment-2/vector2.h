#ifndef VECTOR2_H
#define VECTOR2_H
class vector2
{
public:
    enum Expression
    {
        radian,
        degree,
    };
    
    
    vector2();
    vector2(float x, float y, bool isRadian);
    virtual ~vector2();
    
    void setExpression(Expression, bool);
    void setValue(float x, float y);
    void rotateBy(float r);
    void print();
private:
    float m_x;
    float m_y;
    Expression m_ex;
    
    inline float getRad(float);
    inline float getDeg(float);
    inline float getMag();
    inline float getUnaffectedRot();
};
#endif

