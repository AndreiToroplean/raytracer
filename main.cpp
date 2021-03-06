#include <iostream>

int main() {
    // Image
    const int kImageWidth = 512;
    const int kImageHeight = 256;

    // Render
    std::cout << "P3\n" << kImageWidth << ' ' << kImageHeight << "\n255\n";

    for (int j = kImageHeight-1; j >= 0; --j) {
        std::cerr << "Scanlines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < kImageWidth; ++i) {
            auto r = double(i) / (kImageWidth-1);
            auto g = double(j) / (kImageHeight-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::cerr << "\nDone.\n";
}
