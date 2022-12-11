#pragma once

#include <mean-masked.hpp>
#include <opencv4/opencv2/opencv.hpp>

void alloc_new_image_size(cv::Mat& image, size_t cstring_size);

void process_image(cv::Mat& image, cv::Mat& mask, std::vector<uint3>& cstring);
