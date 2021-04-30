#ifndef VOXEL_H
#define VOXEL_H
typedef struct{
    float r, g, b, a;
    bool isOn;
} Voxel;

typedef struct{
    int x , y , z;
    bool exists;
} VoxelCoords;

#endif // VOXEL_H
