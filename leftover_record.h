#ifndef LEFTOVER_RECORD_H_
#define LEFTOVER_RECORD_H_

// Jake Bowen
// CPSC 121L-19
// April 16, 2024
// jakeeb05@csu.fullerton.edu
// JakeBowen2005

#include <iostream>
#include <string>

class LeftoverRecord {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverRecord class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 private:
  std::string date_;
  std::string meal_;
  std::string food_name_;
  double quantity_oz_;
  std::string left_reason_;
  std::string disp_mech_;
  double cost_;

 public:
  LeftoverRecord(std::string date, std::string meal, std::string food_name,
                 double quantity_ounces, std::string leftover_reason,
                 std::string disposal_mechanism, double cost)
      : date_(date),
        meal_(meal),
        food_name_(food_name),
        quantity_oz_(quantity_ounces),
        left_reason_(leftover_reason),
        disp_mech_(disposal_mechanism),
        cost_(cost) {}
  LeftoverRecord() {
    date_ = "no date";
    meal_ = "no meal";
    food_name_ = "no food name";
    quantity_oz_ = 0.0;
    left_reason_ = "no leftover reason";
    disp_mech_ = "no disposal mechanism";
    cost_ = 0.0;
  }
  // Mutators
  void SetDate(const std::string &date) { date_ = date; }

  void SetMeal(const std::string &meal) { meal_ = meal; }

  void SetFoodName(const std::string &food_name) { food_name_ = food_name; }

  void SetQuantity(double quantity) { quantity_oz_ = quantity; }

  void SetLeftoverReason(const std::string &left_reason) {
    left_reason_ = left_reason;
  }

  void SetDisposalMechanism(const std::string &disp_mech) {
    disp_mech_ = disp_mech;
  }

  void SetCost(double cost) { cost_ = cost; }

  // Getters

  std::string GetDate() const { return date_; }

  std::string GetMeal() const { return meal_; }

  std::string GetFoodName() const { return food_name_; }

  double GetQuantity() const { return quantity_oz_; }

  std::string GetLeftoverReason() const { return left_reason_; }

  std::string GetDisposalMechanism() const { return disp_mech_; }

  double GetCost() const { return cost_; }
};

#endif
