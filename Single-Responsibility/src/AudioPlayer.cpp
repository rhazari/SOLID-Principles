#include "../header/AudioPlayer.h"
#include <iostream>

AudioPlayer::AudioPlayer() {
    std::cout<<"Audio Player constructed\n";
}

AudioPlayer::~AudioPlayer() {
    std::cout<<"Audio Player de-structed\n";
}

void AudioPlayer::WriteTo(IWriter* writer){
    writer->WriteTo("Disk Storage");
}