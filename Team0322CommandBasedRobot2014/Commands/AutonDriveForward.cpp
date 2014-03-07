#include "AutonDriveForward.h"

AutonDriveForward::AutonDriveForward() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void AutonDriveForward::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AutonDriveForward::Execute() {
	chassis->autoDriveSystem(-0.75, -0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonDriveForward::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonDriveForward::End() {
	chassis->autoDriveSystem(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonDriveForward::Interrupted() {
	End();
}
