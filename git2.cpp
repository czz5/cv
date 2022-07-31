/*#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;
int main()
{
	Mat image = imread("D://1.jpg");
	namedWindow("高斯滤波【原图】");
	namedWindow("高斯滤波【效果图】");
	imshow("高斯滤波【原图】", image);
	Mat out;
	GaussianBlur(image, out, Size(5, 5), 0, 0);
	imshow("高斯滤波【效果图】", out);
	waitKey(0);
	return 0;
}*/