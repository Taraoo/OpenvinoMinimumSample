#include "opencv2/dnn/dnn.hpp"
#include <string> 

int main(void)
{
	std::string x = "C:\\Program Files (x86)\\Intel\\openvino_2021.2.185\\deployment_tools\\open_model_zoo\\tools\\accuracy_checker\\data\\test_models\\SampLeNet.xml";
	std::string y = "C:\\Program Files (x86)\\Intel\\openvino_2021.2.185\\deployment_tools\\open_model_zoo\\tools\\accuracy_checker\\data\\test_models\\SampLeNet.bin";

	cv::dnn::Net net = cv::dnn::readNetFromModelOptimizer(x, y);

	return 0;
}