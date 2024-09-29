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

class Spline3Pose3Rot3SensorRelativeBetweenCostFunction final
    : public SizedCostFunction<3, ConstexprGroupDims<7, 6>, ConstexprGroupDims<7, 6>,
                               ConstexprGroupDims<7, 6>, ConstexprGroupDims<7, 6>,
                               ConstexprGroupDims<7, 6>, ConstexprGroupDims<7, 6>,
                               ConstexprGroupDims<7, 6>, ConstexprGroupDims<7, 6>,
                               ConstexprGroupDims<7, 6>, ConstexprGroupDims<7, 6>> {
 public:
  /// Constructor.
  explicit Spline3Pose3Rot3SensorRelativeBetweenCostFunction(
      const Eigen::Matrix<Scalar, 3, 1>& lambdas_x, const Eigen::Matrix<Scalar, 3, 1>& lambdas_y,
      const sym::Rot3<Scalar>& aTb, const Eigen::Matrix<Scalar, 3, 3>& sqrtInfo)
      : lambdas_x_{lambdas_x}, lambdas_y_{lambdas_y}, a_T_b_{aTb}, sqrt_info_{sqrtInfo} {}

  /// lambdas_x accessor.
  [[nodiscard]] auto lambdas_x() const -> const Eigen::Matrix<Scalar, 3, 1>& {
    return lambdas_x_;
  }

  /// lambdas_x modifier.
  auto lambdas_x() -> Eigen::Matrix<Scalar, 3, 1>& {
    return lambdas_x_;
  }

  /// lambdas_y accessor.
  [[nodiscard]] auto lambdas_y() const -> const Eigen::Matrix<Scalar, 3, 1>& {
    return lambdas_y_;
  }

  /// lambdas_y modifier.
  auto lambdas_y() -> Eigen::Matrix<Scalar, 3, 1>& {
    return lambdas_y_;
  }

  /// aTb accessor.
  [[nodiscard]] auto aTb() const -> const sym::Rot3<Scalar>& {
    return a_T_b_;
  }

  /// aTb modifier.
  auto aTb() -> sym::Rot3<Scalar>& {
    return a_T_b_;
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
  Eigen::Matrix<Scalar, 3, 1> lambdas_x_;
  Eigen::Matrix<Scalar, 3, 1> lambdas_y_;
  sym::Rot3<Scalar> a_T_b_;
  Eigen::Matrix<Scalar, 3, 3> sqrt_info_;
};

}  // namespace hyperion
