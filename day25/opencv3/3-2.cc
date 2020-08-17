#include <opencv4/opencv2/opencv.hpp>

int main(int argc,char **argv)
{
    cv::Matx33f m33f;
    m33f={1,2,3,4,5,6,7,8,9};
    std::cout<<"使用Matx33f生成3x3的矩阵：\n"<<m33f<<std::endl;
    cv::Vec<int,3> f(1,2,3);
    std::cout<<"使用Vec3f生成3行的向量：\n"<<f<<std::endl;

    cv::Mat result;
    result=m33f*f;
    std::cout<<result<<std::endl;
    return 0;
}

