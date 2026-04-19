#include <iostream>
#include <string>
#include <cmath>

const int MAX_RETRIES = 4;

std::string partition = "system_a";

const std::string secretPin = "2345";

std::string pin = "";

cout << "Please Enter the Pin: ";
cin >> pin;

bool lockStatus = false;
if (pin == secretPin)
{
  lockStatus = true;
}
else
{
  lockStatus = false;
}

float totalPartitionSizeGB = 0;

std::cout << "Enter the Partition Size";
std::cin >> totalPartitionSizeGB;

const float idealPartitionSizeGB = 3456.34;

float diffPartition = idealPartitionSizeGB - totalPatitionSizeGB;

std::string log = "Device Name: " + partition + "\nSerial Id: " + serialId + "\nStatus :"+ lockStatus + "\n";



if(lockStatus == true && diffPartition <= 0 && bootSlot == a){
  std::string statusReport = log + "Partition Size: " + totalPartitionSizeGB;
  std::cout >> statusReport;
}else{
  std::cout >> log;
}
