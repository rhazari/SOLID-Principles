#pragma once
#include "IWriter.h"
#include <string>

class MediaPlayer {
    public:
        MediaPlayer();
        ~MediaPlayer();

        void setTitle(const std::string&);
        std::string getTitle();

        void setDuration(const double&);
        double getDuration();

        virtual void WriteTo(IWriter* write) = 0;
    
    private:
        std::string title_;
        double duration_;
};