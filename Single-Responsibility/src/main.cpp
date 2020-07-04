#include "../header/VideoPlayer.h"
#include "../header/AudioPlayer.h"
#include "../header/CloudStorage.h"
#include "../header/FileStorage.h"

#include <memory>

int main() {
    auto videoPlayer = std::make_unique<VideoPlayer>();
    auto audioPlayer = std::make_unique<AudioPlayer>();
    auto cloudStorage = std::make_unique<CloudStorage>();
    auto diskStorage = std::make_unique<FileStorage>();

    videoPlayer->setTitle("The Matrix");
    videoPlayer->setDuration(112);
    videoPlayer->WriteTo(cloudStorage.get());

    audioPlayer->setTitle("Joshua Tree");
    audioPlayer->setDuration(210);
    audioPlayer->WriteTo(diskStorage.get());


}