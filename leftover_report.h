#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_

// Jake Bowen
// CPSC 121L-19
// April 16, 2024
// jakeeb05@csu.fullerton.edu
// JakeBowen2005

class LeftoverReport {
 public:
  LeftoverReport(const std::vector<LeftoverRecord> &leftover_records);

  std::vector<std::string> MostCommonlLeftover() const ;
  std::vector<std::string> MostCostlyLeftoverProducingMeals() const ;
  double TotalCostOfLeftover() const ;
  std::vector<std::string> MostCommonLeftoverReasons() const ;
  std::vector<std::string> MostCommonDisposalMechanisms() const;
  std::vector<std::string> SuggestLeftoverReductionStrategies() const;

 private:
  const std::vector<LeftoverRecord> &leftover_records_;
  std::vector<std::string> most_common_leftover_;
  std::vector<std::string> most_costly_leftover_producing_meals_;
  double total_cost_of_leftovers_;
  std::vector<std::string> most_common_leftover_reasons_;
  std::vector<std::string> most_common_disposal_mechanisms_;
  std::vector<std::string> suggested_strategies_to_reduce_leftovers_;

    // ======================= YOUR CODE HERE =======================
     // Write the LeftoverReport class here. Refer to your class design for the
     // member variables, constructors, and member functions needed.
     //
     // Note: mark functions that do not modify the member variables
     // as const, by writing `const` after the parameter list.
     // Pass objects by const reference when appropriate.
     // Remember that std::string is an object!
     // ===============================================================
};

#endif
