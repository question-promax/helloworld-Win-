#include <iostream>
#include <fstream>
#include <vector>

class Image 
{
private:
std::vector<std::vector<int>> pixels;
int width;
int height;

public:
// 默认构造函数，创建一个空图像
Image() : width(0), height(0) {}

// 构造函数，创建一个指定宽高且所有像素值为0的图像
Image(int w, int h) : width(w), height(h) {
pixels.resize(height);
for (int i = 0; i < height; i++) {
pixels[i].resize(width);
}
}

// 判断图像是否为空
bool isEmpty() const {
return width == 0 && height == 0;
}

// 从文件中读取图像
void loadFromFile(const std::string& filename) {
std::ifstream file(filename);
if (!file.is_open()) {
std::cerr << "Error opening file: " << filename << std::endl;
return;
}

file >> width >> height;
pixels.resize(height);
for (int i = 0; i < height; i++) {
pixels[i].resize(width);
for (int j = 0; j < width; j++) {
file >> pixels[i][j];
}
}
file.close();
}

// 将图像保存到文件
void saveToFile(const std::string& filename) {
std::ofstream file(filename);
if (!file.is_open()) {
std::cerr << "Error opening file: " << filename << std::endl;
return;
}

file << width << " " << height << std::endl;
for (int i = 0; i < height; i++) {
for (int j = 0; j < width; j++) {
file << pixels[i][j] << " ";
}
file << std::endl;
}
file.close();
}
};
int main ()
{
    Image img1; // 创建一个空的图像
    Image img2(500, 300); // 创建一个500x300的图像，所有像素值都为0

    // 读取图像并保存到文件
    img2.loadFromFile("input.ppm");
    img2.saveToFile("output.ppm");

    return 0;
}

