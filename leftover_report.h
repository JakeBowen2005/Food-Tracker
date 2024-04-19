#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_

// Jake Bowen
// CPSC 121L-19
// April 16, 2024
// jakeeb05@csu.fullerton.edu
// JakeBowen2005

#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

#include "leftover_record.h"

class LeftoverReport {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverReport class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 private:
  const std::vector<LeftoverRecord>& records_;
  // std::vector<std::string> most_commonly_wasted_foods_;
  std::vector<std::string> most_costly_leftover_producing_meals_;
  double total_cost_of_food_leftover_;
  std::vector<std::string> most_common_leftover_reasons_;
  std::vector<std::string> most_common_disposal_mechanisms_;
  std::vector<std::string> suggested_strategies_to_reduce_leftover_;

 public:
  LeftoverReport(const std::vector<LeftoverRecord>& records)
      : records_(records) {}

  // Accessors
  std::vector<std::string> GetMostLeftoverFoods() const {
    std::unordered_map<std::string, int> foodCount;

    for (const auto& it : records_) {
      foodCount[it.GetFoodName()]++;
    }

    std::vector<std::string> mostLeftover;
    int maxC = 0;

    for (const auto& it : foodCount) {
      if (it.second > maxC) {
        maxC = it.second;
        mostLeftover = {it.first};
      } else if (it.second == maxC) {
        mostLeftover.push_back(it.first);
      }
    }
    return mostLeftover;
  }

  std::vector<std::string> GetMostCostlyLeftoverProducingMeals() const {
    std::unordered_map<std::string, int> LeftoverCount;

    for (const auto& it : records_) {
      LeftoverCount[it.GetMeal()]++;
    }

    std::vector<std::string> mostLeftover;
    int maxC = 0;

    for (const auto& it : LeftoverCount) {
      if (it.second > maxC) {
        maxC = it.second;
        mostLeftover = {it.first};
      } else if (it.second == maxC) {
        mostLeftover.push_back(it.first);
      }
    }
    return mostLeftover;
  }

  double GetTotalCostOfFoodLeftover() const {
    double total_cost = 0;
    for (const auto& it : records_) {
      total_cost += it.GetCost();
    }
    return total_cost;
  }

  std::vector<std::string> MostCommonLeftoverReasons() const {
    std::unordered_map<std::string, int> leftover_reason;
    for (const auto& it : records_) {
      leftover_reason[it.GetLeftoverReason()]++;
    }
    std::vector<std::string> most_common_leftoverreason;
    int max_count = 0;
    for (const auto& it : leftover_reason) {
      if (it.second > max_count) {
        max_count = it.second;
        most_common_leftoverreason = {it.first};
      } else if (it.second == max_count) {
        most_common_leftoverreason.push_back(it.first);
      }
    }
    return most_common_leftoverreason;
  }

  std::vector<std::string> MostCommonDisposalMechanisms() const {
    std::unordered_map<std::string, int> disposal_method;
    for (const auto& it : records_) {
      disposal_method[it.GetDisposalMechanism()]++;
    }
    std::vector<std::string> most_common_disposalmethod;
    int max_count = 0;
    for (const auto& it : disposal_method) {
      if (it.second > max_count) {
        max_count = it.second;
        most_common_disposalmethod = {it.first};
      } else if (it.second == max_count) {
        most_common_disposalmethod.push_back(it.first);
      }
    }
    return most_common_disposalmethod;
  }

  std::vector<std::string> SuggestLeftoverReductionStrategies() const {
    std::set<std::string> recommendations;
    std::vector<std::string> reasons = MostCommonLeftoverReasons();

    bool expired =
        std::find(reasons.begin(), reasons.end(), "Expired") != reasons.end();
    for (const auto& txt : reasons) {
      if (txt == "Expired") {
        recommendations.insert("Donate before expiration");
      } else if (txt == "Tastes bad") {
        recommendations.insert("Buy less food");
      } else if (txt == "Too much left overs") {
        recommendations.insert("Buy less food");
        recommendations.insert("Cook small servings");
      }
    }
    if (!expired && !reasons.empty()) {
      recommendations.insert("Recycle left overs");
    }
    std::vector<std::string> suggestedstrategies(recommendations.begin(),
                                                 recommendations.end());
    return suggestedstrategies;
  }
};
#endif
