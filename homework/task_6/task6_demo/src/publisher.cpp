#include <ros/ros.h>
#include <task6_demo/ThreeInts.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "three_ints_publisher");

    ros::NodeHandle nh;

    ros::Publisher pub =
        nh.advertise<task6_demo::ThreeInts>("three_ints_topic", 10);

    ros::Rate rate(1);

    while (ros::ok())
    {
        task6_demo::ThreeInts msg;

        msg.num1 = 10;
        msg.num2 = 20;
        msg.num3 = 30;

        pub.publish(msg);

        ROS_INFO("Published: %ld %ld %ld",
                 msg.num1, msg.num2, msg.num3);

        rate.sleep();
    }

    return 0;
}
