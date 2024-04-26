#pragma once

namespace MathClasses
{
    struct Vector3
    {
        union {
            struct { float x, y, z; };
            float data[3];
        };

        float& operator [](int dim) {
            return data[dim];
        }

        operator float* () { return data; }

        operator const float* () const { return data; };

        
	};

    
}