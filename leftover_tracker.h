#ifndef LEFTOVER_TRACKER_H_
#define LEFTOVER_TRACKER_H_

// Jake Bowen
// CPSC 121L-19
// April 16, 2024
// jakeeb05@csu.fullerton.edu
// JakeBowen2005

#include <string>
#include <vector>

#include "leftover_record.h"
#include "leftover_report.h"

class LeftoverTracker {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverTracker class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 private:
  std::vector<LeftoverRecord> records_;

 public:
  bool AddRecord(const LeftoverRecord& record) {
    if (records_.empty() == true) {
      records_.push_back(record);
      return true;
    } else {
      for (auto& it : records_) {
        if (it.GetCost() == record.GetCost() &&
            it.GetDate() == record.GetDate() &&
            it.GetDisposalMechanism() == record.GetDisposalMechanism() &&
            it.GetFoodName() == record.GetFoodName() &&
            it.GetMeal() == record.GetMeal() &&
            it.GetQuantity() == record.GetQuantity() &&
            it.GetLeftoverReason() == record.GetLeftoverReason()) {
          return false;
        } else {
          records_.push_back(record);
          return true;
        }
      }
    }
    return true;
  }

  const std::vector<LeftoverRecord>& GetRecords() const { return records_; }

  LeftoverReport generateLeftoverReport() const {
    return LeftoverReport(records_);
  }
};

#endif
