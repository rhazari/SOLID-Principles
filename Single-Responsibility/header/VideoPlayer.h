#pragma once

#include "MediaPlayer.h"

class VideoPlayer final: public MediaPlayer{
    public:
        VideoPlayer();
        ~VideoPlayer();

        void WriteTo (IWriter *writer) override;
};