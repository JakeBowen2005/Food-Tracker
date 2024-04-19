// Jake Bowen
// CPSC 121L-19
// April 16, 2024
// jakeeb05@csu.fullerton.edu
// JakeBowen2005

#include "leftover_report.h"
#include <vector>
#include <string>
#include <map>
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
LeftoverReport::LeftoverReport(const std::vector<LeftoverRecord>& leftover_records)
    : leftover_records_(leftover_records) {}
std::vector<std::string> LeftoverReport::MostCommonlLeftover() const {
    std::map<std::string, int> counts;
    for (const auto &record : leftover_records_) {
        counts[record.GetFoodName()]++;
    }
    int max_count = 0;
    for (const auto &pair : counts) {
        max_count = std::max(max_count, pair.second);
    }
    std::vector<std::string> most_common;
    for (const auto &pair : counts) {
        if (pair.second == max_count) {
            most_common.push_back(pair.first);
        }
    }
    return most_common;
}
std::vector<std::string> LeftoverReport::MostCostlyLeftoverProducingMeals() const {
    std::map<std::string, double> cost_map;
    for (const auto &record : leftover_records_) {
        cost_map[record.Meal()] += record.GetCost();
    }
    double max_cost = 0;
    for (const auto &pair : cost_map) {
        max_cost = std::max(max_cost, pair.second);
    }

    std::vector<std::string> most_costly;
    for (const auto &pair : cost_map) {
        if (pair.second == max_cost) {
            most_costly.push_back(pair.first);
        }
    }
    return most_costly;
}
double LeftoverReport::TotalCostOfLeftover() const {
    double total_cost = 0.0;
    for (const auto &record : leftover_records_) {
        total_cost += record.GetCost()
    }
    return total_cost;
}
std::vector<std::string> LeftoverReport::MostCommonLeftoverReasons() const {
    std::map<std::string, int> reason_map;
    for (const auto &record : leftover_records_) {
        reason_map[record.GetLeftOverReason()]++;
    }
    int max_count = 0;
    for (const auto &pair : reason_map) {
        max_count = std::max(max_count, pair.second);
    }
    std::vector<std::string> most_reason;
    for (const auto &pair : reason_map) {
        if (max_count == pair.second) {
            most_reason.push_back(pair.first);
        }
    }
    return most_reason;
}
std::vector<std::string> LeftoverReport::MostCommonDisposalMechanisms() const {
    std::map<std::string, int> disposal_map;
    for (const auto &record : leftover_records_) {
        disposal_map[record.GetDisposalMechanism()]++;
    }
    int max_count = 0;
    for (const auto &pair : disposal_map) {
        max_count = std::max(max_count, pair.second);
    }
    std::vector<std::string> common_disposal;
    for (const auto &pair : disposal_map) {
        if (max_count == pair.second) {
            common_disposal.push_back(pair.first);
        }
    }
    return common_disposal;
}
std::vector<std::string> LeftoverReport::SuggestLeftoverReductionStrategies() const {
  std::map<std::string, int> suggest_map;
  for (const auto& record : leftover_records_) {
    suggest_map[record.GetLeftOverReason()]++;
  }

  std::vector<std::string> suggestions;
  int max_count = 0;
  std::string most_common_reason;

  for (const auto& pair : suggest_map) {
    if (pair.second > max_count) {
      max_count = pair.second;
      most_common_reason = pair.first;
    }
  }

  if (most_common_reason == "Expired") {
    suggestions.push_back("Donate before the expiration");
  } else if (most_common_reason == "Tastes bad") {
    suggestions.push_back("Buy less food");
  } else if (most_common_reason == "Too much leftovers") {
    suggestions.push_back("Cook small servings");
  }
  suggestions.push_back("Recycle left overs");

  return suggestions;
}
