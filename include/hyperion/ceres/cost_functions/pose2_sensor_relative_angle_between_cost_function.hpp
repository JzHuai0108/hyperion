// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <ceres/sized_cost_function.h>

#include <sym/pose2.h>

namespace hyperion::ceres {

class Pose2SensorRelativeAngleBetweenCostFunction final
    : public ::ceres::SizedCostFunction<1, 4, 4, 4, 4> {
 public:
  /// Constructor.
  explicit Pose2SensorRelativeAngleBetweenCostFunction(const Eigen::Matrix<double, 1, 1>& adb,
                                                       const Eigen::Matrix<double, 1, 1>& sqrtInfo)
      : a_d_b_{adb}, sqrt_info_{sqrtInfo} {}

  /// adb accessor.
  [[nodiscard]] auto adb() const -> const Eigen::Matrix<double, 1, 1>& {
    return a_d_b_;
  }

  /// adb modifier.
  auto adb() -> Eigen::Matrix<double, 1, 1>& {
    return a_d_b_;
  }

  /// sqrtInfo accessor.
  [[nodiscard]] auto sqrtInfo() const -> const Eigen::Matrix<double, 1, 1>& {
    return sqrt_info_;
  }

  /// sqrtInfo modifier.
  auto sqrtInfo() -> Eigen::Matrix<double, 1, 1>& {
    return sqrt_info_;
  }

  /// See documentation of base class.
  /// @note Returns (tangent_dim x ambient_dim) Jacobians stored in row-major order.
  auto Evaluate(double const* const* parameters, double* residuals, double** jacobians) const
      -> bool override;

 private:
  Eigen::Matrix<double, 1, 1> a_d_b_;
  Eigen::Matrix<double, 1, 1> sqrt_info_;
};

}  // namespace hyperion::ceres
