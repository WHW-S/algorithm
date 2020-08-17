#include<opencv4/opencv2/opencv.hpp>
#include<iostream>
using std::cout;
using std::endl;

int main(int argc,char **argv)
{
    if(argc!=2)cout<<"parameter number error"<<endl;
    cv::Mat img=cv::imread(argv[1]);
    cv::Mat roi1=img(cv::Range(5,25),cv::Range(10,40));
    cv::Mat roi2=img(cv::Range(50,70),cv::Range(50,90));
    cv::bitwise_not(roi1,roi1);
    cv::bitwise_not(roi2,roi2);
    cv::namedWindow("EXAMPLE_5_5",cv::WINDOW_AUTOSIZE);
    cv::imshow("EXAMPLE_5_5",img);
    cv::waitKey(0);
    return 0;
}

