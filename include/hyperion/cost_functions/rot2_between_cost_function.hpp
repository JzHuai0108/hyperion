// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <sym/rot2.h>

#include "hyperion/cost_functions/sized_cost_function.hpp"

namespace hyperion {

class Rot2BetweenCostFunction final
    : public SizedCostFunction<1, ConstexprGroupDims<2, 1>, ConstexprGroupDims<2, 1>> {
 public:
  /// Constructor.
  explicit Rot2BetweenCostFunction(const sym::Rot2<Scalar>& xTy,
                                   const Eigen::Matrix<Scalar, 1, 1>& sqrtInfo)
      : x_T_y_{xTy}, sqrt_info_{sqrtInfo} {}

  /// xTy accessor.
  [[nodiscard]] auto xTy() const -> const sym::Rot2<Scalar>& {
    return x_T_y_;
  }

  /// xTy modifier.
  auto xTy() -> sym::Rot2<Scalar>& {
    return x_T_y_;
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
  sym::Rot2<Scalar> x_T_y_;
  Eigen::Matrix<Scalar, 1, 1> sqrt_info_;
};

}  // namespace hyperion
