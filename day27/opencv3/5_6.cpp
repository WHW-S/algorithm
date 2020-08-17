#include<opencv4/opencv2/opencv.hpp>
#include <iostream>
#include<vector>
using std::vector;

int main(int argc,char **argv)
{
    if(argc!=2)std::cout<<"Parameters number error."<<std::endl;
    cv::Mat img=cv::imread(argv[1]);
    //a
    vector<cv::Mat> channels;
    cv::split(img,channels);
    cv::Mat green=channels[1];
    cv::namedWindow("example5_6_a",cv::WINDOW_AUTOSIZE);
    cv::imshow("example5_6_a",green);
    cv::waitKey(0);
    //b
    cv::Mat clone1=green.clone(),clone2=green.clone();
    //c
    double maxpixel,minpixel;
    cv::minMaxIdx(green,&maxpixel,&minpixel);
    std::cout<<"In green,maxpixel is "<<maxpixel<<",and minpixel is "<<minpixel<<std::endl;
    //d
    auto thresh=(unsigned char)((maxpixel-minpixel)/2.0);
    clone1=thresh;
    //e
    clone2=0;
    cv::compare(green,clone1,clone2,cv::CMP_GE);
    cv::namedWindow("example5_6_e",cv::WINDOW_AUTOSIZE);
    cv::imshow("example5_6_e",clone2);
    cv::waitKey(0);
    //f
    cv::subtract(green,thresh/2,green,clone2);
    cv::namedWindow("example5_6_f",cv::WINDOW_AUTOSIZE);
    cv::imshow("example5_6_f",green);
    cv::waitKey(0);
    return 0;
}

