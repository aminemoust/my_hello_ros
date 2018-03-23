#include "ros/ros.h"
#include "std_msgs/String.h"


void filteredCallback(const std_msgs::String::ConstPtr& msg)
{
	ROS_INFO("Filter: [%s]", msg->data.c_str());

}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "ten");

	ros::NodeHandle n;


	ros::Subscriber sub = n.subscribe("filtered", 1000, filteredCallback);

	ros::spin();

	return 0;
}
