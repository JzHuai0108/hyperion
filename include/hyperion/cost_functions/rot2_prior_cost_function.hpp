// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <sym/rot2.h>

#include "hyperion/cost_functions/sized_cost_function.hpp"

namespace hyperion {

class Rot2PriorCostFunction final : public SizedCostFunction<1, ConstexprGroupDims<2, 1>> {
 public:
  /// Constructor.
  explicit Rot2PriorCostFunction(const sym::Rot2<Scalar>& prior,
                                 const Eigen::Matrix<Scalar, 1, 1>& sqrtInfo)
      : y_{prior}, sqrt_info_{sqrtInfo} {}

  /// prior accessor.
  [[nodiscard]] auto prior() const -> const sym::Rot2<Scalar>& {
    return y_;
  }

  /// prior modifier.
  auto prior() -> sym::Rot2<Scalar>& {
    return y_;
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
  sym::Rot2<Scalar> y_;
  Eigen::Matrix<Scalar, 1, 1> sqrt_info_;
};

}  // namespace hyperion
