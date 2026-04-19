// This program will simulate how AOSP handles system metadata,
// user authentication, and partition integrity checks.

/*
Project Objectives
Data Fundamentals : Manage partition sizes, security flags, and hardware IDs.

Operators & Math : Calculate remaining storage and verify security checksums.

Strings & Input : Handle system logs, user passcodes, and partition names.

Booleans : Evaluate system lock states and encryption status.


The Task for You
Write a single C++ file (main.cpp) that performs the following sequence:

Initialization : Define a constant for the MAX_RETRIES. Initialize variables for a partition name like "system_a".

User Authentication : Ask the user for a numeric PIN. Compare it to a pre-defined secret using Comparison Operators.

Storage Calculation : Input the total partition size. Subtract a mock "System Image" size using Arithmetic Operators.

Log Generation : Create a string that combines the device name, a unique serial ID, and a status message using String Concatenation.

Security Check : Create a boolean expression that returns true only if the PIN is correct, the space is sufficient, and the boot slot is 'A'.

Final Output : Print a "System Health Report" showing all calculated numbers, strings, and the final boolean status.
*/

#include <iostream>
#include <string>
#include <cmath>

const int MAX_RETRIES = 4;
const std::string secretPin = "2345";
const float idealPartitionSizeGB = 3456.34;

int main()  // I forgot to include this.
{
  std::string partition = "system_a";

  std::string pin = "";

  std::cout << "Please Enter the Pin: ";
  std::cin >> pin;


  // here we can use the bool lockStatus = (pin == secretPin) directly.
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

  std::cout << "Enter the Partition Size: ";
  std::cin >> totalPartitionSizeGB;

  float diffPartition = idealPartitionSizeGB - totalPartitionSizeGB;
  const std::string serialId = "Kh-432";

  std::string log = "----System Health Report----\nDevice Name: " +
                    partition + "\nSerial Id: " + serialId + "\nStatus :" + std::to_string(lockStatus) + "\n";

  // we cannot concatenate two strings using the add --> need to verify

  char bootSlot;
  std::cout << "Enter the slot: ";
  std::cin >> bootSlot;
  char a = 'a';
  if (lockStatus == true && diffPartition >= 0 && bootSlot == a)
  {
    std::string statusReport = log + "Partition Size: " + std::to_string(totalPartitionSizeGB) + " GB";
    std::cout << statusReport;
  }
  else
  {
    std::cout << "Not Autorized to view the details !";
  }

  return 0;
}
