#include <ros/ros.h>
#include <task6_demo/ThreeInts.h>

void callback(const task6_demo::ThreeInts::ConstPtr& msg)
{
    ROS_INFO("Received: %ld %ld %ld",
             msg->num1, msg->num2, msg->num3);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "three_ints_subscriber");

    ros::NodeHandle nh;

    ros::Subscriber sub =
        nh.subscribe("three_ints_topic", 10, callback);

    ros::spin();

    return 0;
}