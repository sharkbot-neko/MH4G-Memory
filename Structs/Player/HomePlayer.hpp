#pragma once

#include <cstdint>

// 動作するかわからない
typedef struct DAT_00e3ee98
{
    char pad_0000[0x04];
    char pad_0001[0x04];
    char pad_0002[0x04];
    bool* LAB_00cdc770;
    void* FUN_002c25f0;
    uint32_t* FUN_00cbf398;
    void* LAB_002c7564;
    void* LAB_00cdc798;
    void* LAB_00cdc798;
    void* LAB_002c5ca0;
    void* FUN_002ca158;
    void* LAB_00948fa0;
    void* FUN_002c5a68;
    bool* LAB_001a3818;
    char* LAB_0094a5e4;
    void* FUN_00944754;
    void* FUN_002c5bd0;
    void* LAB_00cdc75c;
    void* LAB_006be6a8;
    void* FUN_009451e8;
    void* FUN_00945698;
    int* LAB_00ce51c4;
    void* FUN_0094a8a8;
    // ....
};


typedef struct HomePlayerBodyWork {
    char pad_0000[0x0010];
    float vec_x;
    float vec_y;
    float vec_z;
    char pad_0084[0x04];
} HomePlayerBodyWork;

// 0x0107CAC0
typedef struct HomePlayer {
    DAT_00e3ee98* dat_00e3ee98;
    char pad_0000[0x56];
    float playerWidthX;
    float playerWidthY;
    float playerWidthZ;
    char pad_0001[0xDC4];
    HomePlayerBodyWork* playerbodywork;
} HomePlayer;

// 0x0107CAB4
typedef struct DAT_0107cab4
{
    char pad_0000[0x04];
    char pad_0001[0x04];
    char pad_0002[0x04];
    HomePlayer* player;
    char pad_0003[0x04];
    char pad_0004[0x04];
    char pad_0005[0x04];
};
