#include "jpeg_cpu.h"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <input.jpg> <output.jpg>" << std::endl;
        return 1;
    }

    std::vector<unsigned char> image_data;
    int width, height, channels;

    // Read JPEG
    JPEGProcessor::read_jpeg_file(argv[1], image_data, width, height, channels);
    std::cout << "Image read: " << width << "x" << height << " with " << channels << " channels" << std::endl;

    // Here you would insert your image processing / upscaling code

    // Write JPEG
    JPEGProcessor::write_jpeg_file(argv[2], image_data, width, height, channels, 90);
    std::cout << "Image written to " << argv[2] << std::endl;

    return 0;
}