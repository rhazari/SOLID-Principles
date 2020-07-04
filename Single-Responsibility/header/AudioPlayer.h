#pragma once

#include "MediaPlayer.h"

class AudioPlayer final: public MediaPlayer{
    public:
        AudioPlayer();
        ~AudioPlayer();

        void WriteTo (IWriter *writer) override;
};