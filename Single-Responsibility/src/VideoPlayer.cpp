#include "../header/VideoPlayer.h"
#include <iostream>

VideoPlayer::VideoPlayer() {
    std::cout<<"Audio Player constructed\n";
}

VideoPlayer::~VideoPlayer() {
    std::cout<<"Audio Player de-structed\n";
}

void VideoPlayer::WriteTo(IWriter* writer){
    writer->WriteTo("Cloud Storage");
}