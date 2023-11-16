#ifndef VECTOR_H
#define VECTOR3_H

#include <math.h>

class Vector3
{
public:
    Vector3(float X = 0.0f, float Y = 0.0f, float Z = 0.0f)
    {
        x = X;
        y = Y;
        z = Z;
    }

    // operações básicas
    Vector3 operator+=(const Vector3 &vec)
    {
        return *this = *this + vec;
    }

    Vector3 operator+(const Vector3 &vec)
    {
        return Vector3(vec.x + x, vec.y + y, vec.z + z);
    }

    Vector3 operator-=(const Vector3 &vec)
    {
        return *this = *this - vec;
    }

    Vector3 operator-(const Vector3 &vec)
    {
        return Vector3(x - vec.x, y - vec.y, z - vec.z);
    }

    Vector3 operator*=(float num)
    {
        return *this = *this * num;
    }

    Vector3 operator*(float num)
    {
        return Vector3(x * num, y * num, z * num);
    }

    Vector3 operator/=(float num)
    {
        return *this = *this / num;
    }

    Vector3 operator/(float num)
    {
        return Vector3(x / num, y / num, z / num);
    }

    // inverte vetor
    Vector3 operator-(void)
    {
        return Vector3(-x, -y, -z);
    }

    // produto interno
    float Dot(const Vector3 &vec)
    {
        return x * vec.x + y * vec.y + z * vec.z;
    }

    // produto vetorial
    Vector3 operator*(const Vector3 &vec)
    {
        return Vector3(y * vec.z - z * vec.y,
                       z * vec.x - x * vec.z, // -(x * vec.z - z * vec.x)
                       x * vec.y - y * vec.x);
    }

    // módulo
    float Length(void)
    {
        return sqrt(x * x + y * y + z * z);
    }

    // normalizar o vetor
    Vector3 Normalize(void)
    {
        float length = Length();

        x /= length;
        y /= length;
        z /= length;

        return *this;
    }

    // distância entre vetores
    float Distance(Vector3 &vec)
    {
        float disX = vec.x - x;
        float disY = vec.y - y;
        float disZ = vec.z - z;

        return sqrt(disX * disX + disY * disY + disZ * disZ);
    }

    // igualdade
    bool operator==(Vector3 &vec)
    {
        return vec.x == x && vec.y == y && vec.x == z;
    }

    // desigualdade
    bool operator!=(Vector3 &vec)
    {
        return !(vec == *this);
    }

public:
    float x, y, z;
};

#endif