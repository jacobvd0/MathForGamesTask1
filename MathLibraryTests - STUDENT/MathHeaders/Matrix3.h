#pragma once
#include "Vector3.h"
namespace MathClasses
{
    struct Matrix3
    {
        float
            m1, m2, m3,
            m4, m5, m6,
            m7, m8, m9;

        Matrix3(float _m1, float _m2, float _m3, float _m4, float _m5, float _m6, float _m7, float _m8, float _m9) {
            m1 = _m1;
            m2 = _m2;
            m3 = _m3;
            m4 = _m4;
            m5 = _m5;
            m6 = _m6;
            m7 = _m7;
            m8 = _m8;
            m9 = _m9;
        }

        Matrix3() {
            m1 = m2 = m3 = m4 = m5 = m6 = m7 = m8 = m9 = 0.0f;
        }

        union {
            struct {
                float m1, m2, m3, m4, m5, m6, m7, m8, m9;
            };

            float v[9];
            float mm[3][3];

            Vector3 axis[3];
        };

        static Matrix3 MakeIdentity() {
            Matrix3 identity;
            identity.m1 = 1;
            identity.m2 = 0;
            identity.m3 = 0;
            identity.m4 = 0;
            identity.m5 = 1;
            identity.m6 = 0;
            identity.m7 = 0;
            identity.m8 = 0;
            identity.m9 = 1;
            return identity;
        }

        float& operator [](int dim) {
            return v[dim];
        }

        const float& operator [](int dim) const {
            return v[dim];
        }


	};
}