#pragma once

int rrand(int range_min, int range_max) {
    return rand() % (range_max - range_min + 1) + range_min;
}
