// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <ceres/sized_cost_function.h>

#include <sym/pose3.h>
#include <sym/rot3.h>

namespace hyperion::ceres {

class Pose3Rot3SensorPriorCostFunction final : public ::ceres::SizedCostFunction<3, 7, 4> {
 public:
  /// Constructor.
  explicit Pose3Rot3SensorPriorCostFunction(const sym::Pose3<double>& prior,
                                            const Eigen::Matrix<double, 3, 3>& sqrtInfo)
      : y_{prior}, sqrt_info_{sqrtInfo} {}

  /// prior accessor.
  [[nodiscard]] auto prior() const -> const sym::Pose3<double>& {
    return y_;
  }

  /// prior modifier.
  auto prior() -> sym::Pose3<double>& {
    return y_;
  }

  /// sqrtInfo accessor.
  [[nodiscard]] auto sqrtInfo() const -> const Eigen::Matrix<double, 3, 3>& {
    return sqrt_info_;
  }

  /// sqrtInfo modifier.
  auto sqrtInfo() -> Eigen::Matrix<double, 3, 3>& {
    return sqrt_info_;
  }

  /// See documentation of base class.
  /// @note Returns (tangent_dim x ambient_dim) Jacobians stored in row-major order.
  auto Evaluate(double const* const* parameters, double* residuals, double** jacobians) const
      -> bool override;

 private:
  sym::Pose3<double> y_;
  Eigen::Matrix<double, 3, 3> sqrt_info_;
};

}  // namespace hyperion::ceres
