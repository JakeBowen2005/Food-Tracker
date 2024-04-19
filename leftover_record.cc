// Jake Bowen
// CPSC 121L-19
// April 16, 2024
// jakeeb05@csu.fullerton.edu
// JakeBowen2005

#include "leftover_record.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_record.h), only
// if you didn't implement them inline within leftover_record.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftLeftoverRecord
// class.
// ===================================================================
void LeftoverRecord::SetDate(const std::string& date) {
    date_ = date;
}
const std::string& LeftoverRecord::GetDate() const {
    return date_;
}
 void LeftoverRecord::SetMeal(const std::string& meal) {
    meal_ = meal;
 }
 const std::string& LeftoverRecord::GetMeal() const {
    return meal_;
 }
 void LeftoverRecord::SetFoodName(const std::string& food_name) {
    food_name_ = food_name;
 }
 const std::string& LeftoverRecord::GetFoodName() const {
    return food_name_;
 }
 void LeftoverRecord::SetQuantityInOz(double qty_in_oz) {
    qty_in_oz_ = qty_in_oz;
 }
 const double LeftoverRecord::GetQuantityInOz() const {
    return qty_in_oz_;
 }
 void LeftoverRecord::SetLeftOverReason(const std::string& leftover_reason) {
    leftover_reason_ = leftover_reason;
 }
 const std::string& LeftoverRecord::GetLeftOverReason() const {
    return leftover_reason_;
 }
 void LeftoverRecord::SetDisposalMechanism(const std::string& disposal_mechanism) {
    disposal_mechanism_ = disposal_mechanism;
 }
 const std::string LeftoverRecord::GetDisposalMechanism() const {
    return disposal_mechanism_;
 }
 void LeftoverRecord::SetCost(double cost) {
    cost_ = cost;
 }
 const double LeftoverRecord::GetCost() const {
    return cost_;
 }