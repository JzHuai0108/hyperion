// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <sym/pose2.h>

#include "hyperion/cost_functions/sized_cost_function.hpp"

namespace hyperion {

class Pose2SensorRelativeAngleBetweenCostFunction final
    : public SizedCostFunction<1, ConstexprGroupDims<4, 3>, ConstexprGroupDims<4, 3>,
                               ConstexprGroupDims<4, 3>, ConstexprGroupDims<4, 3>> {
 public:
  /// Constructor.
  explicit Pose2SensorRelativeAngleBetweenCostFunction(const Eigen::Matrix<Scalar, 1, 1>& adb,
                                                       const Eigen::Matrix<Scalar, 1, 1>& sqrtInfo)
      : a_d_b_{adb}, sqrt_info_{sqrtInfo} {}

  /// adb accessor.
  [[nodiscard]] auto adb() const -> const Eigen::Matrix<Scalar, 1, 1>& {
    return a_d_b_;
  }

  /// adb modifier.
  auto adb() -> Eigen::Matrix<Scalar, 1, 1>& {
    return a_d_b_;
  }

  /// sqrtInfo accessor.
  [[nodiscard]] auto sqrtInfo() const -> const Eigen::Matrix<Scalar, 1, 1>& {
    return sqrt_info_;
  }

  /// sqrtInfo modifier.
  auto sqrtInfo() -> Eigen::Matrix<Scalar, 1, 1>& {
    return sqrt_info_;
  }

  /// See documentation of base class.
  /// @note Returns (tangent_dim x tangent_dim) Jacobians stored in column-major order.
  auto evaluate(Scalar const* const* parameters, Scalar* residuals, Scalar** jacobians) const
      -> bool override;

 private:
  Eigen::Matrix<Scalar, 1, 1> a_d_b_;
  Eigen::Matrix<Scalar, 1, 1> sqrt_info_;
};

}  // namespace hyperion
