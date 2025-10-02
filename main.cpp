
#include <iostream>
#include <telemetry/MavlinkTelemetry.h>
#include <videostreaming/avcodec/avcodec_decoder.h>

#include <unistd.h>

int main() {
    std::cout << "Starting RTP service:" << std::endl;

    MavlinkTelemetry::instance().start();

    auto decoder = AVCodecDecoder();

    decoder.init(true);

    sleep(60);

    MavlinkTelemetry::instance().terminate();

    return 0;
}