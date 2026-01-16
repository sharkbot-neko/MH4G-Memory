#pragma once
#include <cstdint>

typedef struct DAT_00E4E928
{
    char pad_0000[0x04];
    char pad_0001[0x04];
    char pad_0002[0x04];
    bool* LAB_00cdc770;
    void* FUN_00b14168;
    // ...
};

typedef struct QuestPlayerBodyWork {
    char pad_0000[0x0010];
    float vec_x;
    float vec_y;
    float vec_z;
    char pad_0084[0x04];
} QuestPlayerBodyWork;

typedef struct QuestPlayer {
    DAT_00E4E928* dat_00E4E928;
    char pad_0000[0x56];
    float playerWidthX;
    float playerWidthY;
    float playerWidthZ;
    char pad_0001[0xDC4];
    QuestPlayerBodyWork* playerbodywork;
} QuestPlayer;