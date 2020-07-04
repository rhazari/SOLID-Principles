#include "../header/MediaPlayer.h"

#include <iostream>

MediaPlayer::MediaPlayer() {
    std::cout<<"Constructing Media Player\n";
}

MediaPlayer::~MediaPlayer() {
    std::cout<<"De-structing Media Player\n";
}

void MediaPlayer::setTitle(const std::string& title) {
    title_ = title;
}

std::string MediaPlayer::getTitle() {
    return title_;
}

void MediaPlayer::setDuration(const double& duration){
    duration_ = duration;
}

double MediaPlayer::getDuration() {
    return duration_;
}

