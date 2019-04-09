//  July/2018, ETHZ, Jaeyoung Lim, jalim@student.ethz.ch

#include "formation_control/formation_control.h"

using namespace Eigen;
using namespace std;
//Constructor
FormationController::FormationController(const ros::NodeHandle& nh, const ros::NodeHandle& nh_private):
  nh_(nh),
  nh_private_(nh_private) {

  cmdloop_timer_ = nh_.createTimer(ros::Duration(0.01), &FormationController::cmdloopCallback, this); // Define timer for constant loop rate
  statusloop_timer_ = nh_.createTimer(ros::Duration(1), &FormationController::statusloopCallback, this); // Define timer for constant loop rate

}
FormationController::~FormationController() {
  //Destructor
}

void FormationController::cmdloopCallback(const ros::TimerEvent& event){

}

void FormationController::statusloopCallback(const ros::TimerEvent& event){

}