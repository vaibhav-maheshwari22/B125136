#include <iostream>

using namespace std;

class Compressor {
public:
    virtual void compress(double size) {
        cout << size << endl;
    }
};

class TextCompressor : public Compressor {
public:
    void compress(double size) override {
        double comp = size * 0.4;
        cout << "Text Original: " << size << " Compressed: " << comp << endl;
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double size) override {
        double comp = size * 0.7;
        cout << "Image Original: " << size << " Compressed: " << comp << endl;
    }
};

int main() {
    TextCompressor tc;
    ImageCompressor ic;
    tc.compress(100.0);
    ic.compress(100.0);
    return 0;
}