// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <sym/pose2.h>

#include "hyperion/cost_functions/sized_cost_function.hpp"

namespace hyperion {

class Spline3Pose2SensorBetweenCostFunction final
    : public SizedCostFunction<3, ConstexprGroupDims<4, 3>, ConstexprGroupDims<4, 3>,
                               ConstexprGroupDims<4, 3>, ConstexprGroupDims<4, 3>,
                               ConstexprGroupDims<4, 3>, ConstexprGroupDims<4, 3>> {
 public:
  /// Constructor.
  explicit Spline3Pose2SensorBetweenCostFunction(const Eigen::Matrix<Scalar, 3, 1>& lambdas,
                                                 const sym::Pose2<Scalar>& sTy,
                                                 const Eigen::Matrix<Scalar, 3, 3>& sqrtInfo)
      : lambdas_{lambdas}, s_T_y_{sTy}, sqrt_info_{sqrtInfo} {}

  /// lambdas accessor.
  [[nodiscard]] auto lambdas() const -> const Eigen::Matrix<Scalar, 3, 1>& {
    return lambdas_;
  }

  /// lambdas modifier.
  auto lambdas() -> Eigen::Matrix<Scalar, 3, 1>& {
    return lambdas_;
  }

  /// sTy accessor.
  [[nodiscard]] auto sTy() const -> const sym::Pose2<Scalar>& {
    return s_T_y_;
  }

  /// sTy modifier.
  auto sTy() -> sym::Pose2<Scalar>& {
    return s_T_y_;
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
  Eigen::Matrix<Scalar, 3, 1> lambdas_;
  sym::Pose2<Scalar> s_T_y_;
  Eigen::Matrix<Scalar, 3, 3> sqrt_info_;
};

}  // namespace hyperion
