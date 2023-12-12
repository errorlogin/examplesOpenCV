#include<opencv2/opencv.hpp>
#include<opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
using namespace cv;
int main()

{     
    cv::Mat image1; 
    image1=cv::imread("/home/sdl/examplesOpenCV/examples/example1/OpenCV.jpg"); //имя файла изображения
    cv::namedWindow("image1",cv::WINDOW_AUTOSIZE); 
    cv::imshow("image1",image1); // окно для просмотра
    cv::waitKey(0); 
    cv::destroyWindow("image1");     
    return 0; 
} 