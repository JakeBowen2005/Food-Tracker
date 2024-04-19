// Jake Bowen
// CPSC 121L-19
// April 16, 2024
// jakeeb05@csu.fullerton.edu
// JakeBowen2005

#include "leftover_report.h"
// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_report.h), only
// if you didn't implement them inline within leftover_report.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftoverReport
// class.
// ===================================================================
std::vector<std::string> LeftoverReport::MostCommonlLeftover() const {
    return most_common_leftover_;
}
std::vector<std::string> LeftoverReport::MostCostlyLeftoverProducingMeals() const {
    return most_costly_leftover_producing_meals_;
}
double LeftoverReport::TotalCostOfLeftover() const {
    return total_cost_of_leftovers_;
}
std::vector<std::string> LeftoverReport::MostCommonLeftoverReasons() const {
    return most_common_leftover_reasons_;
}
std::vector<std::string> LeftoverReport::MostCommonDisposalMechanisms() const {
    return most_common_disposal_mechanisms_;
}
std::vector<std::string> LeftoverReport::SuggestLeftoverReductionStrategies() const {
    suggested_strategies_to_reduce_leftovers_;
}
