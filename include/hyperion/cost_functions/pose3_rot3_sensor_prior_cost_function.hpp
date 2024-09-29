// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <sym/pose3.h>
#include <sym/rot3.h>

#include "hyperion/cost_functions/sized_cost_function.hpp"

namespace hyperion {

class Pose3Rot3SensorPriorCostFunction final
    : public SizedCostFunction<3, ConstexprGroupDims<7, 6>, ConstexprGroupDims<4, 3>> {
 public:
  /// Constructor.
  explicit Pose3Rot3SensorPriorCostFunction(const sym::Pose3<Scalar>& prior,
                                            const Eigen::Matrix<Scalar, 3, 3>& sqrtInfo)
      : y_{prior}, sqrt_info_{sqrtInfo} {}

  /// prior accessor.
  [[nodiscard]] auto prior() const -> const sym::Pose3<Scalar>& {
    return y_;
  }

  /// prior modifier.
  auto prior() -> sym::Pose3<Scalar>& {
    return y_;
  }

  /// sqrtInfo accessor.
  [[nodiscard]] auto sqrtInfo() const -> const Eigen::Matrix<Scalar, 3, 3>& {
    return sqrt_info_;
  }

  /// sqrtInfo modifier.
  auto sqrtInfo() -> Eigen::Matrix<Scalar, 3, 3>& {
    return sqrt_info_;
  }

  /// See documentation of base class.
  /// @note Returns (tangent_dim x tangent_dim) Jacobians stored in column-major order.
  auto evaluate(Scalar const* const* parameters, Scalar* residuals, Scalar** jacobians) const
      -> bool override;

 private:
  sym::Pose3<Scalar> y_;
  Eigen::Matrix<Scalar, 3, 3> sqrt_info_;
};

}  // namespace hyperion
