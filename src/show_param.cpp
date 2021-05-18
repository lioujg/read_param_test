#include "ros/ros.h"
#include <string>
#include "std_msgs/String.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "show_param");
    ros::NodeHandle nh;
    double noise;
    std::string string_var;
    nh.getParam("noise", noise);
    nh.getParam("string_var", string_var);
    ROS_INFO("noise parameter is................... %f\n", noise);
    ROS_INFO_STREAM("string parameter is................... " << string_var);
};