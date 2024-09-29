// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <sym/rot3.h>

#include "hyperion/cost_functions/sized_cost_function.hpp"

namespace hyperion {

class Rot3AngularDistanceCostFunction final
    : public SizedCostFunction<1, ConstexprGroupDims<4, 3>, ConstexprGroupDims<4, 3>> {
 public:
  /// Constructor.
  explicit Rot3AngularDistanceCostFunction(const Eigen::Matrix<Scalar, 1, 1>& xdy,
                                           const Eigen::Matrix<Scalar, 1, 1>& sqrtInfo)
      : x_d_y_{xdy}, sqrt_info_{sqrtInfo} {}

  /// xdy accessor.
  [[nodiscard]] auto xdy() const -> const Eigen::Matrix<Scalar, 1, 1>& {
    return x_d_y_;
  }

  /// xdy modifier.
  auto xdy() -> Eigen::Matrix<Scalar, 1, 1>& {
    return x_d_y_;
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
  Eigen::Matrix<Scalar, 1, 1> x_d_y_;
  Eigen::Matrix<Scalar, 1, 1> sqrt_info_;
};

}  // namespace hyperion
