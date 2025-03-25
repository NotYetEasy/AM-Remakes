// SimplexNoise.h
#pragma once

#include <cmath>
#include <array>

class SimplexNoise {
private:
    // Constants
    static const double F2;
    static const double F3;
    static const double F4;
    static const double G2;
    static const double G3;
    static const double G4;
    
    // Permutation tables
    static const int p[256];
    static const int perm[512];
    static const int permMod12[512];
    
    // Gradient vectors
    static const double grad3[12][3];
    static const double grad4[32][4];
    
    // Helper functions
    static double dot(const double g[3], double x, double y, double z);
    static double dot(const double g[4], double x, double y, double z, double w);
    static int fastfloor(double x);

public:
    // 2D Simplex noise
    static double noise(double x, double y);
    
    // 3D Simplex noise
    static double noise(double x, double y, double z);
    
    // 4D Simplex noise
    static double noise(double x, double y, double z, double w);
};
